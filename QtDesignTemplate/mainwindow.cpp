#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      m_dark_theme(false)
{
    ui->setupUi(this);
    connect(ui->pb_change_theme, SIGNAL(clicked(bool)),
            this, SLOT(change_theme()));
    change_theme();
}


MainWindow::~MainWindow()
{
    delete ui;
}

// SLOTS
int MainWindow::change_theme()
{
    QString style_file;
    if(m_dark_theme) {
        style_file = ConfigReader::get_instance()->get_setting("light_theme");
        m_dark_theme = false;
    }
    else {
        style_file = ConfigReader::get_instance()->get_setting("dark_theme");
        m_dark_theme = true;
    }

    QString style_sheet = QString(FileOperator::read_file(style_file));
    qApp->setStyleSheet(style_sheet);
    return 0;
}

