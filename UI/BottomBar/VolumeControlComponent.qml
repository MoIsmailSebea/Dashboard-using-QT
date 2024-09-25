import QtQuick 2.15

Item {

    Connections {
        target: audioController
        function onvolumeLevelChanged() {
            visibleTimer.stop()
            volumeLevel.visible = false
            visibleTimer.start()
        }
    }

    Timer {
        id: visibleTimer
        interval: 1500
        repeat: false
        onTriggered: {
            volumeLevel.visible = true
        }
    }

    Rectangle {
        id: incrementButton
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: parent.right
        }
        width: height / 2
        color: "black"

        Text {
            id: incrementText
            color: "white"
            anchors.centerIn: parent
            text: qsTr(">")
            font.pixelSize: 30
        }
        MouseArea {
            anchors.fill: parent
            onClicked: audioController.incrementVolume ( 1 )
        }
    }

    Image {
        id: volumeLevel
        anchors {
        right: incrementButton.left
        rightMargin: 10
        verticalCenter: parent.verticalCenter
        }
        height: parent.height * 0.5
        fillMode: Image.PreserveAspectFit
        source: {
            if ( audioController.volumeLevel < 1 )
                return "qrc:/UI/Asserts/mute.png"
            else if ( audioController.volumeLevel < 50 )
                return "qrc:/UI/Asserts/low_volume.png"
            else
                return "qrc:/UI/Asserts/high_volume.png"
        }
    }

    Text {
        id: volumeTextLevel
        visible: !volumeLevel.visible
        anchors {
            centerIn: volumeLevel
        }
        color: "white"
        font.pixelSize: 24
        text: audioController.volumeLevel
    }

    Rectangle {
        id: decrementButton
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: volumeLevel.left
            rightMargin: 10
        }
        width: height / 2
        color: "black"

        Text {
            id: decrementText
            color: "white"
            anchors.centerIn: parent
            text: qsTr("<")
            font.pixelSize: 30
        }
        MouseArea {
            anchors.fill: parent
            onClicked: audioController.incrementVolume ( -1 )
        }
    }
}
