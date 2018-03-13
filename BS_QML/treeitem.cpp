#include "treeitem.h"

TreeItem::TreeItem(TreeItem *parent)
{
    parentItem = parent;
    childItems.clear();
}

TreeItem *TreeItem::child(int row)
{
    return childItems.value(row);
}

int TreeItem::childCount() const
{
    return childItems.count();
}

int TreeItem::columnCount() const
{
    return 1;//列数
}

TreeItem *TreeItem::parent()
{
    return parentItem;
}

int TreeItem::row() const
{
    if (parentItem)
    {
        return parentItem->childItems.indexOf(const_cast<TreeItem*>(this));
    }
    return 0;
}

void TreeItem::addData(QString name)
{

}

void TreeItem::addChild(TreeItem *item)
{
    childItems.append(item);
}

void TreeItem::addChild(QList<TreeItem*> itemList)
{
    childItems.append(itemList);

}
