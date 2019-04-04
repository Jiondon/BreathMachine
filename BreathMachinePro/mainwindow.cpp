#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(1200,800);
    m_pStandByWidget = new StandByWidget(this);
    m_pStandByWidget->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
