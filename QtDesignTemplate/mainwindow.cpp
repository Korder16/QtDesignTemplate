#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      m_dark_theme(true)
{
    ui->setupUi(this);
    connect(ui->pb_change_theme, SIGNAL(clicked(bool)),
            this, SLOT(change_theme()));

    read_style_settings("../styles/dark_theme_settings.txt");
    change_theme();
    ui->pushButton->setDisabled(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}

// SLOTS
int MainWindow::change_theme()
{
//    QString style_file;
//    if(m_dark_theme) {
//        style_file = ConfigReader::get_instance()->get_setting("light_theme");
//        m_dark_theme = false;
//    }
//    else {
//        style_file = ConfigReader::get_instance()->get_setting("dark_theme");
//        m_dark_theme = true;
//    }

    QString theme_file = QString("../styles/style_theme.qss");
    QString style_sheet = QString(FileOperator::read_file(theme_file));
    use_style_settigs(style_sheet);
    qApp->setStyleSheet(style_sheet);
    return 0;
}

int MainWindow::read_style_settings(const QString& settings_file)
{
    // Read style settings file
    QStringList style_settings;

    QFile st(settings_file);
    if(st.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        style_settings = QString(st.readAll()).split('\n');
        st.close();
    }

    fill_settings_map(style_settings);

    return 0;
}

int MainWindow::fill_settings_map(QStringList& style_settings)
{
    // Fill style settings map
    foreach(QString line, style_settings) {
        // If not comment
        if(!line.contains("//")) {
            m_style_settings_map.insert(line.split('=').first().remove(" "),
                                      line.split('=').last().remove(" "));
        }
    }

    return 0;
}

int MainWindow::use_style_settigs(QString &style)
{
    // Fill settings from map to .qss file
    foreach (const QString& key, m_style_settings_map.keys()) {
        style.replace(key, m_style_settings_map.value(key));
    }
    return 0;
}

