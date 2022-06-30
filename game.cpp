#include "game.h"
#include "ui_game.h"
#include <vector>


game::game(QWidget *parent) ://构造函数
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    //QWidget::showFullScreen();
    for(int j=3;j>=1;j--)
    {
        for(int i=1;i<=3;i++)
        {
            int temp=rand()%48;
            while(usedinfect[temp]==1)
            {
                temp=rand()%48;
            }
            usedinfect[temp]=1;
            infectcard[temp].c->cube_num=j;
            /*QLabel * clabel=new QLabel;
            clabel->setText("Virus strikes:\n" + infectcard[temp].c->city_name +"\n with " + j + "cubes");
            clabel->move(700,500);
            clabel->show();
            break;*/
        }
    }

    //城市联通集初始化

    atlanta->linkcity.push_back(chicago);
    atlanta->linkcity.push_back(washington);
    atlanta->linkcity.push_back(miami);
    san_francisco->linkcity.push_back(chicago);
    san_francisco->linkcity.push_back(los_angeles);
    san_francisco->linkcity.push_back(tokyo);
    san_francisco->linkcity.push_back(manila);
    chicago->linkcity.push_back(san_francisco);
    chicago->linkcity.push_back(los_angeles);
    chicago->linkcity.push_back(mexico_city);
    chicago->linkcity.push_back(atlanta);
    chicago->linkcity.push_back(montreal);
    montreal->linkcity.push_back(chicago);
    montreal->linkcity.push_back(washington);
    montreal->linkcity.push_back(new_york);
    washington->linkcity.push_back(atlanta);
    washington->linkcity.push_back(montreal);
    washington->linkcity.push_back(miami);
    washington->linkcity.push_back(new_york);
    new_york->linkcity.push_back(montreal);
    new_york->linkcity.push_back(washington);
    new_york->linkcity.push_back(madrid);
    new_york->linkcity.push_back(london);
    london->linkcity.push_back(new_york);
    london->linkcity.push_back(madrid);
    london->linkcity.push_back(paris);
    london->linkcity.push_back(essen);
    paris->linkcity.push_back(london);
    paris->linkcity.push_back(madrid);
    paris->linkcity.push_back(essen);
    paris->linkcity.push_back(milan);
    paris->linkcity.push_back(algiers);
    madrid->linkcity.push_back(london);
    madrid->linkcity.push_back(paris);
    madrid->linkcity.push_back(algiers);
    madrid->linkcity.push_back(sao_paulo);
    madrid->linkcity.push_back(new_york);
    essen->linkcity.push_back(london);
    essen->linkcity.push_back(paris);
    essen->linkcity.push_back(milan);
    essen->linkcity.push_back(st_petersburg);
    milan->linkcity.push_back(essen);
    milan->linkcity.push_back(paris);
    milan->linkcity.push_back(istanbul);
    st_petersburg->linkcity.push_back(essen);
    st_petersburg->linkcity.push_back(istanbul);
    st_petersburg->linkcity.push_back(moscow);

    los_angeles->linkcity.push_back(sydney);
    los_angeles->linkcity.push_back(san_francisco);
    los_angeles->linkcity.push_back(chicago);
    los_angeles->linkcity.push_back(mexico_city);
    mexico_city->linkcity.push_back(los_angeles);
    mexico_city->linkcity.push_back(chicago);
    mexico_city->linkcity.push_back(miami);
    mexico_city->linkcity.push_back(bogota);
    mexico_city->linkcity.push_back(lima);
    lima->linkcity.push_back(mexico_city);
    lima->linkcity.push_back(bogota);
    lima->linkcity.push_back(santiago);
    santiago->linkcity.push_back(lima);
    miami->linkcity.push_back(atlanta);
    miami->linkcity.push_back(washington);
    miami->linkcity.push_back(mexico_city);
    miami->linkcity.push_back(bogota);
    bogota->linkcity.push_back(miami);
    bogota->linkcity.push_back(mexico_city);
    bogota->linkcity.push_back(lima);
    bogota->linkcity.push_back(buenos_aires);
    bogota->linkcity.push_back(sao_paulo);
    sao_paulo->linkcity.push_back(bogota);
    sao_paulo->linkcity.push_back(buenos_aires);
    sao_paulo->linkcity.push_back(madrid);
    sao_paulo->linkcity.push_back(lagos);
    buenos_aires->linkcity.push_back(bogota);
    buenos_aires->linkcity.push_back(sao_paulo);
    lagos->linkcity.push_back(sao_paulo);
    lagos->linkcity.push_back(kinshasa);
    lagos->linkcity.push_back(khartoum);
    kinshasa->linkcity.push_back(lagos);
    kinshasa->linkcity.push_back(khartoum);
    kinshasa->linkcity.push_back(johannesburg);
    johannesburg->linkcity.push_back(kinshasa);
    johannesburg->linkcity.push_back(khartoum);
    khartoum->linkcity.push_back(lagos);
    khartoum->linkcity.push_back(kinshasa);
    khartoum->linkcity.push_back(johannesburg);
    khartoum->linkcity.push_back(cairo);

    algiers->linkcity.push_back(madrid);
    algiers->linkcity.push_back(paris);
    algiers->linkcity.push_back(istanbul);
    algiers->linkcity.push_back(cairo);
    istanbul->linkcity.push_back(algiers);
    istanbul->linkcity.push_back(cairo);
    istanbul->linkcity.push_back(baghdad);
    istanbul->linkcity.push_back(moscow);
    istanbul->linkcity.push_back(st_petersburg);
    istanbul->linkcity.push_back(milan);
    cairo->linkcity.push_back(khartoum);
    cairo->linkcity.push_back(algiers);
    cairo->linkcity.push_back(istanbul);
    cairo->linkcity.push_back(baghdad);
    cairo->linkcity.push_back(riyadh);
    moscow->linkcity.push_back(st_petersburg);
    moscow->linkcity.push_back(istanbul);
    moscow->linkcity.push_back(tehran);
    baghdad->linkcity.push_back(istanbul);
    baghdad->linkcity.push_back(cairo);
    baghdad->linkcity.push_back(riyadh);
    baghdad->linkcity.push_back(karachi);
    baghdad->linkcity.push_back(tehran);
    riyadh->linkcity.push_back(cairo);
    riyadh->linkcity.push_back(baghdad);
    riyadh->linkcity.push_back(karachi);
    karachi->linkcity.push_back(riyadh);
    karachi->linkcity.push_back(baghdad);
    karachi->linkcity.push_back(tehran);
    karachi->linkcity.push_back(delhi);
    karachi->linkcity.push_back(mumbai);
    tehran->linkcity.push_back(moscow);
    tehran->linkcity.push_back(baghdad);
    tehran->linkcity.push_back(karachi);
    tehran->linkcity.push_back(delhi);
    delhi->linkcity.push_back(tehran);
    delhi->linkcity.push_back(karachi);
    delhi->linkcity.push_back(mumbai);
    delhi->linkcity.push_back(chennai);
    delhi->linkcity.push_back(kolkata);
    mumbai->linkcity.push_back(karachi);
    mumbai->linkcity.push_back(delhi);
    mumbai->linkcity.push_back(chennai);
    chennai->linkcity.push_back(mumbai);
    chennai->linkcity.push_back(delhi);
    chennai->linkcity.push_back(kolkata);
    chennai->linkcity.push_back(bangkok);
    chennai->linkcity.push_back(jakarta);
    kolkata->linkcity.push_back(delhi);
    kolkata->linkcity.push_back(chennai);
    kolkata->linkcity.push_back(bangkok);
    kolkata->linkcity.push_back(hongkong);

    bangkok->linkcity.push_back(kolkata);
    bangkok->linkcity.push_back(chennai);
    bangkok->linkcity.push_back(jakarta);
    bangkok->linkcity.push_back(hochiminh_city);
    bangkok->linkcity.push_back(hongkong);
    jakarta->linkcity.push_back(chennai);
    jakarta->linkcity.push_back(bangkok);
    jakarta->linkcity.push_back(hochiminh_city);
    jakarta->linkcity.push_back(sydney);
    hochiminh_city->linkcity.push_back(bangkok);
    hochiminh_city->linkcity.push_back(jakarta);
    hochiminh_city->linkcity.push_back(manila);
    hochiminh_city->linkcity.push_back(hongkong);
    sydney->linkcity.push_back(jakarta);
    sydney->linkcity.push_back(manila);
    sydney->linkcity.push_back(los_angeles);
    manila->linkcity.push_back(hochiminh_city);
    manila->linkcity.push_back(hongkong);
    manila->linkcity.push_back(sydney);
    manila->linkcity.push_back(taipei);
    manila->linkcity.push_back(san_francisco);
    hongkong->linkcity.push_back(kolkata);
    hongkong->linkcity.push_back(bangkok);
    hongkong->linkcity.push_back(hochiminh_city);
    hongkong->linkcity.push_back(manila);
    hongkong->linkcity.push_back(taipei);
    hongkong->linkcity.push_back(shanghai);
    taipei->linkcity.push_back(shanghai);
    taipei->linkcity.push_back(hongkong);
    taipei->linkcity.push_back(manila);
    taipei->linkcity.push_back(osaka);
    shanghai->linkcity.push_back(beijing);
    shanghai->linkcity.push_back(seoul);
    shanghai->linkcity.push_back(tokyo);
    shanghai->linkcity.push_back(taipei);
    shanghai->linkcity.push_back(hongkong);
    beijing->linkcity.push_back(shanghai);
    beijing->linkcity.push_back(seoul);
    seoul->linkcity.push_back(beijing);
    seoul->linkcity.push_back(shanghai);
    seoul->linkcity.push_back(tokyo);
    tokyo->linkcity.push_back(seoul);
    tokyo->linkcity.push_back(shanghai);
    tokyo->linkcity.push_back(osaka);
    tokyo->linkcity.push_back(san_francisco);
    osaka->linkcity.push_back(tokyo);
    osaka->linkcity.push_back(taipei);


    play[0]=new operation_expert("Operation Expert",atlanta);
    play[1]=new quarantine_expert("Quarantine Expert",atlanta);
    play[2]=new scientist("Scientist",atlanta);
    play[3]=new medic("Medic",atlanta);
    atlanta->player[0]=play[0];
    atlanta->player[1]=play[1];
    atlanta->player[2]=play[2];
    atlanta->player[3]=play[3];


    ui->red->hide();
    ui->yellow->hide();
    ui->blue->hide();
    ui->black->hide();


    MBox.setWindowTitle("Infection");
    MBox.setText("Epdemic card drawn!");
    MBox.setIconPixmap(QPixmap(".\\img\\virus.png"));
}


