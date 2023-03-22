#include "sqlinterface.h"
#include <QtSql>


SQLInterface::SQLInterface()
{

}

 bool SQLInterface::ConnectToBD()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("mirea");
    db.setUserName("mirea");
    db.setHostName("localhost");
    db.setPassword("mirea");
    if (!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError();
        return false;
    }
    return true;
}

bool SQLInterface::SelectData(QTableView* tableView)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM employee;");

    QSqlError err = model->lastError();
    if (err.isValid()) {
        qDebug() << err;
        return false;
    }

    tableView->setModel(model);
    tableView->show();

    return true;
}
