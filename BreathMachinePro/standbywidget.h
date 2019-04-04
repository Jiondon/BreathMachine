/*
 * @param   待机模式下的待机界面
 *
 *
 * */
#ifndef STANDBYWIDGET_H
#define STANDBYWIDGET_H

#include <QWidget>
#include <QLabel>

class StandByWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StandByWidget(QWidget *parent = 0);

signals:

private:
    void initWidget();

private:


public slots:
};

#endif // STANDBYWIDGET_H
