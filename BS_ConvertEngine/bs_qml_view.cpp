#include "bs_qml_view.h"

BS_QML_View *BS_QML_View::m_pIns = NULL;

BS_QML_View::BS_QML_View(QObject *parent) : QObject(parent)
{
    m_pParent   = NULL;
    m_pLoginObj = NULL;


}

void BS_QML_View::setRoot(QQuickView *obj)
{
    m_pParent = obj;
}

BS_QML_View *BS_QML_View::instance()
{
    if(m_pIns == NULL)
    {
        m_pIns = new BS_QML_View;
    }
    return m_pIns;
}

QObject *BS_QML_View::getLoginQml()
{
    if(m_pLoginObj == NULL)
    {
        m_pLoginObj = m_pParent->findChild<QObject*>("MainQml");
    }
    return m_pLoginObj;
}
