#include "style_loader.h"
#include <QApplication>
#include <QFile>
#include <QKeyEvent>
#include <QDebug>

void StyleLoader::attach(const QString &filename, QKeySequence key)
{
    StyleLoader * loader = new StyleLoader(qApp, filename, key);
    qApp->installEventFilter(loader);
    loader->setAppStyleSheet();
}

bool StyleLoader::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
        {
            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            if(m_key == QKeySequence(keyEvent->key()))
            {
                setAppStyleSheet();
                qDebug() << "Key pressed";
                return true;
            }
        }

    return QObject::eventFilter(obj, event);
}

int StyleLoader::change_style_filename(const QString &t_filename)
{
    m_filename = t_filename;
    return 0;
}

void StyleLoader::setAppStyleSheet()
{
    qDebug() << QString("Style file: %1").arg(m_filename);
    QFile file(m_filename);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Cannot open stylesheet file " << m_filename;
        return;
    }
    QString stylesheet = QString(file.readAll());
    qApp->setStyleSheet(stylesheet);
    file.close();
}

QString StyleLoader::defaultStyleFile()
{
    return QApplication::applicationDirPath() + "/style.qss";
}

StyleLoader::StyleLoader(QObject *parent, const QString& filename, const QKeySequence &key):
    QObject(parent),
    m_filename(filename),
    m_key(key)
{

}
