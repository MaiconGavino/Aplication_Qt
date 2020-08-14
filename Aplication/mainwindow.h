#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtDebug>
#include <QtSql>
#include <QFileInfo>
#include <QMainWindow>
#include <fm_principal.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_label_3_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
