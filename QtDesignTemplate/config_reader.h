#ifndef CONFIG_READER_H
#define CONFIG_READER_H

//#define DEBUG_SETTINGS_INFO

#include <QMap>
#include <QStringList>
#include "file_operator.h"


/*
 * ConfigReader class uses to read/write config file.
 * Singleton.
 *
*/

class ConfigReader {
public:
    static ConfigReader* get_instance() {
        if(!m_instance) {
            m_instance.reset(new ConfigReader());
        }
        return m_instance.data();
    }

    int read_config(const QString& config_name);
    int fill_settings_map(QByteArray& config_data);
    QString get_setting(const QString& setting_name) const;
    void print_settings();

private:
    static QScopedPointer<ConfigReader> m_instance;

    ConfigReader();
    ConfigReader& operator=(ConfigReader&);
    ConfigReader(const ConfigReader&);

    QMap<QString, QString> m_settings;

};
#endif // CONFIG_READER_H
