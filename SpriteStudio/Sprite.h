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
	void parseJson(const QFile & file);
	void savejson(QFile & file);

private:
	QString _filePath;
};
