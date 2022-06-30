/*
#ifndef CITY_H
#define CITY_H

#include <QWidget>
#include <QPushButton>
#include "game.h"

class city : public QWidget
{
    Q_OBJECT
private:
    QString city_name, color;//城市名,颜色
    int existed_disease_cube, btn_X, btn_Y, btn_W, btn_H;//存在疾病块数
    QPushButton* pb = new QPushButton("testing");
    QWidget* q = new QWidget();

public:
    explicit city(QString name, QString c, int x, int y, int w, int h, QWidget *parent = 0);//构造函数
    void show_city_status();
    ~city();
signals:

public slots:
};

#endif // CITY_H
*/
