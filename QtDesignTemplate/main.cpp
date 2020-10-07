#include "mainwindow.h"
#include "style_loader.h"

#include <QApplication>
#include <QDir>
#include <QDebug>
#include "config_reader.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    StyleLoader::attach("/home/islam/DESIGN/DesignTemplate/QtDesignTemplate/styles.qss", QKeySequence("F6"));

    QString settings_file = QString("../style_config.conf");
    ConfigReader::get_instance()->read_config(settings_file);

    MainWindow w;
    w.show();
    return a.exec();
}