game::~game()//析构函数
{
    delete ui;
}




void game::show_city_status(city* c)//显示城市状态
{
    ui->city_info->setText(c->city_name + "\nColor: " + c->color +
                       "\nDisease cubes: " + QString::number(c->cube_num, 10) +
                       "\nResearch station:" + QString::number(c->yanjiusuo, 10) + "/1" +
                       "\nCurrent infection rate:" + QString::number(infectrate[infectv], 10) +
                       "\nOutbreaks:" + QString::number(outbreaks, 10) + "/8");

    ui->city_widget->setFont(QFont("Bauhaus 93", 10));

}

void game::show_player_info(character* chtr, int n)//展示玩家信息
{
    ui->player_info->setText("Name:" + chtr->character_name +
                         "\nCurrent location:" + chtr->c->city_name +
                         "\nSteps left:" + QString::number(n, 10) + "/4" +
                         "\nNumber of \nresearch stations built:" + QString::number(yanjiusuo_num, 10) + "/6" +
                         "\n\nBlue cure:" + QString::number(jieyao[0], 10) + "/1" +
                         "\nYellow cure:" + QString::number(jieyao[1], 10) + "/1" +
                         "\nBlack cure:" + QString::number(jieyao[2], 10) + "/1" +
                         "\nRed cure:" + QString::number(jieyao[3], 10) + "/1" +
                         "\n\nOperation Expert pos:" + play[0]->c->city_name +
                         "\nQuarantine Expert pos:" + play[1]->c->city_name +
                         "\nScientiest pos:" + play[2]->c->city_name +
                         "\nMedic Expert pos:" + play[3]->c->city_name
            );

    ui->player_widget->setFont(QFont("Bauhaus 93", 10));



    QVector<city*>::iterator i;//展示手牌
    ui->hand->clear();
    for(i = chtr->have.begin(); i != chtr->have.end(); i++){

        ui->hand->addItem(QString((**i).color + " : " +(**i).city_name));
    }



}

