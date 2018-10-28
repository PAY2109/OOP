#include "mainwindow.h"
#include "ui_mainwindow.h"
// Калькулятор добавить
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    line1= ui->lineEdit;
    line2 = ui->lineEdit_2;

    revL=ui->revL;
    revH=ui->revH;
    revAll=ui->revAll;
    swap=ui->swap;
    concat=ui->concat;
    concatL=ui->concatL;

     connect (revL, SIGNAL(clicked()), this, SLOT (slotRevL()));
     connect (revH, SIGNAL(clicked()), this, SLOT (slotRevH()));
     connect (revAll, SIGNAL(clicked()), this, SLOT (slotRevAll()));
     connect (swap, SIGNAL(clicked()), this, SLOT (slotSwap()));
     connect (concat, SIGNAL(clicked()), this, SLOT (slotConcat()));
     connect (concatL, SIGNAL(clicked()), this, SLOT (slotConcatL()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotRevH()
{
    QString k,tmp;
    int s,j=0;
    k=line1->text();
    s=k.size();
    for (int i=s-1; i>=0;i--)
    {
        tmp[j]=k[i];
        j++;
    }
    k=tmp;
    line1->setText(k);
}


void MainWindow::slotRevL()
{
    QString k,tmp;
    int s,j=0;
    k=line2->text();
    s=k.size();
    for (int i=s-1; i>=0;i--)
    {
        tmp[j]=k[i];
        j++;
    }
    k=tmp;
    line2->setText(k);
}

void MainWindow::slotRevAll()
{
    slotRevH();
    slotRevL();
}

void MainWindow::slotSwap()
{
    QString k=line1->text();
    line1->setText(line2->text());
    line2->setText(k);
}
void MainWindow::slotConcat()
{
    line1->setText(line1->text()+line2->text());
}
void MainWindow::slotConcatL()
{
    line2->setText(line2->text()+line1->text());
}
