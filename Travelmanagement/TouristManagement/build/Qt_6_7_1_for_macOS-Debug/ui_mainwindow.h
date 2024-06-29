/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QPushButton *pushButton_login;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *username;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(160, 80, 371, 241));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 50, 58, 16));
        pushButton_login = new QPushButton(groupBox);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(120, 160, 100, 32));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 30, 331, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(widget);
        username->setObjectName("username");

        horizontalLayout->addWidget(username);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout->addWidget(lineEdit_2);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 90, 331, 51));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        password = new QLabel(widget1);
        password->setObjectName("password");

        horizontalLayout_2->addWidget(password);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_2->addWidget(lineEdit);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 280, 62, 74));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label->setText(QString());
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "User Name:", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
