import QtQuick 2.15

Item {
    property var hvacController

    width: 53.8125 * ( parent.width / 1280 )

    Rectangle {
        id: decrementButton
        anchors {
            left: parent.left
            top: parent.top
            bottom: parent.bottom
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
            onClicked: hvacController.incrementTargetTemp ( -1 )
        }
    }

    Text {
        id: targetTempText
        anchors {
            left: decrementButton.right
            leftMargin: 10
            verticalCenter: parent.verticalCenter
        }
        color: "white"
        font.pixelSize: 30
        text: hvacController.targetTemp
    }

    Rectangle {
        id: incrementButton
        anchors {
            left: targetTempText.right
            leftMargin: 10
            top: parent.top
            bottom: parent.bottom
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
            onClicked: hvacController.incrementTargetTemp ( 1 )
        }
    }
}
