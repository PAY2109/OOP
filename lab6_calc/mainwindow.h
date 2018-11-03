#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>
#include <QStringList>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void actor();
    void sum();
    void sub();
    void mul();
    void div();
    void print();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QLineEdit* line1;
    QTextEdit* text1;
    QPushButton* ravno;
    int actnum;
    QStringList list;
    double result;
    bool diverr=0;
};

#endif // MAINWINDOW_H
