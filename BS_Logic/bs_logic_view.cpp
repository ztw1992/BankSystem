#include "bs_logic_view.h"

BS_Logic_View * BS_Logic_View::ins = NULL;

BS_Logic_View::BS_Logic_View(QObject *parent) : QObject(parent)
{
    m_pLogic_Login = new Logic_Login(this);


}

BS_Logic_View *BS_Logic_View::instance()
{
    if(ins == NULL)
    {
        ins = new BS_Logic_View;
    }
    return ins;
}

Logic_Login *BS_Logic_View::getLoginView()
{
    return m_pLogic_Login;
}
