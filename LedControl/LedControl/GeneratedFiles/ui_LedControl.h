/********************************************************************************
** Form generated from reading UI file 'LedControl.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEDCONTROL_H
#define UI_LEDCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LedControlClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LedControlClass)
    {
        if (LedControlClass->objectName().isEmpty())
            LedControlClass->setObjectName(QStringLiteral("LedControlClass"));
        LedControlClass->resize(600, 400);
        menuBar = new QMenuBar(LedControlClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LedControlClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LedControlClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LedControlClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LedControlClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LedControlClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LedControlClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LedControlClass->setStatusBar(statusBar);

        retranslateUi(LedControlClass);

        QMetaObject::connectSlotsByName(LedControlClass);
    } // setupUi

    void retranslateUi(QMainWindow *LedControlClass)
    {
        LedControlClass->setWindowTitle(QApplication::translate("LedControlClass", "LedControl", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LedControlClass: public Ui_LedControlClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEDCONTROL_H
