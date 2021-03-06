#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle("Calculator");
    actnum=1;
    result=0;
    diverr=0;
    line1= ui->lineEdit;
    text1=ui->textEdit;
    text1->setReadOnly(1);
    ravno=ui->pushButton;
    connect (ravno, SIGNAL(clicked()), this, SLOT (actor()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::actor()
{
    int l;
    QString tmp;
    bool chk=false,zatychka;
    tmp=line1->text();
    l=tmp.length();
    for (int i=0; i<l;i++)
    {
        if(tmp[i]== ' ' || tmp[i]== '+' || tmp[i]== '-'|| tmp[i]== '*'|| tmp[i]== '/' || (tmp[i]>='0'&& tmp[i]<='9')) zatychka=0;
        else chk=true;


    }
    if (chk==false)
    {
    list = tmp.split(' ', QString::SkipEmptyParts);

    if (list[1]=='+')
    {
        sum();

    }
    else if (list[1]=='-')
    {
    sub();
    }
    else if (list[1]=='*')
    {
    mul();
    }
    else if (list[1]=='/')
    {
    div();
    }
    else
    {
       QString er= "ERROR";
       text1->append(er);
    }
    }
    else
    {
        QString er= "ERROR";
        text1->append(er);

    }


}


void MainWindow::sum()
{
    double a,b;
    a=list[0].toDouble();
    b=list[2].toDouble();
    result=a+b;
    print();

}

void MainWindow::sub()
{
    double a,b;
    a=list[0].toDouble();
    b=list[2].toDouble();
    result=a-b;
    print();

}

void MainWindow::mul()
{
    double a,b;
    a=list[0].toDouble();
    b=list[2].toDouble();
    result=a*b;
    print();

}

void MainWindow::div()
{
    double a,b;
    a=list[0].toDouble();
    b=list[2].toDouble();
    try{
        if(b==0)
            throw 0;
        else
        {
            result=a/b;
        }
    }
    catch (int a)
    {
        diverr=1;
    }
    result=a/b;
    print();

}
void MainWindow::print()
{
    QString tmp;
    if (list[1]=='/' && diverr==1)
        tmp= QString::number(actnum)+" "+list[0]+" "+list[2]+" "+list[1]+" ERROR";

        else
   tmp= QString::number(actnum)+" "+list[0]+" "+list[2]+" "+list[1]+" "+QString::number(result);

    text1->append(tmp);
    actnum++;

}
