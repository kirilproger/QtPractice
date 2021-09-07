import QtQuick 2.12
import QtQuick.Window 2.12

Window{
    visible: true
    width:640
    height: 480
    title: qsTr("Hello World");
    Rectangle{
        id:rect1;
        x:12;y:34
        width: 140;height: 120
        color:"green"
    }
}
