#include "logindata.h"

LoginData::LoginData()
{
    loginID = "";
    loginPassWord = "";
    isSaveLoginID = false;
    isSaveloginPassword = false;

}

QString LoginData::getLoginID() const
{
    return loginID;
}

void LoginData::setLoginID(const QString &value)
{
    loginID = value;
}

QString LoginData::getLoginPassWord() const
{
    return loginPassWord;
}

void LoginData::setLoginPassWord(const QString &value)
{
    loginPassWord = value;
}

bool LoginData::getIsSaveLoginID() const
{
    return isSaveLoginID;
}

void LoginData::setIsSaveLoginID(bool value)
{
    isSaveLoginID = value;
}

bool LoginData::getIsSaveloginPassword() const
{
    return isSaveloginPassword;
}

void LoginData::setIsSaveloginPassword(bool value)
{
    isSaveloginPassword = value;
}
