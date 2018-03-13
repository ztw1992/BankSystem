#ifndef TREEITEM_H
#define TREEITEM_H

#include <QList>
#include <QString>

class TreeItem
{
public:
    TreeItem(TreeItem *parent);

    TreeItem *child(int row);
    int childCount() const;
    int columnCount() const;
    TreeItem *parent();
    int row() const;

    void addData(QString name);
    void addChild(TreeItem *item);
    void addChild(QList<TreeItem *> itemList);


private:

    QList<TreeItem*> childItems;
    TreeItem *parentItem;
};

#endif // TREEITEM_H
