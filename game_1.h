#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QIcon>
#include <QMessageBox>
#include <QPushButton>
#include<QVector>
#include <QTextEdit>
#include "mainwindow.h"
#include <QButtonGroup>
#include <QRadioButton>
#include <QLineEdit>
#include <QElapsedTimer>
#include <QEventLoop>

namespace Ui {
class game;
}

class city;

class character//人物类
{
public:
    QString character_name;
    city* c;
    int card[3];
    QVector<city*> have;
    int colornum[4];
    character(QString name,city* cc);
    virtual void jineng();
};



class city//城市类
{
public:
    character* player[4];
    QString city_name, color, disease_block;
    city();
    city(QString name, QString c);
    void show_city_status();
    int cube_num;
    int yanjiusuo;
    QVector<city*> linkcity;
    bool link(city*cc);

};



class operation_expert:public character{
public:
    operation_expert(QString name, city* cc);
    virtual void jineng();
};

class quarantine_expert:public character{
public:
    quarantine_expert(QString name, city* cc);
    virtual void jineng();
};

class scientist:public character{
public:
    scientist(QString name, city* cc);
    virtual void jineng();
};

class medic:public character{
public:
    medic(QString name, city* cc);
    virtual void jineng();
};


class Infectcard{
public:
    city* c;
    Infectcard(city* cc);
};

class Playercard{
public:
    int num;
    city* c;
    Playercard(int n);
    Playercard(city* cc);
};


class game : public QWidget
{
    Q_OBJECT

public:
    city* atlanta = new city("Atlanta", "blue");
    city* san_francisco = new city("San_Francisco", "blue");
    city* chicago = new city("Chicago", "blue");
    city* montreal = new city("Montreal", "blue");
    city* washington = new city("Washington", "blue");
    city* madrid = new city("Madrid", "blue");
    city* london = new city("London", "blue");
    city* new_york = new city("New York", "blue");
    city* essen = new city("Essen", "blue");
    city* milan = new city("Milan", "blue");
    city* paris = new city("Paris", "blue");
    city* st_petersburg = new city("St Petersburg", "blue");

    city* miami = new city("Miami", "yellow");
    city* los_angeles = new city("Los Angeles", "yellow");
    city* mexico_city = new city("Mexico City", "yellow");
    city* bogota = new city("Bogota", "yellow");
    city* sao_paulo = new city("Sao Paulo", "yellow");
    city* lima = new city("Lima", "yellow");
    city* santiago = new city("Santiago", "yellow");
    city* buenos_aires = new city("Buenos Aires", "yellow");
    city* lagos = new city("Lagos", "yellow");
    city* khartoum = new city("Khartoum", "yellow");
    city* kinshasa = new city("Kinshasa", "yellow");
    city* johannesburg = new city("Johannesburg", "yellow");

    city* moscow = new city("Moscow", "black");
    city* tehran = new city("Tehran", "black");
    city* delhi = new city("Delhi", "black");
    city* algiers = new city("Algiers", "black");
    city* istanbul = new city("Istanbul", "black");
    city* cairo = new city("Cairo", "black");
    city* mumbai = new city("Mumbai", "black");
    city* kolkata = new city("Kolkata", "black");
    city* karachi = new city("Karachi", "black");
    city* riyadh = new city("Riyadh", "black");
    city* baghdad = new city("Baghdad", "black");
    city* chennai = new city("Chennai", "black");

    city* beijing = new city("Beijing", "red");
    city* shanghai = new city("Shanghai", "red");
    city* seoul = new city("Seoul", "red");
    city* tokyo = new city("Tokyo", "red");
    city* bangkok = new city("Bangkok", "red");
    city* osaka= new city("Osaka", "red");
    city* hongkong= new city("Hongkong", "red");
    city* taipei = new city("Taipei", "red");
    city* sydney = new city("Sydney", "red");
    city* manila = new city("Manila", "red");
    city* hochiminh_city= new city("Ho Chi Minh City", "red");
    city* jakarta = new city("Jakarta", "red");

    character* play[4];//四个玩家

