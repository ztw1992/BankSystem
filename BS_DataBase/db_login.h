#ifndef DB_LOGIN_H
#define DB_LOGIN_H

#include <QObject>

class DB_Login : public QObject
{
    Q_OBJECT
public:
    explicit DB_Login(QObject *parent = nullptr);

signals:

public slots:
};

#endif // DB_LOGIN_H