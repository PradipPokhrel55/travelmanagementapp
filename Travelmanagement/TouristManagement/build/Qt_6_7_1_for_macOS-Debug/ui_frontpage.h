/********************************************************************************
** Form generated from reading UI file 'frontpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRONTPAGE_H
#define UI_FRONTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_frontpage
{
public:

    void setupUi(QDialog *frontpage)
    {
        if (frontpage->objectName().isEmpty())
            frontpage->setObjectName("frontpage");
        frontpage->resize(400, 300);

        retranslateUi(frontpage);

        QMetaObject::connectSlotsByName(frontpage);
    } // setupUi

    void retranslateUi(QDialog *frontpage)
    {
        frontpage->setWindowTitle(QCoreApplication::translate("frontpage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frontpage: public Ui_frontpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONTPAGE_H
