#pragma once

#include <QWidget>
#include "ui_SpriteWidget.h"

class SpriteWidget : public QWidget
{
    Q_OBJECT

public:
    SpriteWidget(QWidget *parent = Q_NULLPTR);
    ~SpriteWidget();

private:
    Ui::SpriteWidget ui;
};
