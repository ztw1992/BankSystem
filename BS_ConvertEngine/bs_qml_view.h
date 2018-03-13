#ifndef BS_QML_VIEW_H
#define BS_QML_VIEW_H

#include <QObject>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQuickItem>

#include "bs_converengine_global.h"
class BS_CONVERTENGIENT_GLOBAL_EXPORT BS_QML_View : public QObject
{
    Q_OBJECT
public:
    static BS_QML_View *instance();


    //设置Qml Root
    void setRoot(QQuickView *obj);

    //获取登录 loginObj
    QObject *getLoginQml();
private:
    explicit BS_QML_View(QObject *parent = nullptr);
    static BS_QML_View *m_pIns;
    QQuickView *m_pParent;

    //登录
    QObject * m_pLoginObj;


signals:

public slots:
};

#endif // BS_QML_VIEW_H
