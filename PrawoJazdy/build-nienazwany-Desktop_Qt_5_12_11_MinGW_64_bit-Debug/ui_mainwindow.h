/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Nauka;
    QPushButton *egzamin;
    QPushButton *skrzyzowania;
    QPushButton *Dodatki;
    QPushButton *zrodla;
    QPushButton *zakoncz;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(700, 450));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Nauka = new QPushButton(centralwidget);
        Nauka->setObjectName(QString::fromUtf8("Nauka"));
        Nauka->setEnabled(true);
        Nauka->setGeometry(QRect(40, 90, 181, 180));
        Nauka->setMinimumSize(QSize(180, 160));
        Nauka->setIconSize(QSize(180, 180));
        egzamin = new QPushButton(centralwidget);
        egzamin->setObjectName(QString::fromUtf8("egzamin"));
        egzamin->setEnabled(true);
        egzamin->setGeometry(QRect(280, 90, 181, 180));
        egzamin->setMinimumSize(QSize(180, 160));
        egzamin->setIconSize(QSize(180, 180));
        skrzyzowania = new QPushButton(centralwidget);
        skrzyzowania->setObjectName(QString::fromUtf8("skrzyzowania"));
        skrzyzowania->setEnabled(true);
        skrzyzowania->setGeometry(QRect(530, 90, 181, 180));
        skrzyzowania->setMinimumSize(QSize(180, 160));
        skrzyzowania->setIconSize(QSize(180, 180));
        Dodatki = new QPushButton(centralwidget);
        Dodatki->setObjectName(QString::fromUtf8("Dodatki"));
        Dodatki->setEnabled(true);
        Dodatki->setGeometry(QRect(50, 330, 181, 180));
        Dodatki->setMinimumSize(QSize(180, 160));
        Dodatki->setIconSize(QSize(180, 180));
        zrodla = new QPushButton(centralwidget);
        zrodla->setObjectName(QString::fromUtf8("zrodla"));
        zrodla->setEnabled(true);
        zrodla->setGeometry(QRect(280, 330, 181, 180));
        zrodla->setMinimumSize(QSize(180, 160));
        zrodla->setIconSize(QSize(180, 180));
        zakoncz = new QPushButton(centralwidget);
        zakoncz->setObjectName(QString::fromUtf8("zakoncz"));
        zakoncz->setEnabled(true);
        zakoncz->setGeometry(QRect(530, 330, 181, 180));
        zakoncz->setMinimumSize(QSize(180, 160));
        zakoncz->setIconSize(QSize(180, 180));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(570, 30, 118, 23));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Nauka->setText(QString());
        egzamin->setText(QString());
        skrzyzowania->setText(QString());
        Dodatki->setText(QString());
        zrodla->setText(QString());
        zakoncz->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
