#ifndef LOGINDATA_H
#define LOGINDATA_H

#include <QString>

class LoginData
{
public:
    explicit LoginData();

    QString getLoginID() const;
    void setLoginID(const QString &value);

    QString getLoginPassWord() const;
    void setLoginPassWord(const QString &value);

    bool getIsSaveLoginID() const;
    void setIsSaveLoginID(bool value);

    bool getIsSaveloginPassword() const;
    void setIsSaveloginPassword(bool value);

private:
    QString loginID;//登录用户名 ID Pssword
    QString loginPassWord;//密码
    bool    isSaveLoginID;//登录时候 是否保存用户名
    bool    isSaveloginPassword;//登录时候 是否保存密码

};

#endif // LOGINDATA_H
