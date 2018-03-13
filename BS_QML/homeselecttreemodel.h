#ifndef HOMESELECTTREEMODEL_H
#define HOMESELECTTREEMODEL_H

#include <QObject>
#include <QAbstractItemModel>

#include "bs_qml_global.h"
#include "treeitem.h"
#include "../BS_Data/menudata.h"
class BS_QML_GLOBAL_EXPORT HomeSelectTreeModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit HomeSelectTreeModel(QObject *parent = nullptr);

signals:

public slots:


    // QAbstractItemModel interface
public:
    QModelIndex index(int row, int column, const QModelIndex &parent) const;
    QModelIndex parent(const QModelIndex &child) const;
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    Q_INVOKABLE QAbstractItemModel *model();
private:
    TreeItem *rootItem;

};

#endif // HOMESELECTTREEMODEL_H
