import QtQuick 2.15
import QtLocation 5.12
import QtPositioning 5.12

Rectangle {
    id: rightScreen
    anchors {
        right: parent.right
        top: parent.top
        bottom: bottomBar.top
    }
    Plugin {
            id: mapPlugin
            name: "osm"
        }

        Map {
            id: map
            anchors.fill: parent
            plugin: mapPlugin
            center: QtPositioning.coordinate(30.02, 31.13) // Oslo
            zoomLevel: 14
            property geoCoordinate startCentroid

            PinchHandler {
                id: pinch
                target: null
                onActiveChanged: if (active) {
                    map.startCentroid = map.toCoordinate(pinch.centroid.position, false)
                }
                onScaleChanged: (delta) => {
                    map.zoomLevel += Math.log2(delta)
                    map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
                }
                onRotationChanged: (delta) => {
                    map.bearing -= delta
                    map.alignCoordinateToPoint(map.startCentroid, pinch.centroid.position)
                }
                grabPermissions: PointerHandler.TakeOverForbidden
            }
            WheelHandler {
                id: wheel
                // workaround for QTBUG-87646 / QTBUG-112394 / QTBUG-112432:
                // Magic Mouse pretends to be a trackpad but doesn't work with PinchHandler
                // and we don't yet distinguish mice and trackpads on Wayland either
                acceptedDevices: Qt.platform.pluginName === "cocoa" || Qt.platform.pluginName === "wayland"
                                 ? PointerDevice.Mouse | PointerDevice.TouchPad
                                 : PointerDevice.Mouse
                rotationScale: 1/120
                property: "zoomLevel"
            }
            DragHandler {
                id: drag
                target: null
                onTranslationChanged: (delta) => map.pan(-delta.x, -delta.y)
            }
            Shortcut {
                enabled: map.zoomLevel < map.maximumZoomLevel
                sequence: StandardKey.ZoomIn
                onActivated: map.zoomLevel = Math.round(map.zoomLevel + 1)
            }
            Shortcut {
                enabled: map.zoomLevel > map.minimumZoomLevel
                sequence: StandardKey.ZoomOut
                onActivated: map.zoomLevel = Math.round(map.zoomLevel - 1)
            }
        }


        Image {
            id: lockIcon
            anchors {
                left: parent.left
                top: parent.top
                margins: 20
            }
            width: parent.width / 50
            height: width  // Keep the image square
            fillMode: Image.PreserveAspectFit
            source: systemHandler.carlocked ? "qrc:/UI/Asserts/lock.png" : "qrc:/UI/Asserts/unlock.png"

            MouseArea {
                anchors.fill: parent
                onClicked: {
                    systemHandler.setCarlocked(!systemHandler.carlocked);
                }
            }
        }

    Text {
        id: dateTimeDisplay
        anchors {
            left: lockIcon.right
            leftMargin: 20
            bottom: lockIcon.bottom
        }

        font.pixelSize: 15
        font.bold: true
        color: "black"

        text: systemHandler.currentTime
    }

    Text {
        id: outdoorTemp
        anchors {
            left: dateTimeDisplay.right
            leftMargin: 20
            bottom: lockIcon.bottom
        }

        font.pixelSize: 15
        font.bold: true
        color: "black"

        text: systemHandler.outdoorTemp + "°C"
    }

    Image {
        id: user
        anchors {
            left: outdoorTemp.right
            leftMargin: 20
            bottom: lockIcon.bottom
        }
        width: parent.width / 50
        height: width  // Keep the image square
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/user.png"
    }

    Text {
        id: userName
        anchors {
            left: user.right
            leftMargin: 5
            bottom: lockIcon.bottom
        }

        font.pixelSize: 15
        font.bold: true
        color: "black"

        text: systemHandler.userName
    }

    NavigationSearchBox {
        id: navSearchBox
        width: parent.width * 1/4
        height: parent.height * 1/12
        anchors {
            left: lockIcon.left
            top: lockIcon.bottom
            topMargin: 15
        }
    }

    width: parent.width * 2/3
}
