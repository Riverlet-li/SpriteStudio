/********************************************************************************
** Form generated from reading UI file 'SpriteWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPRITEWIDGET_H
#define UI_SPRITEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpriteWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *SpriteWidget)
    {
        if (SpriteWidget->objectName().isEmpty())
            SpriteWidget->setObjectName(QStringLiteral("SpriteWidget"));
        SpriteWidget->resize(1000, 630);
        label = new QLabel(SpriteWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(300, 180, 241, 161));

        retranslateUi(SpriteWidget);

        QMetaObject::connectSlotsByName(SpriteWidget);
    } // setupUi

    void retranslateUi(QWidget *SpriteWidget)
    {
        SpriteWidget->setWindowTitle(QApplication::translate("SpriteWidget", "SpriteWidget", Q_NULLPTR));
        label->setText(QApplication::translate("SpriteWidget", "This is Sprite Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpriteWidget: public Ui_SpriteWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPRITEWIDGET_H
