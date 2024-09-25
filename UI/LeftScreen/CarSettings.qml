import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: carSettings
    anchors {
        right: rightScreen.left
        left: parent.left
        top: parent.top
        bottom: bottomBar.top
    }
    width: parent.width
    height: parent.height
    color: "white"

    Image {
        id: backIcon
        source: "qrc:/UI/Asserts/back.png"
        anchors.left: parent.left
        anchors.bottom: parent.bottom
        width: 40
        height: 40
        anchors.margins: 10

        MouseArea {
            anchors.fill: parent
            onClicked: {
                carSettings.visible = false;
                leftScreen.visible = true;
            }
        }
    }

    Column {
        anchors.centerIn: parent
        spacing: 100

        Row {
            spacing: 100

            // Traction Control Section
            Rectangle {
                width: 80
                height: 80
                color: "gray"
                radius: 10

                Column {
                    anchors.fill: parent
                    anchors.centerIn: parent

                    Image {
                        source: "qrc:/UI/Asserts/traction.png"
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter: parent.verticalCenter
                        width: 60
                        height: 60

                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                // Correctly access the tractionControl property
                                systemHandler.setTractionControl(!systemHandler.tractionControl);
                            }
                        }
                    }

                    Rectangle {
                        width: 10
                        height: 10
                        color: systemHandler.tractionControl ? "green" : "orange"
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.top: parent.bottom
                        anchors.topMargin: 5
                        radius: 5
                    }
                }
            }

            // Sunroof Section
            Rectangle {
                width: 80
                height: 80
                color: "gray"
                radius: 10

                Column {
                    anchors.fill: parent
                    anchors.centerIn: parent

                    Image {
                        source: "qrc:/UI/Asserts/sun_roof.png"
                        width: 60
                        height: 60
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter: parent.verticalCenter

                        MouseArea {
                            anchors.fill: parent
                            onClicked: {
                                systemHandler.setSunrooflocked(!systemHandler.sunrooflocked);
                            }
                        }
                    }

                    Rectangle {
                        width: 10
                        height: 10
                        color: systemHandler.sunrooflocked ? "orange" : "green"
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.top: parent.bottom
                        anchors.topMargin: 5
                        radius: 5
                    }
                }
            }
        }

        Row {
            spacing: 100

            // Icon 3 Section
            Rectangle {
                width: 80
                height: 80
                color: "gray"
                radius: 10

                Image {
                    source: "qrc:/UI/Asserts/icon3.png"
                    anchors.centerIn: parent
                    width: 60
                    height: 60

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("Icon 3 clicked");
                        }
                    }
                }
            }

            // Icon 4 Section
            Rectangle {
                width: 80
                height: 80
                color: "gray"
                radius: 10

                Image {
                    source: "qrc:/UI/Asserts/icon4.png"
                    anchors.centerIn: parent
                    width: 60
                    height: 60

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            console.log("Icon 4 clicked");
                        }
                    }
                }
            }
        }
    }
}
