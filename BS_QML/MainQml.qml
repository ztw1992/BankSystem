import QtQuick 2.0

Rectangle {
    id:mainQml;
    width:600;
    height: 400;
    visible: true;
    anchors.fill: parent;
    property int currentQml:0
    objectName:"MainQml";


    LoginQml{
        anchors.fill:parent
        visible: currentQml == 0
    }

    HomeQml{
        anchors.fill:parent
        visible: currentQml == 1
    }

    function setCurrentQml(curQmlIndex)
    {
        console.log("setCurrentQml :", curQmlIndex);
        currentQml = curQmlIndex;
    }

}
