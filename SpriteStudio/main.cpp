#include "stdafx.h"
#include "SpriteStudio.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	Q_INIT_RESOURCE(SpriteStudio);

	QApplication app(argc, argv);
	QCoreApplication::setOrganizationName("PWRD");
	QCoreApplication::setApplicationName("Sprite Studio");
	QCoreApplication::setApplicationVersion(QT_VERSION_STR);
	QCommandLineParser parser;
	parser.setApplicationDescription(QCoreApplication::applicationName());
	parser.addHelpOption();
	parser.addVersionOption();
	parser.addPositionalArgument("file", "The file to open.");
	parser.process(app);

	SpriteStudio mainWin;
	if (!parser.positionalArguments().isEmpty())
		mainWin.loadFile(parser.positionalArguments().first());
	mainWin.show();
	return app.exec();
}
