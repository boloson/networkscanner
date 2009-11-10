#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    infoDisp = ui->infoDisp;
    infoDisp->setReadOnly(true);

    startButton = new QPushButton;
    startButton = ui->startButton;

    connect(startButton, SIGNAL(clicked()), this,
         SLOT(StartScan()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::StartScan()
{
    QString test1 = "Hello World!!!!!";
    int i = 0;
    while (i < 100)
    {
        infoDisp->append(test1);
        i++;
    }
}
