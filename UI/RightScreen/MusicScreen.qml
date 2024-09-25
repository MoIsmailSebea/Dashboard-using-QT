import QtQuick 2.15

Rectangle {
    id: musicScreen
    anchors {
        right: parent.right
        left: leftScreen.right
        top: parent.top
        bottom: bottomBar.top
    }
    width: parent.width
    height: parent.height
    color: "green"  // Set the background color

    Text {
        text: "Spotify"  // Text content
        anchors.centerIn: parent  // Center the text within the Rectangle
        font.pixelSize: 24  // Font size
        color: "black"  // Text color
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
