#ifndef FILE_OPERATOR_H
#define FILE_OPERATOR_H

//#define FILE_OPERATOR_DEBUG

#include <QFile>
#include <QDebug>

/*
 * FileOpeator class uses to work with files
 * (read/write/append/remove).
 *
*/

class FileOperator {
public:
    explicit FileOperator();
    ~FileOperator();

    static QByteArray read_file(const QString& filename);

    static int write_file(const QString& filename, const QByteArray& data);

    static int copy_file(const QString& source_filename, const QString& dest_filename);

    static int append_file(const QString& filename, const QByteArray& data);

    static int remove_file(const QString& filename);

private:
    static const QString get_debug_message(const QString& status, const QString& filename);
};

#endif // FILE_OPERATOR_H
