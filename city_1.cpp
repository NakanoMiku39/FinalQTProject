#include "city.h"

city::city(QString name, QString c, int x, int y, int w, int h, QWidget *parent) :
    city_name(name), color(c), btn_X(x), btn_Y(y), btn_W(w), btn_H(h), QWidget(parent)
{

}


void city::show_city_status()
{
    q->setGeometry(1692, 50, 200, 965);
    q->show();
}

city::~city()
{
    delete this;
}
