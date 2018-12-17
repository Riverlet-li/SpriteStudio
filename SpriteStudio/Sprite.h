#pragma once

#include <QObject>

class Sprite : public QObject
{
	Q_OBJECT

public:
	Sprite(QObject *parent);
	~Sprite();

public:
	void init();
};