city::city(){}

city::city(QString name, QString c,int xx,int yy) :city_name(name), color(c) ,x(xx),y(yy){
    cube_num=0;yanjiusuo=0;
    player[0]=NULL;player[1]=NULL;player[1]=NULL;player[3]=NULL;
    linkcity.clear();}//构造函数

bool city::link(city*cc)
{
    int temp=linkcity.size();
    for(int i=0;i<temp;i++)
    {
        if(linkcity[i]==cc)
        {
            return true;
        }
    }
    return false;
}

character::character(QString name,city*cc):
    character_name(name),c(cc){have.clear();card[0]=0;card[1]=0;card[2]=0;colornum[0]=0;colornum[1]=0;colornum[2]=0;colornum[3]=0;}//构造函数
void character::jineng(){}

operation_expert::operation_expert(QString name,city*cc):character(name,cc){}
void  operation_expert::jineng()
{}

quarantine_expert::quarantine_expert (QString name,city*cc):character(name,cc){}
void quarantine_expert::jineng()
{}

scientist::scientist(QString name,city*cc):character(name,cc){}
void  scientist::jineng()
{}

medic::medic(QString name,city*cc):character(name,cc){}
void medic::jineng()
{}


Infectcard::Infectcard(city* cc):c(cc)
{

}


