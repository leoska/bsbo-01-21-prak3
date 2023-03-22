#ifndef SQLINTERFACE_H
#define SQLINTERFACE_H

#include <QtSql>
#include <qtableview.h>


class SQLInterface
{
public:
    SQLInterface();
    static bool ConnectToBD();
    static bool SelectData(QTableView* tableView);
};

#endif // SQLINTERFACE_H
