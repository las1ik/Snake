#include "menu.h"

#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator qtLanguageTranslator;
       qtLanguageTranslator.load(QString("QtLanguage_") + QString("en_EN"));
       qApp->installTranslator(&qtLanguageTranslator);

    menu w;
    w.show();
    return a.exec();
}