Playercard::Playercard(int nn)
    :num(nn)
{c=NULL;}


Playercard::Playercard(city*cc)
    :c(cc){num=0;}


void game::process()//游戏过程在这里
{

    for(int p = 0; p < 100; p++){
        current_player = p % 4;

        //玩家开始自己的回合
        for(int i = 0; i < 4; i++){
            show_player_info(play[current_player], 4 - i);
            loop.exec();

        }

        //开始抽牌
        for (int j = 0; j < 2; j++) {
            while (true) {
                if (haveplayer == 56)
                {
                    //弹出"游戏失败"，结束游戏
                    QMessageBox::critical(this, "Warning","Welcome to the end of humankind!");
                    this->close();
                    return;
                }
                int curCard = rand() % 57;
                if (usedplayer[curCard] == 1)continue;
                if (curCard <= 47) {//抽到的是城市牌
                    play[current_player]->have.push_back(playercard[curCard].c);
                    usedplayer[curCard] = 1;
                    haveplayer++;
                    QLabel *clabel = new QLabel;
                    clabel->setText("City Card Obtained:\n" + playercard[curCard].c->city_name);
                    clabel->move(700,500);
                    clabel->show();
                    break;
                }
                else if(curCard>47&&curCard<=53) {
                    //把我在最前面定义的变量int infectv=2删除，添上下面两句int infectrate[7] = { 2,2,2,3,3,4,4 }；int infectv = 0;
                    if(infectv < 6){
                        infectv++;
                        infection_init_x += 50;
                        ui->infection_rate->setGeometry(infection_init_x , 160, 51, 51);
                    }

                    if (haveinfect == 56)
                    {
                        //弹出"游戏失败"，结束游戏
                       QMessageBox::critical(this, "Warning","Welcome to the end of humankind!");
                       this->close();
                       return;
                    }

                    int tempcard = rand() % 48;
                    while (usedinfect[tempcard] == 1) {
                        tempcard++;
                    }
                    QLabel * clabel=new QLabel;
                    clabel->setText("WARNING!!!\n Epidemic strikes:\n" + infectcard[tempcard].c->city_name );
                    clabel->move(700,500);
                    clabel->show();

                    infectcard[tempcard].c->cube_num = infectcard[tempcard].c->cube_num + 3;
                    for (int pp = 0; pp < 48; pp++) usedinfect[pp] = 0;
                    haveinfect=0;

                    while (infectcard[tempcard].c->cube_num >= 4)
                    {
                        //该城市爆发疫情，可以做个动画提示
                        QLabel * clabel=new QLabel;
                        clabel->setText("WARNING!!!\n Pandemic Outbreaks in :\n" + infectcard[tempcard].c->city_name );
                        clabel->move(700,500);
                        clabel->show();

                        //链接的城市cube_num++,并且判断会不会爆发疫情
                        infectcard[tempcard].c->cube_num--;
                        outbreaks++;//记得开一个全局变量存储爆发的次数
                        change_outbreaks_pos();
                        for (int pi = 0; pi < infectcard[tempcard].c->linkcity.size(); pi++) {
                            city* tmpc = infectcard[tempcard].c->linkcity[pi];
                            if (tmpc->cube_num == 3) {
                                outbreaks++;
                                change_outbreaks_pos();
                                QLabel * clabel=new QLabel;
                                clabel->setText("WARNING!!!\n Pandemic Outbreaks in :\n" + tmpc->city_name );
                                clabel->move(700,500);
                                clabel->show();
                                for (int pj = 0; pj < tmpc->linkcity.size(); pj++) {
                                    tmpc->linkcity[pj]->cube_num++;
                                    if (tmpc->linkcity[pj]->cube_num > 3) {
                                        tmpc->linkcity[pj]->cube_num--;

                                    }
                                }
                                continue;
                            }
                            tmpc->cube_num++;
                         }
                     }
                    break;
                }
                else if (curCard >= 54 && curCard <= 56)
                {
                    play[current_player]->card[curCard - 54]++;
                    break;
                }
            }
        }

        if(ans==1)
        {
            //弹出胜利窗口，以及退出游戏的窗口
            QMessageBox::warning(this, "Victory","Victory shall be mine!");
            this->close();
            return;
        }
        for(int j=0;j<infectrate[infectv];j++)
        {
            if(haveinfect>=48)
            {
                //游戏失败
            }
            int temp=rand()%48;
            while(usedinfect[temp]==1)
            {
                temp=rand()%48;
            }
            usedinfect[temp]=1;
            infectcard[temp].c->cube_num++;
            //MBox.exec();
            QLabel * clabel=new QLabel;
            clabel->setText("WARNING!!!\n Virus strikes:\n" + infectcard[temp].c->city_name );
            clabel->move(700,500);
            clabel->show();
            //判断疫情是否爆发
            if(infectcard[temp].c->cube_num>3){
                infectcard[temp].c->cube_num--;
                outbreaks++;//记得开一个全局变量存储爆发的次数
                QLabel * clabel=new QLabel;
                clabel->setText("WARNING!!!\n Pandemic Outbreaks in :\n" + infectcard[temp].c->city_name );
                clabel->move(700,500);
                clabel->show();

                change_outbreaks_pos();
                for (int pi = 0; pi < infectcard[temp].c->linkcity.size(); pi++) {
                    city* tmpc = infectcard[temp].c->linkcity[pi];
                    if (tmpc->cube_num == 3) {
                        outbreaks++;
                        QLabel * clabel=new QLabel;
                        clabel->setText("WARNING!!!\n Pandemic Outbreaks in :\n" + tmpc->city_name );
                        clabel->move(700,500);
                        clabel->show();

                        change_outbreaks_pos();
                        for (int pj = 0; pj < tmpc->linkcity.size(); pj++) {
                            tmpc->linkcity[pj]->cube_num++;
                            if (tmpc->linkcity[pj]->cube_num > 3) {
                                tmpc->linkcity[pj]->cube_num--;

                            }
                        }
                        continue;
                    }
                    tmpc->cube_num++;
                 }
            }

        }
    }
}

