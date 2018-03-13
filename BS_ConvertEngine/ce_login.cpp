#include "ce_login.h"
#include <QDebug>
#include <QThread>

#include "bs_qml_view.h"
CE_Login::CE_Login(QObject *parent) : QObject(parent)
{

}

void CE_Login::loginWidget(QString id,QString password)
{
    QString info = QString("%1").arg(__FUNCTION__);
    qDebug() << info << id << password;

    QObject * obj = BS_QML_View::instance()->getLoginQml();

    QVariant returnedValue;
    QVariant msg = 1;
    QMetaObject::invokeMethod(obj, "setCurrentQml",
                              Q_RETURN_ARG(QVariant, returnedValue),
                              Q_ARG(QVariant, msg));

}
