#include "stdafx.h"
#include "SpriteStudio.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SpriteStudio w;
    w.show();
    return a.exec();
}
