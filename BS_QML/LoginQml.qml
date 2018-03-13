import QtQuick 2.7
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4
import QtQuick.Layouts 1.3
import CE_Login 1.0

Rectangle {
    id:loginqml;
    width:600;
    height: 400;
    visible: true;
    anchors.fill: parent;


    property string fontFamily : "Microsoft YaHei";
    property var fontSize : 20;
    property alias idText: loginIDTextField.text;
    property alias passwordText: loginPasswordTextField.text;

    Image {
        width: parent.width;
        height: parent.height;
        source: "Image/BlueIntheSky.jpg"
    }

    CE_Login {
        id: ce_Login;
    }

    Rectangle{
        id:loginCenterRectangle;
        width: loginqml.width / 3;
        height: loginqml.height / 3;
        color: "#00FFFFFF";
        anchors.centerIn: parent;

        ColumnLayout{
            anchors.fill: parent
            spacing: 6
            //用户名
            Rectangle{
                id:loginIDRectangle;
                width: parent.width;
                height: parent.height / 3;
                Layout.fillWidth: true;
                color: "#00FFFFFF";
                RowLayout{
                    anchors.fill: parent;
                    spacing: 10;
                    anchors.leftMargin: 20;
                    Text{
                        id:loginIDText;
                        width: (parent.width / 3);
                        height: parent.height;
                        text: "用户名:";
                        color: "white";
                        font.family: fontFamily;
                        font.pixelSize: fontSize;
                        horizontalAlignment:Text.AlignHCenter;
                        verticalAlignment:Text.AlignVCenter;

                    }

                    TextField {
                        id:loginIDTextField;
                        height: parent.height;
                        Layout.minimumWidth: ((parent.width) * 2 / 3);
                        Layout.maximumWidth: 2000;
                        Layout.minimumHeight: parent.height;

                        font.family: fontFamily;
                        font.pixelSize: fontSize;

                        text:"";
                        focus: true;

                        style: TextFieldStyle {
                            id:loginIDTextFieldStyle;
                            textColor: "black"

                            background: Rectangle {
                                id:loginIDbackground;
                                radius: 2
                                implicitWidth: 100
                                implicitHeight: 24
                                border.color: "#333"
                                border.width: 1
                            }
                        }
                    }
                }
            }

            //密码
            Rectangle{
                id:loginPasswordRectangle;
                visible: true;
                width: parent.width;
                height: parent.height / 3;
                color: "#00FFFFFF";
                Layout.fillWidth: true;
                RowLayout{
                    anchors.fill: parent;
                    spacing: 10;
                    anchors.leftMargin: 20;
                    Text{
                        id:loginPasswordText;
                        width: (parent.width / 3);
                        height: parent.height;
                        text: "密   码:";
                        color: "white";
                        font.family: fontFamily;
                        font.pixelSize: fontSize;
                        horizontalAlignment:Text.AlignHCenter;
                        verticalAlignment:Text.AlignVCenter;

                    }

                    TextField {
                        id:loginPasswordTextField;
                        height: parent.height;
                        Layout.minimumWidth: ((parent.width) * 2 / 3);
                        Layout.maximumWidth: 2000;
                        Layout.minimumHeight: parent.height;
                        font.family: fontFamily;
                        font.pixelSize: fontSize;

                        text:"";
                        echoMode: TextInput.Password;
                        validator: DoubleValidator{}
                        style: TextFieldStyle {
                            textColor: "black"

                            background: Rectangle {
                                radius: 2
                                implicitWidth: 100
                                implicitHeight: 24
                                border.color: "#333"
                                border.width: 1
                            }
                        }
                    }
                }
            }

            //登陆按钮
            Rectangle{
                id:loginButtonRectangle;
                Layout.minimumWidth: parent.width;
                Layout.maximumWidth: 2000;
                Layout.minimumHeight: parent.height / 3;
                Layout.maximumHeight: parent.height;

                color: "#00FFFFFF";

                Button {
                    id: loginButton;
                    width: parent.width / 2;
                    height: parent.height / 2;
                    anchors.centerIn: parent;
                    anchors.horizontalCenter: parent.horizontalCenter;
                    anchors.verticalCenter: parent.verticalCenter;
                    style: ButtonStyle {
                        background: Rectangle {
                            implicitWidth: 100
                            implicitHeight: 25
                            color: "#00FFFFFF";
                            BorderImage {
                                id: loginButtonBorderImage;
                                source: {
                                    if(control.hovered)
                                    {
                                        if(control.pressed)
                                        {
                                             "Image/num0_press.png"
                                        }
                                        else
                                        {
                                            "Image/num0_press.png"
                                        }
                                    }
                                    else
                                    {
                                        "Image/num0_normal.png"
                                    }
                                }
                                width: parent.width;
                                height: parent.height;
                                anchors.fill: parent
                            }
                        }
                        label: Text {
                            renderType: Text.NativeRendering
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignHCenter
                            font.family: fontFamily;
                            font.pixelSize: fontSize;
                            text: qsTr("登  录");
                            color: {
                                if(control.hovered)
                                {
                                    if(control.pressed)
                                    {
                                         "white";
                                    }
                                    else
                                    {
                                        "white";
                                    }
                                }
                                else
                                {
                                    "black"
                                }
                            }
                        }
                    }

                    onClicked: {
                        onloginButtonClicked();
                    }
                }
            }
        }
    }

    Component.onCompleted: {
        console.log("Component.onCompleted ");
    }


    /*****************功能**********************/

    function onloginButtonClicked()
    {  
        console.log("onloginButtonClicked ", idText,passwordText);
        ce_Login.loginWidget(idText,passwordText);
    }


}
