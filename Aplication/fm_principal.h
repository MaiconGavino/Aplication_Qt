#ifndef FM_PRINCIPAL_H
#define FM_PRINCIPAL_H
#include <QtDebug>
#include<QtSql>
#include<QFileInfo>
#include <QDialog>

namespace Ui {
class fm_principal;
}

class fm_principal : public QDialog
{
    Q_OBJECT

public:
    explicit fm_principal(QWidget *parent = nullptr);
    ~fm_principal();

private slots:
    void on_line_2_customContextMenuRequested(const QPoint &pos);

    void on_pushButton_clicked();

private:
    Ui::fm_principal *ui;
};

#endif // FM_PRINCIPAL_H
