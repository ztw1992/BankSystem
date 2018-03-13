#ifndef BS_LOGIC_VIEW_H
#define BS_LOGIC_VIEW_H

#include <QObject>
#include "bs_logic_global.h"

#include "logic_login.h"

class BS_LOGIC_GLOBAL_EXPORT BS_Logic_View : public QObject
{
    Q_OBJECT
public:

    static BS_Logic_View *instance();

    //登录
    Logic_Login *getLoginView();


signals:

private:
    explicit BS_Logic_View(QObject *parent = nullptr);
    static BS_Logic_View * ins;

    Logic_Login * m_pLogic_Login;

public slots:
};

#endif // BS_LOGIC_VIEW_H