void game::on_discover_cure_clicked()
{

    if(play[current_player]->c->yanjiusuo==0) {
        QMessageBox::critical(this, "Warning","Cannot discover cure!");
        return;
    }

    else{
          if(current_player==2)//科学家合成解药只需要四个
         {
            for(int w=0;w<3;w++)
            {
                if(play[current_player]->colornum[w]>=4&&jieyao[w]==0)
                {
                    jieyao[w]=1;
                    //可以做个动画就是让那个颜色的解药的图片出现三四秒？
                    QMessageBox::information(this, "Warning","A cure discovered!");
                    switch (w){
                    case 0: ui->blue->show();break;
                    case 1:ui->yellow->show();break;
                    case 2:ui->black->show();break;
                    case 3:ui->red->show();break;
                    }
                }
            }
         }
         else{
            for(int w=0;w<4;w++)
            {
                if(play[current_player]->colornum[w]>=5&&jieyao[w]==0)
                {
                    jieyao[w]=1;
                    QMessageBox::information(this, "Warning","A cure discovered!");
                    //可以做个动画就是让那个颜色的解药的图片出现三四秒？
                    switch (w){
                    case 0: ui->blue->show();break;
                    case 1:ui->yellow->show();break;
                    case 2:ui->black->show();break;
                    case 3:ui->red->show();break;
                    }
                }
            }
        }
         if(jieyao[0]==1&&jieyao[1]==1&&jieyao[2]==1&&jieyao[3]==1)
         {
            ans=1;
            QMessageBox::critical(this, "Warning","you win!");

         }
    }
    loop.quit();
}

