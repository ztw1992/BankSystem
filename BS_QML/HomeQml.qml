import QtQuick 2.0
import QtQuick.Layouts 1.3


Rectangle {

    id:homeRectangle;
    color: "#00FFFFFF";
    objectName:"HomeQml";
    visible: true;
    anchors.fill: parent;

    Column {
        anchors.fill: parent;
        spacing: 0;
        //标题栏
        Rectangle {
            id:homeTitle;
            width: parent.width;
            height: parent.height / 10;
            color: "#13b131"
        }

        Rectangle {
            id:homeCenterRectangle;
            width:  parent.width;
            height: parent.height * 9 / 10;
            color: "#00FFFFFF";
            Row{
                anchors.fill: parent
                spacing: 0;

                //左侧列表
                Rectangle {
                    id:homeLeft;
                    width: parent.width / 5;
                    height: parent.height;
                    color: "#d31030"

                    HomeSelectTreeView{
                        anchors.centerIn: parent;
                        width: parent.width;
                        height: parent.height;
                    }
                }

                //右侧功能区
                Rectangle {
                    id:homeRight;
                    width: parent.width * 4 / 5;
                    height: parent.height;
                    color: "#d1b030"
                }
            }
        }
    }

}
