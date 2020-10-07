#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "config_reader.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    int change_theme();

private:
    // Methods
    int read_style_settings(const QString& settings_file);

    int fill_settings_map(QStringList& style_settings);

    int use_style_settigs(QString& style);

    Ui::MainWindow *ui;

    bool m_dark_theme;
    QMap<QString, QString> m_style_settings_map;
};
#endif // MAINWINDOW_H