void game::on_treat_disease_clicked()
{
    if(game::play[current_player]->c->cube_num>0)
    {
        if(current_player==3)//医务人员可以全部清除病毒
        {
            play[3]->c->cube_num=0;
        }
        else {
            play[current_player]->c->cube_num--;
        }
        loop.quit();
    }
    else{
        //弹出对话框“该城市无病毒”然后让他重新选择动作
        QMessageBox::critical(this, "Warning","No disease to cure!");
    }
    show_city_status(play[current_player]->c);

}

void game::on_build_station_clicked()
{
    if(yanjiusuo_num > 5){
        QMessageBox::critical(this, "Warning","Maximum number of research station built!");
        return;
    }
    if(play[current_player]->c->yanjiusuo>0)
    {
        //弹出对话框“已有研究所”然后让他重新选择
        QMessageBox::critical(this, "Warning","Research station existed!");
        return;
    }
    else{
        if(current_player==0) {
            yanjiusuo_num++;
            play[current_player]->c->yanjiusuo=1;
            switch(yanjiusuo_num)
            {
            case 1: ui->rs6->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            case 2: ui->rs5->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            case 3: ui->rs4->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            case 4: ui->rs3->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            case 5: ui->rs2->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            case 6: ui->rs1->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
            }

            //maybe添加一个研究所的动画3秒钟？
        }
        else{
            if(play[current_player]->have.empty()==true)
            {
                //弹出对话框“您无法建造研究所”然后让他重新选择行动
                QMessageBox::critical(this, "Warning","Unable to build reseach station!");
                return;
            }
            else{
                yanjiusuo_num++;
                play[current_player]->have.pop_back();
                play[current_player]->c->yanjiusuo=1;
                switch(yanjiusuo_num)
                {
                case 1: ui->rs6->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                case 2: ui->rs5->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                case 3: ui->rs4->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                case 4: ui->rs3->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                case 5: ui->rs2->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                case 6: ui->rs1->setGeometry(play[current_player]->c->x, play[current_player]->c->y, 51, 51);break;
                }
                //maybe添加一个研究所的动画3秒钟？
            }
        }
    }
    loop.quit();
}

void game::on_direct_flight_clicked()
{
    loop2.exec();
    current_city = destination;
    //以下是使用了特殊卡的情形
    bool isFind = false;
    int ptr = 0;
    for (ptr = 0; ptr < play[current_player]->have.size(); ptr++) {
        if ((play[current_player]->have[ptr]) == current_city) {
            isFind = true;
            break;
        }
    }
    if (isFind) {
        play[current_player]->have.erase(&(play[current_player]->have[ptr]));
        play[current_player]->c->player[current_player] = NULL;
        play[current_player]->c = current_city;
        current_city->player[current_player] = play[current_player];
        switch(current_player){
        case 0: ui->operation_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 1: ui->quarantine_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 2: ui->scientist->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 3: ui->medic->setGeometry(current_city->x, current_city->y, 21, 41);break;
        }

        loop.quit();
    }
    //弹出窗口“您无法到达该城市”然后让他重新选择动作

    else QMessageBox::critical(this, "Warning", "Unable to reach destination!");

    return;
}

