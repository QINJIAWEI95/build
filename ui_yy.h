/********************************************************************************
** Form generated from reading UI file 'yy.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YY_H
#define UI_YY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_yy
{
public:

    void setupUi(QDialog *yy)
    {
        if (yy->objectName().isEmpty())
            yy->setObjectName(QStringLiteral("yy"));
        yy->resize(400, 300);

        retranslateUi(yy);

        QMetaObject::connectSlotsByName(yy);
    } // setupUi

    void retranslateUi(QDialog *yy)
    {
        yy->setWindowTitle(QApplication::translate("yy", "nani", nullptr));
    } // retranslateUi

};

namespace Ui {
    class yy: public Ui_yy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YY_H
