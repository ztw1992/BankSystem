#ifndef CE_LOGIN_H
#define CE_LOGIN_H

#include <QObject>
#include "bs_converengine_global.h"

class BS_CONVERTENGIENT_GLOBAL_EXPORT CE_Login : public QObject
{
    Q_OBJECT
public:
    explicit CE_Login(QObject *parent = nullptr);

    /**
     * 登录功能
     * 界面qml按下登录按钮后，调用的函数
     * in：  id:用户名 password:密码
     */
    Q_INVOKABLE void loginWidget(QString id, QString password);

signals:

public slots:
};

#endif // CE_LOGIN_H