void game::on_drive_ferry_clicked()
{
    loop2.exec();
    current_city = destination;
    if(play[current_player]->c->link(current_city))
    {
        play[current_player]->c->player[current_player]=NULL;
        play[current_player]->c = current_city;
        current_city->player[current_player]=play[current_player];
        switch(current_player){
        case 0: ui->operation_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 1: ui->quarantine_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 2: ui->scientist->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 3: ui->medic->setGeometry(current_city->x, current_city->y, 21, 41);break;
        }
        loop.quit();
    }

    else QMessageBox::critical(this, "Warning","Unable to reach destination!");


}

void game::on_shuttle_flight_clicked()
{

    loop2.exec();
    current_city = destination;
    if(current_city->yanjiusuo>0&&play[current_player]->c->yanjiusuo>0)
    {
        play[current_player]->c->player[current_player]=NULL;
        play[current_player]->c = current_city;
        current_city->player[current_player]=play[current_player];
        switch(current_player){
        case 0: ui->operation_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 1: ui->quarantine_e->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 2: ui->scientist->setGeometry(current_city->x, current_city->y, 21, 41);break;
        case 3: ui->medic->setGeometry(current_city->x, current_city->y, 21, 41);break;
        }
        loop.quit();
    }

    else QMessageBox::critical(this, "Warning","Unable to reach destination!");


}

void game::on_skip_clicked()//跳过一步
{
    loop.quit();
    return;
}



void game::change_outbreaks_pos()//改变outbreak标志的位置
{
    if(outbreaks % 2 == 1){
        outbreaks_init_x += 50;
        outbreaks_init_y += 50;
        ui->outbreaks->setGeometry(outbreaks_init_x, outbreaks_init_y, 51, 51);//改变标记的位置
    }

    else{
        outbreaks_init_x -= 50;
        outbreaks_init_y += 50;
        ui->outbreaks->setGeometry(outbreaks_init_x, outbreaks_init_y + 50, 51, 51);
    }
}



//城市按钮触发事件
//blue
void game::on_atlanta_clicked()
{
    destination = atlanta;
    show_city_status(atlanta);
    loop2.quit();
}


void game::on_chicago_clicked()
{
    destination = chicago;
    show_city_status(chicago);
    loop2.quit();
}

void game::on_montreal_clicked()
{
    destination = montreal;
    show_city_status(montreal);
    loop2.quit();
}

void game::on_san_francisco_clicked()
{
    destination = san_francisco;
    show_city_status(san_francisco);
    loop2.quit();
}


void game::on_new_york_clicked()
{
    destination = new_york;
    show_city_status(new_york);
    loop2.quit();
}

void game::on_washington_clicked()
{
    destination = washington;
    show_city_status(washington);
    loop2.quit();
}

void game::on_madrid_clicked()
{
    destination = madrid;
    show_city_status(madrid);
    loop2.quit();
}

void game::on_london_clicked()
{
    destination  = london;
    show_city_status(london);
    loop2.quit();
}

void game::on_paris_clicked()
{
    destination = paris;
    show_city_status(paris);
    loop2.quit();
}


void game::on_essen_clicked()
{
    destination = essen;
    show_city_status(essen);
    loop2.quit();
}

void game::on_milan_clicked()
{
    destination = milan;
    show_city_status(milan);
    loop2.quit();
}

void game::on_st_petersburg_clicked()
{
    destination = st_petersburg;
    show_city_status(st_petersburg);
    loop2.quit();
}

//yellow
void game::on_los_angeles_clicked()
{
    destination = los_angeles;
    show_city_status(los_angeles);
    loop2.quit();
}

void game::on_mexico_city_clicked()
{
    destination = mexico_city;
    show_city_status(mexico_city);
    loop2.quit();
}

void game::on_miami_clicked()
{
    destination = miami;
    show_city_status(miami);
    loop2.quit();
}

void game::on_bogota_clicked()
{
    destination = bogota;
    show_city_status(bogota);
    loop2.quit();
}

void game::on_lima_clicked()
{
    destination = lima;
    show_city_status(lima);
    loop2.quit();
}

