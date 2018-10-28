#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QString>

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
    void slotRevL();
    void slotRevH();
    void slotRevAll();
    void slotSwap();
    void slotConcat();
    void slotConcatL();
private:
    Ui::MainWindow *ui;
    QLineEdit* line1;
    QLineEdit* line2;
    QPushButton* revL;
    QPushButton* revH;
    QPushButton* revAll;
    QPushButton* swap;
    QPushButton* concat;
    QPushButton* concatL;
   // QLabel* labsign;
   // QLabel* labis;
};

#endif // MAINWINDOW_H
