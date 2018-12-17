#pragma once

#include <QtWidgets/QMainWindow>

#include "ui_SpriteStudio.h"
#include "ModuleWidget.h"
#include "SpriteWidget.h"
#include "AnimationWidget.h"

class Sprite;
class SpriteStudio : public QMainWindow
{
	Q_OBJECT

public:
	SpriteStudio(QWidget *parent = Q_NULLPTR);

private:
	void createTabs();
	void createAction();
	void createMenu();
	void createStatusBar();
	void readSettings();
	void writeSettings();

private slots:
	void onActionNew();
	void onActionOpen();
	bool onActionSave();
	bool onActionSaveAs();
	void onActionAbout();

protected:
	void closeEvent(QCloseEvent *event) override;

private:
	bool checkSave();
	bool saveFile(const QString &fileName);
	void setCurFile(const QString &fileName);

public:
	void setContentModified(bool val) { _isContentModified = val; }
	bool isContentModified() { return _isContentModified; }
	void loadFile(const QString &fileName);

private:
	Ui::SpriteStudioClass ui;

	// widgets
	ModuleWidget * _moduleWidget;
	SpriteWidget * _spriteWidget;
	AnimationWidget * _animationWidget;

	// data
	Sprite * _sprite;
	QString _curFile;
	bool _isContentModified;
};
