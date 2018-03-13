#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QQmlContext>


#include "../BS_ConvertEngine/ce_login.h"
#include "../BS_ConvertEngine/bs_qml_view.h"
#include "../BS_QML/homeselecttreemodel.h"
int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    qmlRegisterType<CE_Login>("CE_Login", 1, 0, "CE_Login");


    QQuickView *view = new QQuickView;
    HomeSelectTreeModel treeModel;
    view->rootContext()->setContextProperty("HomeSelectTreeModel", &treeModel);

//    view->setSource(QUrl(QStringLiteral("../../BankSystem/BS_QML/MainQml.qml")));
    view->setSource(QUrl(QStringLiteral("../../BankSystem/BS_QML/HomeQml.qml")));

    view->setMinimumSize(QSize(1200,800));
    view->show();

    BS_QML_View::instance()->setRoot(view);



//    QQmlApplicationEngine engine;
//    engine.load(QUrl(QStringLiteral("../BS_QML/main.qml")));
//    if (engine.rootObjects().isEmpty())
//        return -1;

    return app.exec();
}
