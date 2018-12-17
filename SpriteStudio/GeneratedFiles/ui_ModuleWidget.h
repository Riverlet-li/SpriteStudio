/********************************************************************************
** Form generated from reading UI file 'ModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULEWIDGET_H
#define UI_MODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModuleWidget
{
public:
    QTableView *tableView;

    void setupUi(QWidget *ModuleWidget)
    {
        if (ModuleWidget->objectName().isEmpty())
            ModuleWidget->setObjectName(QStringLiteral("ModuleWidget"));
        ModuleWidget->resize(1000, 630);
        tableView = new QTableView(ModuleWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 441, 621));

        retranslateUi(ModuleWidget);

        QMetaObject::connectSlotsByName(ModuleWidget);
    } // setupUi

    void retranslateUi(QWidget *ModuleWidget)
    {
        ModuleWidget->setWindowTitle(QApplication::translate("ModuleWidget", "ModuleWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ModuleWidget: public Ui_ModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULEWIDGET_H
