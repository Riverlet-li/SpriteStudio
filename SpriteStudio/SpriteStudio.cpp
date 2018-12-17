#include "stdafx.h"
#include "SpriteStudio.h"
#include "Sprite.h"

SpriteStudio::SpriteStudio(QWidget *parent)
: QMainWindow(parent), _sprite(Q_NULLPTR), _isContentModified(false)
{
	ui.setupUi(this);

	createTabs();
	createAction();
	createMenu();
	createStatusBar();
	readSettings();

	setCurFile(QString());
	setUnifiedTitleAndToolBarOnMac(true);
}

void SpriteStudio::createTabs()
{
	_moduleWidget = new ModuleWidget(ui.tabModule);
	_spriteWidget = new SpriteWidget(ui.tabSprite);
	_animationWidget = new AnimationWidget(ui.tabAnimation);
}

void SpriteStudio::createAction()
{
	connect(ui.actionNew, &QAction::triggered, this, &SpriteStudio::onActionNew);
	connect(ui.actionOpen, &QAction::triggered, this, &SpriteStudio::onActionOpen);
	connect(ui.actionSave, &QAction::triggered, this, &SpriteStudio::onActionSave);
	connect(ui.actionAbout, &QAction::triggered, this, &SpriteStudio::onActionAbout);
	connect(ui.actionSaveAs, &QAction::triggered, this, &SpriteStudio::onActionSaveAs);
}

void SpriteStudio::createMenu()
{
}

void SpriteStudio::createStatusBar()
{

}

bool SpriteStudio::checkSave()
{
	if (!isContentModified())
		return true;
	const QMessageBox::StandardButton ret
		= QMessageBox::warning(this, tr("Application"),
		tr("The sprite has been modified.\n"
		"Do you want to save your changes?"),
		QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	switch (ret) {
	case QMessageBox::Save:
		return this->onActionSave();
	case QMessageBox::Cancel:
		return false;
	default:
		break;
	}
	return true;
}

/////////////////////////////////////////////////////////
// setting
void SpriteStudio::readSettings()
{
	QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());
	const QByteArray geometry = settings.value("geometry", QByteArray()).toByteArray();
	if (geometry.isEmpty()) {
		const QRect availableGeometry = QApplication::desktop()->availableGeometry(this);
		resize(availableGeometry.width() / 3, availableGeometry.height() / 2);
		move((availableGeometry.width() - width()) / 2,
			(availableGeometry.height() - height()) / 2);
	} else {
		restoreGeometry(geometry);
	}
}

void SpriteStudio::writeSettings()
{
	QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());
	settings.setValue("geometry", saveGeometry());
}

/////////////////////////////////////////////////////////
// slots
void SpriteStudio::onActionNew()
{
	if (checkSave()) {
		_sprite->init();
		setCurFile(QString());
	}
}

void SpriteStudio::onActionOpen()
{
	if (checkSave()) {
		QString fileName = QFileDialog::getOpenFileName(this);
		if (!fileName.isEmpty())
			this->loadFile(fileName);
	}
}

bool SpriteStudio::onActionSave()
{
	if (_curFile.isEmpty()) {
		return onActionSave();
	} else {
		return saveFile(_curFile);
	}
}

bool SpriteStudio::onActionSaveAs()
{
	QFileDialog dialog(this);
	dialog.setWindowModality(Qt::WindowModal);
	dialog.setAcceptMode(QFileDialog::AcceptSave);
	if (dialog.exec() != QDialog::Accepted)
		return false;
	return saveFile(dialog.selectedFiles().first());
}

void SpriteStudio::onActionAbout()
{
	QMessageBox::about(this, tr("About Sprite Studio"),
		tr("<b>Sprite Studio</b>\n"
		"A great editor for sprite"
		"copyright@pwrd.com by lixiaojiang"
		));
}

void SpriteStudio::closeEvent(QCloseEvent *event)
{
	if (checkSave()) {
		writeSettings();
		event->accept();
	} else {
		event->ignore();
	}
}

/////////////////////////////////////////////////////////
// file
void SpriteStudio::loadFile(const QString &fileName)
{
	QFile file(fileName);
	if (!file.open(QFile::ReadOnly | QFile::Text)) {
		QMessageBox::warning(this, tr("Sprite Studio"),
			tr("Cannot read file %1:\n%2.")
			.arg(QDir::toNativeSeparators(fileName), file.errorString()));
		return;
	}

#ifndef QT_NO_CURSOR
	QApplication::setOverrideCursor(Qt::WaitCursor);
#endif

	//TODO:load file

#ifndef QT_NO_CURSOR
	QApplication::restoreOverrideCursor();
#endif

	setCurFile(fileName);
	statusBar()->showMessage(tr("File loaded"), 2000);
}

bool SpriteStudio::saveFile(const QString &fileName)
{
	QFile file(fileName);
	if (!file.open(QFile::WriteOnly | QFile::Text)) {
		QMessageBox::warning(this, tr("Application"),
			tr("Cannot write file %1:\n%2.")
			.arg(QDir::toNativeSeparators(fileName),
			file.errorString()));
		return false;
	}

#ifndef QT_NO_CURSOR
	QApplication::setOverrideCursor(Qt::WaitCursor);
#endif
	
	//TODO:save file

#ifndef QT_NO_CURSOR
	QApplication::restoreOverrideCursor();
#endif

	setCurFile(fileName);
	statusBar()->showMessage(tr("File saved"), 2000);
	return true;
}

void SpriteStudio::setCurFile(const QString &fileName)
{
	this->_curFile = fileName;
	setContentModified(false);
	setWindowModified(false);

	QString shownName = _curFile;
	if (_curFile.isEmpty())
		shownName = "untitled.txt";
	setWindowFilePath(shownName);
}

