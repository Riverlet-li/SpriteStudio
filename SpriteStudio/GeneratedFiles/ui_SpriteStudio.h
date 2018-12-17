/********************************************************************************
** Form generated from reading UI file 'SpriteStudio.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRITESTUDIO_H
#define UI_SPRITESTUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpriteStudioClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabModule;
    QWidget *tabSprite;
    QWidget *tabAnimation;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_A;
    QMenu *menu_E;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SpriteStudioClass)
    {
        if (SpriteStudioClass->objectName().isEmpty())
            SpriteStudioClass->setObjectName(QStringLiteral("SpriteStudioClass"));
        SpriteStudioClass->resize(1024, 768);
        actionNew = new QAction(SpriteStudioClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(SpriteStudioClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(SpriteStudioClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(SpriteStudioClass);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        actionSaveAs->setIcon(icon2);
        actionExit = new QAction(SpriteStudioClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(SpriteStudioClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(SpriteStudioClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1021, 691));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabModule = new QWidget();
        tabModule->setObjectName(QStringLiteral("tabModule"));
        tabWidget->addTab(tabModule, QString());
        tabSprite = new QWidget();
        tabSprite->setObjectName(QStringLiteral("tabSprite"));
        tabWidget->addTab(tabSprite, QString());
        tabAnimation = new QWidget();
        tabAnimation->setObjectName(QStringLiteral("tabAnimation"));
        tabWidget->addTab(tabAnimation, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 690, 351, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 690, 41, 21));
        SpriteStudioClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SpriteStudioClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_A = new QMenu(menuBar);
        menu_A->setObjectName(QStringLiteral("menu_A"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        SpriteStudioClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SpriteStudioClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SpriteStudioClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SpriteStudioClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SpriteStudioClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_A->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_A->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();

        retranslateUi(SpriteStudioClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SpriteStudioClass);
    } // setupUi

    void retranslateUi(QMainWindow *SpriteStudioClass)
    {
        SpriteStudioClass->setWindowTitle(QApplication::translate("SpriteStudioClass", "SpriteStudio", Q_NULLPTR));
        actionNew->setText(QApplication::translate("SpriteStudioClass", "New(&N)", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("SpriteStudioClass", "Open(&O)", Q_NULLPTR));
        actionSave->setText(QApplication::translate("SpriteStudioClass", "Save(&S)", Q_NULLPTR));
        actionSaveAs->setText(QApplication::translate("SpriteStudioClass", "Save As", Q_NULLPTR));
        actionExit->setText(QApplication::translate("SpriteStudioClass", "Exit(&X)", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("SpriteStudioClass", "About", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabModule), QApplication::translate("SpriteStudioClass", "Module", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabSprite), QApplication::translate("SpriteStudioClass", "Sprite", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabAnimation), QApplication::translate("SpriteStudioClass", "Animation", Q_NULLPTR));
        label->setText(QApplication::translate("SpriteStudioClass", "c://image.png", Q_NULLPTR));
        label_2->setText(QApplication::translate("SpriteStudioClass", "Image:", Q_NULLPTR));
        menu->setTitle(QApplication::translate("SpriteStudioClass", "File(&F)", Q_NULLPTR));
        menu_A->setTitle(QApplication::translate("SpriteStudioClass", "About(&A)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("SpriteStudioClass", "Edit(&E)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpriteStudioClass: public Ui_SpriteStudioClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRITESTUDIO_H
