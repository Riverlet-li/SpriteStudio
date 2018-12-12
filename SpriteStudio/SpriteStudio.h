#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_SpriteStudio.h"
#include "ModuleWidget.h"
#include "SpriteWidget.h"
#include "AnimationWidget.h"

class SpriteStudio : public QMainWindow
{
    Q_OBJECT

public:
    SpriteStudio(QWidget *parent = Q_NULLPTR);

private:
    void createTabs();

    Ui::SpriteStudioClass ui;

    ModuleWidget * moduleWidget;
    SpriteWidget * spriteWidget;
    AnimationWidget * animationWidget;
};
