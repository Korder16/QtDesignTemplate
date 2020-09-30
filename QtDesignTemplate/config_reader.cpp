#include "config_reader.h"

QScopedPointer<ConfigReader> ConfigReader::m_instance;

ConfigReader::ConfigReader() {}


int ConfigReader::read_config(const QString& config_name) {
    QByteArray config_data = FileOperator::read_file(config_name);
    fill_settings_map(config_data);
    return 0;
}

int ConfigReader::fill_settings_map(QByteArray& config_data) {
    QStringList lines = QString(config_data).split("\n");

    foreach(QString line, lines) {
        // If not comment
        if(!line.startsWith('#')) {
            m_settings.insert(line.split(':').first(),
                              line.split(':').last().remove(' '));
        }
    }

    print_settings();
    return 0;
}


void ConfigReader::print_settings() {
#ifdef DEBUG_SETTINGS_INFO
    QMap<QString, QString>::iterator it = m_settings.begin();
    qDebug() << "SETTINGS :";
    for(it; it != m_settings.end(); ++it) {
        qDebug() << it.key() << ": " << it.value();
    }
#endif
}


// Get setting by key
QString ConfigReader::get_setting(const QString& setting_name) const {
    return m_settings.value(setting_name);
}
