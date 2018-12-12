#include "stdafx.h"
#include "SpriteStudio.h"

SpriteStudio::SpriteStudio(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    createTabs();
}

void SpriteStudio::createTabs()
{
    moduleWidget = new ModuleWidget(ui.tabModule);
    spriteWidget = new SpriteWidget(ui.tabSprite);
    animationWidget = new AnimationWidget(ui.tabAnimation);
}