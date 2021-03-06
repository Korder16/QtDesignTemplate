#ifndef STYLELOADER_H
#define STYLELOADER_H

#include <QObject>
#include <QKeySequence>
class StyleLoader: public QObject
{
    Q_OBJECT
public:
    static void attach(const QString& filename = defaultStyleFile(),
                       QKeySequence key = QKeySequence("F5"));

    bool eventFilter(QObject *obj, QEvent *event);

    int change_style_filename(const QString& t_filename);

private:
    StyleLoader(QObject * parent, const QString& filename, const QKeySequence& key);
    void setAppStyleSheet();
    static QString defaultStyleFile();
    QString m_filename;
    QKeySequence m_key;

};

#endif // STYLELOADER_H
