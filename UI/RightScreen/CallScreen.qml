import QtQuick 2.15

Item {
    id: callScreen
    anchors {
        right: parent.right
        left: leftScreen.right
        top: parent.top
        bottom: bottomBar.top
    }
    width: parent.width
    height: parent.height

    Image {
        id: callPic
        source: "qrc:/UI/Asserts/call.PNG"
        anchors {
            horizontalCenter: callScreen.horizontalCenter
            verticalCenter: callScreen.verticalCenter
        }
    }

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
                rightScreen.visible = true
                youtubeScreen.visible = false
                callScreen.visible= false
                musicScreen.visible = false
            }
        }
    }
}
