/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *map;
    QPushButton *exit_game;
    QPushButton *show_actions;
    QWidget *actions;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *movment_actions;
    QPushButton *drive_ferry;
    QPushButton *direct_flight;
    QPushButton *shuttle_flight;
    QLineEdit *other_actions;
    QPushButton *build_station;
    QPushButton *treat_disease;
    QPushButton *discover_cure;
    QPushButton *show_hand;
    QListWidget *hand;
    QLabel *outbreaks;
    QLabel *infection_rate;
    QPushButton *atlanta;
    QPushButton *chicago;
    QPushButton *san_francisco;
    QPushButton *montreal;
    QPushButton *washington;
    QPushButton *new_york;
    QPushButton *miami;
    QPushButton *mexico_city;
    QPushButton *bogota;
    QPushButton *los_angeles;
    QPushButton *london;
    QPushButton *madrid;
    QPushButton *paris;
    QPushButton *essen;
    QPushButton *st_petersburg;
    QPushButton *milan;
    QPushButton *algiers;
    QPushButton *istanbul;
    QPushButton *baghdad;
    QPushButton *khartoum;
    QPushButton *cairo;
    QPushButton *tehran;
    QPushButton *karachi;
    QPushButton *riyadh;
    QPushButton *mumbai;
    QPushButton *delhi;
    QPushButton *kolkata;
    QPushButton *beijing;
    QPushButton *shanghai;
    QPushButton *seoul;
    QPushButton *hongkong;
    QPushButton *bangkok;
    QPushButton *taipei;
    QPushButton *tokyo;
    QPushButton *osaka;
    QPushButton *lagos;
    QPushButton *kinshasa;
    QPushButton *johannesburg;
    QPushButton *sao_paulo;
    QPushButton *lima;
    QPushButton *santiago;
    QPushButton *buenos_aires;
    QPushButton *jakarta;
    QPushButton *sydney;
    QPushButton *hochiminh_city;
    QPushButton *manila;
    QPushButton *chennai;
    QPushButton *moscow;
    QLabel *yellow;
    QLabel *red;
    QLabel *blue;
    QLabel *black;
    QWidget *city_widget;
    QLabel *city_info;
    QLabel *label;
    QWidget *player_widget;
    QLabel *player_info;
    QLabel *player_title;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(1920, 965);
        QFont font;
        font.setPointSize(30);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        map = new QLabel(game);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(41, 0, 1691, 965));
        map->setStyleSheet(QStringLiteral("image: url(:/img/img/map.jpg);"));
        exit_game = new QPushButton(game);
        exit_game->setObjectName(QStringLiteral("exit_game"));
        exit_game->setGeometry(QRect(0, 910, 200, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Bauhaus 93"));
        font1.setPointSize(15);
        exit_game->setFont(font1);
        show_actions = new QPushButton(game);
        show_actions->setObjectName(QStringLiteral("show_actions"));
        show_actions->setGeometry(QRect(0, 0, 200, 50));
        show_actions->setMinimumSize(QSize(200, 50));
        show_actions->setMaximumSize(QSize(200, 50));
        show_actions->setFont(font1);
        actions = new QWidget(game);
        actions->setObjectName(QStringLiteral("actions"));
        actions->setGeometry(QRect(0, 50, 211, 451));
        actions->setMaximumSize(QSize(600, 600));
        actions->setStyleSheet(QStringLiteral(""));
        formLayoutWidget = new QWidget(actions);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 206, 451));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        movment_actions = new QLineEdit(formLayoutWidget);
        movment_actions->setObjectName(QStringLiteral("movment_actions"));
        movment_actions->setEnabled(true);
        movment_actions->setMinimumSize(QSize(200, 50));
        movment_actions->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Bauhaus 93"));
        font2.setPointSize(10);
        movment_actions->setFont(font2);
        movment_actions->setEchoMode(QLineEdit::Normal);
        movment_actions->setAlignment(Qt::AlignCenter);
        movment_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, movment_actions);

        drive_ferry = new QPushButton(formLayoutWidget);
        drive_ferry->setObjectName(QStringLiteral("drive_ferry"));
        drive_ferry->setMinimumSize(QSize(200, 50));
        drive_ferry->setMaximumSize(QSize(200, 100));
        drive_ferry->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, drive_ferry);

        direct_flight = new QPushButton(formLayoutWidget);
        direct_flight->setObjectName(QStringLiteral("direct_flight"));
        direct_flight->setMinimumSize(QSize(200, 50));
        direct_flight->setMaximumSize(QSize(100, 25));
        direct_flight->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, direct_flight);

        shuttle_flight = new QPushButton(formLayoutWidget);
        shuttle_flight->setObjectName(QStringLiteral("shuttle_flight"));
        shuttle_flight->setMinimumSize(QSize(200, 50));
        shuttle_flight->setMaximumSize(QSize(100, 25));
        shuttle_flight->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, shuttle_flight);

        other_actions = new QLineEdit(formLayoutWidget);
        other_actions->setObjectName(QStringLiteral("other_actions"));
        other_actions->setMinimumSize(QSize(200, 50));
        other_actions->setMaximumSize(QSize(200, 50));
        other_actions->setFont(font2);
        other_actions->setAlignment(Qt::AlignCenter);
        other_actions->setReadOnly(true);

        formLayout->setWidget(7, QFormLayout::LabelRole, other_actions);

        build_station = new QPushButton(formLayoutWidget);
        build_station->setObjectName(QStringLiteral("build_station"));
        build_station->setMinimumSize(QSize(200, 50));
        build_station->setMaximumSize(QSize(100, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Bauhaus 93"));
        font3.setPointSize(8);
        build_station->setFont(font3);

        formLayout->setWidget(9, QFormLayout::LabelRole, build_station);

        treat_disease = new QPushButton(formLayoutWidget);
        treat_disease->setObjectName(QStringLiteral("treat_disease"));
        treat_disease->setMinimumSize(QSize(200, 50));
        treat_disease->setMaximumSize(QSize(100, 25));
        treat_disease->setFont(font1);

        formLayout->setWidget(10, QFormLayout::LabelRole, treat_disease);

        discover_cure = new QPushButton(formLayoutWidget);
        discover_cure->setObjectName(QStringLiteral("discover_cure"));
        discover_cure->setMinimumSize(QSize(200, 50));
        discover_cure->setMaximumSize(QSize(100, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Bauhaus 93"));
        font4.setPointSize(12);
        discover_cure->setFont(font4);

        formLayout->setWidget(11, QFormLayout::LabelRole, discover_cure);

        show_hand = new QPushButton(game);
        show_hand->setObjectName(QStringLiteral("show_hand"));
        show_hand->setGeometry(QRect(0, 850, 200, 50));
        show_hand->setFont(font1);
        hand = new QListWidget(game);
        hand->setObjectName(QStringLiteral("hand"));
        hand->setGeometry(QRect(0, 660, 201, 192));
        outbreaks = new QLabel(game);
        outbreaks->setObjectName(QStringLiteral("outbreaks"));
        outbreaks->setGeometry(QRect(230, 510, 51, 51));
        outbreaks->setStyleSheet(QStringLiteral("image: url(:/img/img/outbreak_marker.png);"));
        infection_rate = new QLabel(game);
        infection_rate->setObjectName(QStringLiteral("infection_rate"));
        infection_rate->setGeometry(QRect(1080, 160, 51, 51));
        infection_rate->setStyleSheet(QStringLiteral("image: url(:/img/img/infection_rate_marker.png);"));
        atlanta = new QPushButton(game);
        atlanta->setObjectName(QStringLiteral("atlanta"));
        atlanta->setGeometry(QRect(430, 330, 31, 31));
        chicago = new QPushButton(game);
        chicago->setObjectName(QStringLiteral("chicago"));
        chicago->setGeometry(QRect(390, 250, 31, 31));
        san_francisco = new QPushButton(game);
        san_francisco->setObjectName(QStringLiteral("san_francisco"));
        san_francisco->setGeometry(QRect(250, 290, 31, 31));
        montreal = new QPushButton(game);
        montreal->setObjectName(QStringLiteral("montreal"));
        montreal->setGeometry(QRect(490, 250, 31, 31));
        washington = new QPushButton(game);
        washington->setObjectName(QStringLiteral("washington"));
        washington->setGeometry(QRect(530, 330, 31, 31));
        new_york = new QPushButton(game);
        new_york->setObjectName(QStringLiteral("new_york"));
        new_york->setGeometry(QRect(570, 270, 31, 31));
        miami = new QPushButton(game);
        miami->setObjectName(QStringLiteral("miami"));
        miami->setGeometry(QRect(490, 420, 31, 31));
        mexico_city = new QPushButton(game);
        mexico_city->setObjectName(QStringLiteral("mexico_city"));
        mexico_city->setGeometry(QRect(370, 440, 31, 31));
        bogota = new QPushButton(game);
        bogota->setObjectName(QStringLiteral("bogota"));
        bogota->setGeometry(QRect(480, 520, 31, 31));
        los_angeles = new QPushButton(game);
        los_angeles->setObjectName(QStringLiteral("los_angeles"));
        los_angeles->setGeometry(QRect(270, 400, 31, 31));
        london = new QPushButton(game);
        london->setObjectName(QStringLiteral("london"));
        london->setGeometry(QRect(760, 210, 31, 31));
        madrid = new QPushButton(game);
        madrid->setObjectName(QStringLiteral("madrid"));
        madrid->setGeometry(QRect(750, 310, 31, 31));
        paris = new QPushButton(game);
        paris->setObjectName(QStringLiteral("paris"));
        paris->setGeometry(QRect(840, 260, 31, 31));
        essen = new QPushButton(game);
        essen->setObjectName(QStringLiteral("essen"));
        essen->setGeometry(QRect(870, 180, 31, 31));
        st_petersburg = new QPushButton(game);
        st_petersburg->setObjectName(QStringLiteral("st_petersburg"));
        st_petersburg->setGeometry(QRect(980, 170, 31, 31));
        milan = new QPushButton(game);
        milan->setObjectName(QStringLiteral("milan"));
        milan->setGeometry(QRect(910, 240, 31, 31));
        algiers = new QPushButton(game);
        algiers->setObjectName(QStringLiteral("algiers"));
        algiers->setGeometry(QRect(860, 360, 31, 31));
        istanbul = new QPushButton(game);
        istanbul->setObjectName(QStringLiteral("istanbul"));
        istanbul->setGeometry(QRect(950, 300, 31, 31));
        baghdad = new QPushButton(game);
        baghdad->setObjectName(QStringLiteral("baghdad"));
        baghdad->setGeometry(QRect(1020, 350, 31, 31));
        khartoum = new QPushButton(game);
        khartoum->setObjectName(QStringLiteral("khartoum"));
        khartoum->setGeometry(QRect(960, 490, 31, 31));
        cairo = new QPushButton(game);
        cairo->setObjectName(QStringLiteral("cairo"));
        cairo->setGeometry(QRect(930, 380, 31, 31));
        tehran = new QPushButton(game);
        tehran->setObjectName(QStringLiteral("tehran"));
        tehran->setGeometry(QRect(1100, 280, 31, 31));
        karachi = new QPushButton(game);
        karachi->setObjectName(QStringLiteral("karachi"));
        karachi->setGeometry(QRect(1120, 380, 31, 31));
        riyadh = new QPushButton(game);
        riyadh->setObjectName(QStringLiteral("riyadh"));
        riyadh->setGeometry(QRect(1030, 440, 31, 31));
        mumbai = new QPushButton(game);
        mumbai->setObjectName(QStringLiteral("mumbai"));
        mumbai->setGeometry(QRect(1130, 460, 31, 31));
        delhi = new QPushButton(game);
        delhi->setObjectName(QStringLiteral("delhi"));
        delhi->setGeometry(QRect(1190, 350, 31, 31));
        kolkata = new QPushButton(game);
        kolkata->setObjectName(QStringLiteral("kolkata"));
        kolkata->setGeometry(QRect(1270, 380, 31, 31));
        beijing = new QPushButton(game);
        beijing->setObjectName(QStringLiteral("beijing"));
        beijing->setGeometry(QRect(1330, 260, 31, 31));
        shanghai = new QPushButton(game);
        shanghai->setObjectName(QStringLiteral("shanghai"));
        shanghai->setGeometry(QRect(1330, 330, 31, 31));
        seoul = new QPushButton(game);
        seoul->setObjectName(QStringLiteral("seoul"));
        seoul->setGeometry(QRect(1420, 260, 31, 31));
        hongkong = new QPushButton(game);
        hongkong->setObjectName(QStringLiteral("hongkong"));
        hongkong->setGeometry(QRect(1340, 420, 31, 31));
        bangkok = new QPushButton(game);
        bangkok->setObjectName(QStringLiteral("bangkok"));
        bangkok->setGeometry(QRect(1280, 470, 31, 31));
        taipei = new QPushButton(game);
        taipei->setObjectName(QStringLiteral("taipei"));
        taipei->setGeometry(QRect(1420, 400, 31, 31));
        tokyo = new QPushButton(game);
        tokyo->setObjectName(QStringLiteral("tokyo"));
        tokyo->setGeometry(QRect(1490, 300, 31, 31));
        osaka = new QPushButton(game);
        osaka->setObjectName(QStringLiteral("osaka"));
        osaka->setGeometry(QRect(1500, 370, 31, 31));
        lagos = new QPushButton(game);
        lagos->setObjectName(QStringLiteral("lagos"));
        lagos->setGeometry(QRect(830, 500, 31, 31));
        kinshasa = new QPushButton(game);
        kinshasa->setObjectName(QStringLiteral("kinshasa"));
        kinshasa->setGeometry(QRect(890, 580, 31, 31));
        johannesburg = new QPushButton(game);
        johannesburg->setObjectName(QStringLiteral("johannesburg"));
        johannesburg->setGeometry(QRect(950, 690, 31, 31));
        sao_paulo = new QPushButton(game);
        sao_paulo->setObjectName(QStringLiteral("sao_paulo"));
        sao_paulo->setGeometry(QRect(620, 650, 31, 31));
        lima = new QPushButton(game);
        lima->setObjectName(QStringLiteral("lima"));
        lima->setGeometry(QRect(440, 640, 31, 31));
        santiago = new QPushButton(game);
        santiago->setObjectName(QStringLiteral("santiago"));
        santiago->setGeometry(QRect(450, 760, 31, 31));
        buenos_aires = new QPushButton(game);
        buenos_aires->setObjectName(QStringLiteral("buenos_aires"));
        buenos_aires->setGeometry(QRect(560, 740, 31, 31));
        jakarta = new QPushButton(game);
        jakarta->setObjectName(QStringLiteral("jakarta"));
        jakarta->setGeometry(QRect(1280, 610, 31, 31));
        sydney = new QPushButton(game);
        sydney->setObjectName(QStringLiteral("sydney"));
        sydney->setGeometry(QRect(1500, 750, 31, 31));
        hochiminh_city = new QPushButton(game);
        hochiminh_city->setObjectName(QStringLiteral("hochiminh_city"));
        hochiminh_city->setGeometry(QRect(1340, 540, 31, 31));
        manila = new QPushButton(game);
        manila->setObjectName(QStringLiteral("manila"));
        manila->setGeometry(QRect(1440, 530, 31, 31));
        chennai = new QPushButton(game);
        chennai->setObjectName(QStringLiteral("chennai"));
        chennai->setGeometry(QRect(1210, 520, 31, 31));
        moscow = new QPushButton(game);
        moscow->setObjectName(QStringLiteral("moscow"));
        moscow->setGeometry(QRect(1030, 230, 31, 31));
        yellow = new QLabel(game);
        yellow->setObjectName(QStringLiteral("yellow"));
        yellow->setGeometry(QRect(620, 910, 51, 51));
        yellow->setStyleSheet(QStringLiteral("image: url(:/img/img/yellow_cure.png);"));
        red = new QLabel(game);
        red->setObjectName(QStringLiteral("red"));
        red->setGeometry(QRect(690, 910, 51, 51));
        red->setStyleSheet(QStringLiteral("image: url(:/img/img/red_cure.png);"));
        blue = new QLabel(game);
        blue->setObjectName(QStringLiteral("blue"));
        blue->setGeometry(QRect(760, 910, 51, 51));
        blue->setStyleSheet(QLatin1String("image: url(:/img/img/blue_cure.png);\n"
""));
        black = new QLabel(game);
        black->setObjectName(QStringLiteral("black"));
        black->setGeometry(QRect(820, 910, 51, 51));
        black->setStyleSheet(QStringLiteral("image: url(:/img/img/black_cure.png);"));
        city_widget = new QWidget(game);
        city_widget->setObjectName(QStringLiteral("city_widget"));
        city_widget->setGeometry(QRect(1570, 0, 350, 400));
        city_info = new QLabel(city_widget);
        city_info->setObjectName(QStringLiteral("city_info"));
        city_info->setGeometry(QRect(0, 0, 350, 400));
        label = new QLabel(city_widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 300, 50));
        label->setFont(font1);
        player_widget = new QWidget(game);
        player_widget->setObjectName(QStringLiteral("player_widget"));
        player_widget->setGeometry(QRect(1570, 370, 350, 600));
        player_info = new QLabel(player_widget);
        player_info->setObjectName(QStringLiteral("player_info"));
        player_info->setGeometry(QRect(10, 50, 350, 600));
        player_info->setFont(font2);
        player_title = new QLabel(player_widget);
        player_title->setObjectName(QStringLiteral("player_title"));
        player_title->setGeometry(QRect(10, 0, 350, 50));
        player_title->setFont(font1);
        map->raise();
        exit_game->raise();
        show_actions->raise();
        show_hand->raise();
        hand->raise();
        infection_rate->raise();
        atlanta->raise();
        chicago->raise();
        san_francisco->raise();
        montreal->raise();
        washington->raise();
        new_york->raise();
        miami->raise();
        mexico_city->raise();
        bogota->raise();
        los_angeles->raise();
        london->raise();
        madrid->raise();
        paris->raise();
        essen->raise();
        st_petersburg->raise();
        milan->raise();
        algiers->raise();
        istanbul->raise();
        baghdad->raise();
        khartoum->raise();
        cairo->raise();
        tehran->raise();
        karachi->raise();
        riyadh->raise();
        mumbai->raise();
        delhi->raise();
        kolkata->raise();
        beijing->raise();
        shanghai->raise();
        seoul->raise();
        hongkong->raise();
        bangkok->raise();
        taipei->raise();
        tokyo->raise();
        osaka->raise();
        lagos->raise();
        kinshasa->raise();
        johannesburg->raise();
        sao_paulo->raise();
        lima->raise();
        santiago->raise();
        buenos_aires->raise();
        jakarta->raise();
        sydney->raise();
        hochiminh_city->raise();
        manila->raise();
        chennai->raise();
        moscow->raise();
        actions->raise();
        yellow->raise();
        red->raise();
        blue->raise();
        black->raise();
        city_widget->raise();
        outbreaks->raise();
        player_widget->raise();

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Pandemic the Game", 0));
        map->setText(QString());
        exit_game->setText(QApplication::translate("game", "EXIT GAME", 0));
        show_actions->setText(QApplication::translate("game", "ACTIONS", 0));
        movment_actions->setText(QApplication::translate("game", "MOVEMENT ACTIONS", 0));
        drive_ferry->setText(QApplication::translate("game", "Drive / Ferry", 0));
        direct_flight->setText(QApplication::translate("game", "Direct Flight", 0));
        shuttle_flight->setText(QApplication::translate("game", "Shuttle Flight", 0));
        other_actions->setText(QApplication::translate("game", "OTHER ACTIONS", 0));
        build_station->setText(QApplication::translate("game", "Build a Research Station", 0));
        treat_disease->setText(QApplication::translate("game", "Treat Disease", 0));
        discover_cure->setText(QApplication::translate("game", "Discover a Cure", 0));
        show_hand->setText(QApplication::translate("game", "HAND", 0));
        outbreaks->setText(QString());
        infection_rate->setText(QString());
        atlanta->setText(QString());
        chicago->setText(QString());
        san_francisco->setText(QString());
        montreal->setText(QString());
        washington->setText(QString());
        new_york->setText(QString());
        miami->setText(QString());
        mexico_city->setText(QString());
        bogota->setText(QString());
        los_angeles->setText(QString());
        london->setText(QString());
        madrid->setText(QString());
        paris->setText(QString());
        essen->setText(QString());
        st_petersburg->setText(QString());
        milan->setText(QString());
        algiers->setText(QString());
        istanbul->setText(QString());
        baghdad->setText(QString());
        khartoum->setText(QString());
        cairo->setText(QString());
        tehran->setText(QString());
        karachi->setText(QString());
        riyadh->setText(QString());
        mumbai->setText(QString());
        delhi->setText(QString());
        kolkata->setText(QString());
        beijing->setText(QString());
        shanghai->setText(QString());
        seoul->setText(QString());
        hongkong->setText(QString());
        bangkok->setText(QString());
        taipei->setText(QString());
        tokyo->setText(QString());
        osaka->setText(QString());
        lagos->setText(QString());
        kinshasa->setText(QString());
        johannesburg->setText(QString());
        sao_paulo->setText(QString());
        lima->setText(QString());
        santiago->setText(QString());
        buenos_aires->setText(QString());
        jakarta->setText(QString());
        sydney->setText(QString());
        hochiminh_city->setText(QString());
        manila->setText(QString());
        chennai->setText(QString());
        moscow->setText(QString());
        yellow->setText(QString());
        red->setText(QString());
        blue->setText(QString());
        black->setText(QString());
        city_info->setText(QString());
        label->setText(QApplication::translate("game", "City Info", 0));
        player_info->setText(QString());
        player_title->setText(QApplication::translate("game", "Player Info", 0));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
