/********************************************************************************
** Form generated from reading UI file 'AnimationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONWIDGET_H
#define UI_ANIMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationWidget
{
public:
    QLabel *label;

    void setupUi(QWidget *AnimationWidget)
    {
        if (AnimationWidget->objectName().isEmpty())
            AnimationWidget->setObjectName(QStringLiteral("AnimationWidget"));
        AnimationWidget->resize(1000, 630);
        label = new QLabel(AnimationWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 190, 281, 211));

        retranslateUi(AnimationWidget);

        QMetaObject::connectSlotsByName(AnimationWidget);
    } // setupUi

    void retranslateUi(QWidget *AnimationWidget)
    {
        AnimationWidget->setWindowTitle(QApplication::translate("AnimationWidget", "AnimationWidget", Q_NULLPTR));
        label->setText(QApplication::translate("AnimationWidget", "This is Animation Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationWidget: public Ui_AnimationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONWIDGET_H
