#include "standbywidget.h"

StandByWidget::StandByWidget(QWidget *parent) : QWidget(parent)
{
    initWidget();
}

void StandByWidget::initWidget()
{
    QLabel *label_demo = new QLabel(this);
    label_demo->setGeometry(10,10,65,45);
    label_demo->setPixmap(QPixmap("./image/demo.png").scaled(65,45));
    label_demo->show();
    //显示logo数据---StandBy信息
    QLabel *label_logo = new QLabel(this);
}
