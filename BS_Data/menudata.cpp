#include "menudata.h"

MenuData::MenuData()
{
    itemName = "";
    itemID   = "";
    parentID = "";
    childMenuDataList.clear();
}

QString MenuData::getItemName() const
{
    return itemName;
}

void MenuData::setItemName(const QString &value)
{
    itemName = value;
}

QString MenuData::getItemID() const
{
    return itemID;
}

void MenuData::setItemID(const QString &value)
{
    itemID = value;
}

QString MenuData::getParentID() const
{
    return parentID;
}

void MenuData::setParentID(const QString &value)
{
    parentID = value;
}

QList<MenuData *> MenuData::getChildMenuDataList() const
{
    return childMenuDataList;
}

void MenuData::setChildMenuDataList(const QList<MenuData *> &value)
{
    childMenuDataList = value;
}

void MenuData::addChildData(MenuData *menudata)
{
    childMenuDataList.append(menudata);
}
