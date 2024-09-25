import QtQuick 2.15

Rectangle {
    id: bottomBar
    anchors {
        right: parent.right
        left: parent.left
        bottom: parent.bottom
    }
    color: "black"
    height: parent.height / 12

    Component.onCompleted: {
        rightScreen.visible = true
        youtubeScreen.visible = false
        callScreen.visible = false
        musicScreen.visible = false
        leftScreen.visible = true
        carSettings.visible = false
    }

    Image {
        id: carSettingsIcon
        source: "qrc:/UI/Asserts/car.png"
        anchors {
        left: parent.left
        leftMargin: 30
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        MouseArea {
            anchors.fill: parent
            onClicked: {
                leftScreen.visible = false
                carSettings.visible = true
            }
        }
    }

    HVACComponent {
        id: driverHVACControl
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: carSettingsIcon.right
            leftMargin: 150
        }
        hvacController: driverHVAC
    }

    HVACComponent {
        id: passengerHVACControl
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: volumeLevelControl.left
            rightMargin: 200
        }
        hvacController: passengerHVAC
    }


    VolumeControlComponent {
        id: volumeLevelControl
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: parent.right
            rightMargin: 20
        }
    }

    Image {
        id: mobileIcon
        anchors {
        left: driverHVACControl.right
        leftMargin: 250
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/mobile.png"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                rightScreen.visible = false
                youtubeScreen.visible = false
                callScreen.visible= true
                musicScreen.visible = false
            }
        }
    }

    Image {
        id: voiceIcon
        anchors {
        left: mobileIcon.right
        leftMargin: 25
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/voice.png"
    }

    Image {
        id: navigationIcon
        anchors {
        left: voiceIcon.right
        leftMargin: 25
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/google-maps.png"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                rightScreen.visible = true
                youtubeScreen.visible = false
                callScreen.visible= false
                musicScreen.visible = false
            }
        }
    }

    Image {
        id: scheduleIcon
        anchors {
        left: navigationIcon.right
        leftMargin: 25
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/schedule.png"
    }

    Image {
        id: youtubeIcon
        source: "qrc:/UI/Asserts/youtube.png"  // Make sure to have a YouTube icon
        anchors {
            left: scheduleIcon.right
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit

        MouseArea {
            anchors.fill: parent
            onClicked: {
                rightScreen.visible = false
                youtubeScreen.visible = true
                callScreen.visible= false
                musicScreen.visible = false
            }
        }
    }

    Image {
        id: musicIcon
        anchors {
        left: youtubeIcon.right
        leftMargin: 25
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.75
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/spotify.png"
        MouseArea {
            anchors.fill: parent
            onClicked: {
                rightScreen.visible = false
                youtubeScreen.visible = false
                callScreen.visible = false
                musicScreen.visible = true
            }
        }
    }

}
