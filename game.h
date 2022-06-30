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
    city(QString name, QString c,int xx,int yy);
    void show_city_status();
    int cube_num;
    int yanjiusuo;
    QVector<city*> linkcity;
    bool link(city*cc);
    int x,y;
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
    city* atlanta = new city("Atlanta", "blue", 430, 330);
    city* san_francisco = new city("San_Francisco", "blue", 250, 290);
    city* chicago = new city("Chicago", "blue", 390, 250);
    city* montreal = new city("Montreal", "blue", 490, 250);
    city* washington = new city("Washington", "blue", 530, 330);
    city* madrid = new city("Madrid", "blue", 750, 310);
    city* london = new city("London", "blue", 760, 210);
    city* new_york = new city("New York", "blue", 570, 270);
    city* essen = new city("Essen", "blue", 870, 180);
    city* milan = new city("Milan", "blue", 910, 240);
    city* paris = new city("Paris", "blue", 840, 260);
    city* st_petersburg = new city("St Petersburg", "blue", 980, 170);

    city* miami = new city("Miami", "yellow", 490, 420);
    city* los_angeles = new city("Los Angeles", "yellow", 270, 400);
    city* mexico_city = new city("Mexico City", "yellow", 370, 440);
    city* bogota = new city("Bogota", "yellow", 480, 520);
    city* sao_paulo = new city("Sao Paulo", "yellow", 620, 650);
    city* lima = new city("Lima", "yellow", 440, 640);
    city* santiago = new city("Santiago", "yellow", 450, 760);
    city* buenos_aires = new city("Buenos Aires", "yellow", 560, 740);
    city* lagos = new city("Lagos", "yellow", 830, 500);
    city* khartoum = new city("Khartoum", "yellow", 960, 490);
    city* kinshasa = new city("Kinshasa", "yellow", 890, 580);
    city* johannesburg = new city("Johannesburg", "yellow", 950, 690);


    city* moscow = new city("Moscow", "black", 1030, 230);
    city* tehran = new city("Tehran", "black", 1100, 280);
    city* delhi = new city("Delhi", "black", 1190, 350);
    city* algiers = new city("Algiers", "black", 860, 360);
    city* istanbul = new city("Istanbul", "black", 950, 300);
    city* cairo = new city("Cairo", "black", 930, 380);
    city* mumbai = new city("Mumbai", "black", 1130, 460);
    city* kolkata = new city("Kolkata", "black", 1270, 380);
    city* karachi = new city("Karachi", "black", 1120, 380);
    city* riyadh = new city("Riyadh", "black", 1030, 440);
    city* baghdad = new city("Baghdad", "black", 1020, 350);
    city* chennai = new city("Chennai", "black", 1210, 520);

    city* beijing = new city("Beijing", "red", 1330, 260);
    city* shanghai = new city("Shanghai", "red", 1330, 330);
    city* seoul = new city("Seoul", "red", 1420, 260);
    city* tokyo = new city("Tokyo", "red", 1490, 300);
    city* bangkok = new city("Bangkok", "red", 1280, 470);
    city* osaka= new city("Osaka", "red", 1500, 370);
    city* hongkong= new city("Hongkong", "red", 1340, 420);
    city* taipei = new city("Taipei", "red", 1420, 400);
    city* sydney = new city("Sydney", "red", 1500, 750);
    city* manila = new city("Manila", "red", 1440, 530);
    city* hochiminh_city= new city("Ho Chi Minh City", "red", 1340, 540);
    city* jakarta = new city("Jakarta", "red", 1280, 610);

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

    void on_skip_clicked();

public:
    Ui::game *ui;
    QEventLoop loop;
    QEventLoop loop2;
    QMessageBox MBox;

    QPushButton *agreeBut = MBox.addButton("Notice", QMessageBox::AcceptRole);
};



#endif // GAME_H
