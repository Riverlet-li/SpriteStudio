#include "stdafx.h"
#include "Sprite.h"

Sprite::Sprite(QObject *parent)
	: QObject(parent)
{
}

Sprite::~Sprite()
{
}

void Sprite::init()
{

}

void Sprite::parseJson(const QFile & file)
{
	qDebug("parseJson file(%s)", qUtf8Printable(file.fileName()));
}

void Sprite::savejson(QFile & file)
{
	qDebug("savejson file(%s)", qUtf8Printable(file.fileName()));
}

