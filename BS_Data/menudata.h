#ifndef MENUDATA_H
#define MENUDATA_H
#include <QString>
#include <QList>
#include <QStringList>


class MenuData
{
public:


    enum MenuRole{
        Type_Name = 0,
        Type_ID
    };
//    Q_ENUM(MenuRole)


    MenuData();

    QString getItemName() const;
    void setItemName(const QString &value);

    QString getItemID() const;
    void setItemID(const QString &value);

    QString getParentID() const;
    void setParentID(const QString &value);

    QStringList getChildIDList() const;
    void setChildIDList(const QStringList &value);

    QList<MenuData *> getChildMenuDataList() const;
    void setChildMenuDataList(const QList<MenuData *> &value);

    void addChildData(MenuData *menudata);
private:
    QString itemName;
    QString itemID;
    QString parentID;
    QList<MenuData*> childMenuDataList;

};

#endif // MENUDATA_H
