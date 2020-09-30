#include "file_operator.h"

FileOperator::FileOperator() {}

FileOperator::~FileOperator() {}


QByteArray FileOperator::read_file(const QString &filename) {
    QScopedPointer<QFile> file(new QFile(filename));
    QByteArray file_data;
    if(file->open(QIODevice::ReadOnly)) {
        file_data.append(file->readAll());
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Read", filename);
#endif
    }
    else {
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Cannot read", filename);
#endif
    }
    return file_data;
}


int FileOperator::write_file(const QString& filename, const QByteArray &data) {
    QScopedPointer<QFile> file(new QFile(filename));
    if(file->open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream writer(file.data());
        writer << data;
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Write", filename);
#endif
        return 0;
    }
    else {
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Cannot write", filename);
#endif
        return -1;
    }
}

int FileOperator::copy_file(const QString &source_filename, const QString &dest_filename) {
    if(QFile::exists(dest_filename)) {
        QFile::remove(dest_filename);
    }

    QFile::copy(source_filename, dest_filename);
    #ifdef FILE_OPERATOR_DEBUG
    qDebug() << QString("File %1 copied to %2")
                .arg(source_filename)
                .arg(dest_filename);
#endif
    return 0;
}


int FileOperator::append_file(const QString &filename, const QByteArray &data) {
    QScopedPointer<QFile> file(new QFile(filename));
    if(file->open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream writer(file.data());
        writer << data;
        writer << '\n';
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Append", filename);
#endif
        return 0;
    }
    else {
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Cannot append", filename);
#endif
        return -1;
    }
}


int FileOperator::remove_file(const QString &filename) {
    QScopedPointer<QFile> file(new QFile(filename));
    if(file->exists()) {
        file->remove();
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Remove", filename);
#endif
        return 0;
    }
    else {
#ifdef FILE_OPERATOR_DEBUG
        qDebug() << get_debug_message("Cannot remove", filename);
#endif
        return -1;
    }
}

const QString FileOperator::get_debug_message(const QString& status, const QString &filename) {
    return QString("[FileOperator] %1 %2")
            .arg(status)
            .arg(filename);
}
