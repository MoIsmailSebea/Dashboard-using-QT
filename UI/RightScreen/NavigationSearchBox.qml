import QtQuick 2.15

Rectangle {
    id: navSearchBox
    radius: 5
    color: "white"

    Image {
        id: searchIcon
        width: parent.width / 7
        height: width
        anchors {
            verticalCenter: parent.verticalCenter
            left: parent.left
            leftMargin: 10
        }
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/search.png"
    }

    Text {
        id: navSearchPlace
        visible: navTextInput.text === ""
        color: "#cccccc"
        anchors {
            left: searchIcon.right
            leftMargin: 20
            verticalCenter: parent.verticalCenter
        }
        text: "Navigate"
    }

    TextInput {
        id: navTextInput
        clip: true
        anchors {
            left: searchIcon.right
            leftMargin: 20
            verticalCenter: parent.verticalCenter
        }
        focus: true
        verticalAlignment: Text.AlignVCenter
        width: parent.width / 1.5
    }

}
