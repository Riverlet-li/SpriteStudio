#pragma once

#include <QWidget>
#include "ui_AnimationWidget.h"

class AnimationWidget : public QWidget
{
    Q_OBJECT

public:
    AnimationWidget(QWidget *parent = Q_NULLPTR);
    ~AnimationWidget();

private:
    Ui::AnimationWidget ui;
};