    int infectrate[7] = { 2,2,2,3,3,4,4 };
    int infectv = 0;
    int cube[4]={24,24,24,24};
    int baofa[4]={0};
    int jieyao[4]={0};
    int ans=0;
    int usedinfect[48]={0};
    int usedplayer[57]={0};
    int outbreaks = 0;
    int yanjiusuo_num = 0;

    int outbreaks_init_x = 230;
    int outbreaks_init_y = 510;
    int infection_init_x = 1080;


    Infectcard infectcard[48]={atlanta,san_francisco,chicago,montreal,washington ,madrid,london,new_york,essen,milan,paris,st_petersburg,miami,los_angeles,mexico_city,bogota,sao_paulo,lima,santiago,buenos_aires ,lagos ,khartoum,kinshasa,johannesburg,moscow,tehran,delhi, algiers,istanbul ,cairo ,mumbai,kolkata,karachi,riyadh,baghdad,chennai,beijing,shanghai,seoul ,tokyo,bangkok,osaka,hongkong,taipei,sydney,manila,hochiminh_city,jakarta};
    Playercard playercard[57]={atlanta,san_francisco,chicago,montreal,washington ,madrid,london,new_york,essen,milan,paris,st_petersburg,miami,los_angeles,mexico_city,bogota,sao_paulo,lima,santiago,buenos_aires ,lagos ,khartoum,kinshasa,johannesburg,moscow,tehran,delhi, algiers,istanbul ,cairo ,mumbai,kolkata,karachi,riyadh,baghdad,chennai,beijing,shanghai,seoul ,tokyo,bangkok,osaka,hongkong,taipei,sydney,manila,hochiminh_city,jakarta,48,49,50,51,52,53,54,55,56};


    int current_player = 0;
    city* current_city, *destination;

    //在游戏最开始建立2个全局变量
    int haveplayer = 0;
    int haveinfect = 0;

    void change_outbreaks_pos();

    void process();

    explicit game(QWidget *parent = 0);
    ~game();

private slots:

    void show_city_status(city* c);

    void show_player_info(character* c, int n);

    void on_discover_cure_clicked();

    void on_treat_disease_clicked();

    void on_build_station_clicked();

    void on_direct_flight_clicked();

    void on_drive_ferry_clicked();

    void on_shuttle_flight_clicked();

    //城市按钮
    void on_atlanta_clicked();

    void on_san_francisco_clicked();

    void on_chicago_clicked();

    void on_montreal_clicked();

    void on_new_york_clicked();

    void on_washington_clicked();

    void on_madrid_clicked();

    void on_london_clicked();

    void on_paris_clicked();

    void on_essen_clicked();

    void on_milan_clicked();

    void on_st_petersburg_clicked();

    void on_los_angeles_clicked();

    void on_mexico_city_clicked();

    void on_miami_clicked();

    void on_bogota_clicked();

    void on_lima_clicked();

    void on_santiago_clicked();

    void on_buenos_aires_clicked();

    void on_sao_paulo_clicked();

    void on_lagos_clicked();

    void on_khartoum_clicked();

    void on_kinshasa_clicked();

    void on_johannesburg_clicked();

    void on_istanbul_clicked();

    void on_tehran_clicked();

    void on_baghdad_clicked();

    void on_algiers_clicked();

    void on_cairo_clicked();

    void on_karachi_clicked();

    void on_delhi_clicked();

    void on_riyadh_clicked();

    void on_kolkata_clicked();

    void on_mumbai_clicked();

    void on_chennai_clicked();

    void on_beijing_clicked();

    void on_seoul_clicked();

    void on_tokyo_clicked();

    void on_shanghai_clicked();

    void on_osaka_clicked();

    void on_taipei_clicked();

    void on_hongkong_clicked();

    void on_bangkok_clicked();

    void on_manila_clicked();

    void on_jakarta_clicked();

    void on_hochiminh_city_clicked();

    void on_sydney_clicked();

    void on_moscow_clicked();


    void on_exit_game_clicked();

public:
    Ui::game *ui;
    QEventLoop loop;
    QEventLoop loop2;
};



#endif // GAME_H
