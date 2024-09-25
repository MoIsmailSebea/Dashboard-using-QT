import QtQuick 2.15

Rectangle {
    id: leftScreen
    anchors {
        left: parent.left
        right: rightScreen.left
        top: parent.top
        bottom: bottomBar.top
    }
    color: "white"
    Image {
        id: carImage
        anchors.centerIn: parent
        width: parent.width * 0.7
        fillMode: Image.PreserveAspectFit
        source: "qrc:/UI/Asserts/car_model.PNG"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            systemHandler.setCarlocked(!systemHandler.carlocked);  // Toggle lock state
        }
    }
}

