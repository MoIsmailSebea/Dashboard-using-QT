import QtQuick 2.15
import QtQuick.Window 2.15
import "UI/BottomBar"
import "UI/RightScreen"
import "UI/LeftScreen"


Window {
    width: 1280
    height: 720
    visible: true
    title: qsTr("Tesla Infotainment")


    BottomBar {
        id: bottomBar
    }


    RightScreen {
        id: rightScreen
    }

    YouTubeScreen {
        id: youtubeScreen
    }

    CallScreen {
        id: callScreen
    }

    LeftScreen {
        id: leftScreen
    }

    MusicScreen {
        id: musicScreen
    }

    CarSettings {
        id: carSettings
    }
}