void game::on_santiago_clicked()
{
    destination = santiago;
    show_city_status(santiago);
    loop2.quit();
}

void game::on_buenos_aires_clicked()
{
    destination = buenos_aires;
    show_city_status(buenos_aires);
    loop2.quit();
}

void game::on_sao_paulo_clicked()
{
    destination = sao_paulo;
    show_city_status(sao_paulo);
    loop2.quit();
}

void game::on_lagos_clicked()
{
    destination = lagos;
    show_city_status(lagos);
    loop2.quit();
}

void game::on_khartoum_clicked()
{
    destination = khartoum;
    show_city_status(khartoum);
    loop2.quit();
}

void game::on_kinshasa_clicked()
{
    destination = kinshasa;
    show_city_status(kinshasa);
    loop2.quit();
}

void game::on_johannesburg_clicked()
{
    destination = johannesburg;
    show_city_status(johannesburg);
    loop2.quit();
}

//black
void game::on_moscow_clicked()
{
    destination = moscow;
    show_city_status(moscow);
    loop2.quit();
}

void game::on_istanbul_clicked()
{
    destination = istanbul;
    show_city_status(istanbul);
    loop2.quit();
}

void game::on_tehran_clicked()
{
    destination = tehran;
    show_city_status(tehran);
    loop2.quit();
}

void game::on_baghdad_clicked()
{
    destination = baghdad;
    show_city_status(baghdad);
    loop2.quit();
}

void game::on_algiers_clicked()
{
    destination = algiers;
    show_city_status(algiers);
    loop2.quit();
}

void game::on_cairo_clicked()
{
    destination = cairo;
    show_city_status(cairo);
    loop2.quit();
}

void game::on_karachi_clicked()
{
    destination = karachi;
    show_city_status(karachi);
    loop2.quit();
}

void game::on_delhi_clicked()
{
    destination = delhi;
    show_city_status(delhi);
    loop2.quit();
}

void game::on_riyadh_clicked()
{
    destination = riyadh;
    show_city_status(riyadh);
    loop2.quit();
}

void game::on_kolkata_clicked()
{
    destination = kolkata;
    show_city_status(kolkata);
    loop2.quit();
}

void game::on_mumbai_clicked()
{
    destination = mumbai;
    show_city_status(mumbai);
    loop2.quit();
}

void game::on_chennai_clicked()
{
    destination = chennai;
    show_city_status(chennai);
    loop2.quit();
}

//red
void game::on_beijing_clicked()
{
    destination = beijing;
    show_city_status(beijing);
    loop2.quit();
}

void game::on_seoul_clicked()
{
    destination = seoul;
    show_city_status(seoul);
    loop2.quit();
}

void game::on_tokyo_clicked()
{
    destination = tokyo;
    show_city_status(tokyo);
    loop2.quit();
}

void game::on_shanghai_clicked()
{
    destination = shanghai;
    show_city_status(shanghai);
    loop2.quit();
}

void game::on_osaka_clicked()
{
    destination = osaka;
    show_city_status(osaka);
    loop2.quit();
}

void game::on_taipei_clicked()
{
    destination = taipei;
    show_city_status(taipei);
    loop2.quit();
}

void game::on_hongkong_clicked()
{
    destination = hongkong;
    show_city_status(hongkong);
    loop2.quit();
}

void game::on_bangkok_clicked()
{
    destination = bangkok;
    show_city_status(bangkok);
    loop2.quit();
}

void game::on_manila_clicked()
{
    destination = manila;
    show_city_status(manila);
    loop2.quit();
}

void game::on_jakarta_clicked()
{
    destination = jakarta;
    show_city_status(jakarta);
    loop2.quit();
}

void game::on_hochiminh_city_clicked()
{
    destination = hochiminh_city;
    show_city_status(hochiminh_city);
    loop2.quit();
}

void game::on_sydney_clicked()
{
    destination = sydney;
    show_city_status(sydney);
    loop2.quit();
}



void game::on_exit_game_clicked()
{
    if(ans!=1)
    QMessageBox::critical(this, "Warning","You have failed. Welcome to the end of the world!");
    else
    QMessageBox::critical(this, "Warning","Congratulations! You have saved the world!");
    this->close();

}

