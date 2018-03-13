#include "homeselecttreemodel.h"

HomeSelectTreeModel::HomeSelectTreeModel(QObject *parent) : QAbstractItemModel(parent)
{
    //根数据
    rootItem = new TreeItem(NULL);

    TreeItem * item1 = new TreeItem(rootItem);
    TreeItem * child1_1 = new TreeItem(rootItem);
    TreeItem * child1_2 = new TreeItem(rootItem);
    item1->addChild(child1_1);
    item1->addChild(child1_2);


    TreeItem * item2 = new TreeItem(rootItem);

    rootItem->addChild(item1);
    rootItem->addChild(item2);

}


QModelIndex HomeSelectTreeModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeItem *parentItem;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    TreeItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex HomeSelectTreeModel::parent(const QModelIndex &child) const
{
    if (!child.isValid())
        return QModelIndex();

    TreeItem *childItem = static_cast<TreeItem*>(child.internalPointer());
    TreeItem *parentItem = childItem->parent();

    if (parentItem == rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int HomeSelectTreeModel::rowCount(const QModelIndex &parent) const
{
    TreeItem *parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    return parentItem->childCount();
}

int HomeSelectTreeModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return static_cast<TreeItem*>(parent.internalPointer())->columnCount();
    else
        return rootItem->columnCount();
}

QVariant HomeSelectTreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());

    if (role == MenuData::Type_Name)
    {
        return "item->getName()";
    }

    return QVariant();
}

QAbstractItemModel *HomeSelectTreeModel::model()
{
    return this;
}
