/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QPushButton *startB;
    QPushButton *exitB;
    QWidget *background;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 800);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 110, 771, 511));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("image: url(:/img/img/title.png);"));

        verticalLayout_2->addWidget(widget);

        startB = new QPushButton(verticalLayoutWidget);
        startB->setObjectName(QStringLiteral("startB"));
        startB->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QStringLiteral("Bauhaus 93"));
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        startB->setFont(font);
        startB->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_2->addWidget(startB);

        exitB = new QPushButton(verticalLayoutWidget);
        exitB->setObjectName(QStringLiteral("exitB"));
        exitB->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exitB->sizePolicy().hasHeightForWidth());
        exitB->setSizePolicy(sizePolicy);
        exitB->setMinimumSize(QSize(0, 50));
        exitB->setFont(font);
        exitB->setStyleSheet(QStringLiteral("color: rgb(170, 0, 0);"));

        verticalLayout_2->addWidget(exitB);

        widget->raise();
        exitB->raise();
        startB->raise();
        background = new QWidget(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1001, 801));
        background->setStyleSheet(QStringLiteral("image: url(:/img/img/pandemic.jpg);"));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        verticalLayoutWidget->raise();

        retranslateUi(MainWindow);
        QObject::connect(exitB, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        startB->setText(QApplication::translate("MainWindow", "START A NEW GAME", 0));
        exitB->setText(QApplication::translate("MainWindow", "EXIT GAME", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
