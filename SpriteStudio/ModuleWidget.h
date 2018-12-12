#pragma once

#include <QWidget>
#include "ui_ModuleWidget.h"

class ModuleWidget : public QWidget
{
    Q_OBJECT

public:
    ModuleWidget(QWidget *parent = Q_NULLPTR);
    ~ModuleWidget();

private:
    void CreateTable();

    Ui::ModuleWidget ui;
    QStandardItemModel *tableModel;
};
