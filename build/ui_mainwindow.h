/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDial>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTimeEdit>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTimeEdit *te;
    QSlider *hslider;
    QPushButton *pushButton_7;
    QDial *dial;
    QLineEdit *le;
    QLabel *label;
    QComboBox *cbb;
    QScrollBar *hsbar;
    QToolButton *toolButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QProgressBar *prog_bar;
    QRadioButton *radioButton;
    QDateTimeEdit *dateTimeEdit;
    QDoubleSpinBox *dsb;
    QDateEdit *de;
    QCheckBox *checkBox_2;
    QLCDNumber *lcd;
    QSpinBox *sb;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *text_ed;
    QPlainTextEdit *plainTextEdit;
    QCalendarWidget *calendarWidget_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;
    QPushButton *pb_change_theme;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QDialogButtonBox *buttonBox_2;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *buttonBox;
    QWidget *tab_2;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1103, 775);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 1071, 731));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 251, 631));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        te = new QTimeEdit(layoutWidget);
        te->setObjectName(QString::fromUtf8("te"));

        gridLayout->addWidget(te, 13, 0, 1, 1);

        hslider = new QSlider(layoutWidget);
        hslider->setObjectName(QString::fromUtf8("hslider"));
        hslider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hslider, 20, 0, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        dial = new QDial(layoutWidget);
        dial->setObjectName(QString::fromUtf8("dial"));

        gridLayout->addWidget(dial, 22, 0, 1, 1);

        le = new QLineEdit(layoutWidget);
        le->setObjectName(QString::fromUtf8("le"));

        gridLayout->addWidget(le, 9, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 16, 0, 1, 1);

        cbb = new QComboBox(layoutWidget);
        cbb->setObjectName(QString::fromUtf8("cbb"));

        gridLayout->addWidget(cbb, 8, 0, 1, 1);

        hsbar = new QScrollBar(layoutWidget);
        hsbar->setObjectName(QString::fromUtf8("hsbar"));
        hsbar->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hsbar, 21, 0, 1, 1);

        toolButton_2 = new QToolButton(layoutWidget);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_2->sizePolicy().hasHeightForWidth());
        toolButton_2->setSizePolicy(sizePolicy);
        toolButton_2->setPopupMode(QToolButton::MenuButtonPopup);

        gridLayout->addWidget(toolButton_2, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        prog_bar = new QProgressBar(layoutWidget);
        prog_bar->setObjectName(QString::fromUtf8("prog_bar"));
        prog_bar->setValue(78);

        gridLayout->addWidget(prog_bar, 17, 0, 1, 1);

        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout->addWidget(radioButton, 6, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 15, 0, 1, 1);

        dsb = new QDoubleSpinBox(layoutWidget);
        dsb->setObjectName(QString::fromUtf8("dsb"));

        gridLayout->addWidget(dsb, 11, 0, 1, 1);

        de = new QDateEdit(layoutWidget);
        de->setObjectName(QString::fromUtf8("de"));

        gridLayout->addWidget(de, 14, 0, 1, 1);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setTristate(true);

        gridLayout->addWidget(checkBox_2, 7, 0, 1, 1);

        lcd = new QLCDNumber(layoutWidget);
        lcd->setObjectName(QString::fromUtf8("lcd"));
        lcd->setSegmentStyle(QLCDNumber::Filled);
        lcd->setProperty("intValue", QVariant(13));

        gridLayout->addWidget(lcd, 18, 0, 1, 1);

        sb = new QSpinBox(layoutWidget);
        sb->setObjectName(QString::fromUtf8("sb"));

        gridLayout->addWidget(sb, 10, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 19, 0, 1, 1);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(750, 40, 306, 621));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        text_ed = new QTextEdit(layoutWidget_2);
        text_ed->setObjectName(QString::fromUtf8("text_ed"));

        verticalLayout_5->addWidget(text_ed);

        plainTextEdit = new QPlainTextEdit(layoutWidget_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout_5->addWidget(plainTextEdit);

        calendarWidget_2 = new QCalendarWidget(layoutWidget_2);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));
        calendarWidget_2->setGridVisible(true);
        calendarWidget_2->setNavigationBarVisible(true);

        verticalLayout_5->addWidget(calendarWidget_2);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(280, 50, 258, 611));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(layoutWidget_4);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        treeWidget = new QTreeWidget(layoutWidget_4);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem2);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_2->addWidget(treeWidget);

        tableWidget = new QTableWidget(layoutWidget_4);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem22);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);

        pb_change_theme = new QPushButton(groupBox);
        pb_change_theme->setObjectName(QString::fromUtf8("pb_change_theme"));
        pb_change_theme->setGeometry(QRect(990, 0, 80, 25));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(539, 40, 201, 621));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(layoutWidget1);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setMinimumSize(QSize(0, 50));
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 199, 142));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        scrollArea_2 = new QScrollArea(page);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 179, 91));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_7->addWidget(scrollArea_2);

        buttonBox_2 = new QDialogButtonBox(page);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox_2);

        toolBox->addItem(page, QString::fromUtf8("\320\241\320\265\320\272\321\206\320\270\321\217 \342\204\2261"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 199, 142));
        toolBox->addItem(page_2, QString::fromUtf8("\320\241\320\265\320\272\321\206\320\270\321\217 \342\204\2262"));

        verticalLayout->addWidget(toolBox);

        tabWidget = new QTabWidget(layoutWidget1);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 175, 121));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_6->addWidget(buttonBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        mdiArea = new QMdiArea(layoutWidget1);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy1);
        mdiArea->setMaximumSize(QSize(16777215, 200));

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1103, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        groupBox->setAccessibleName(QApplication::translate("MainWindow", "gb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        te->setAccessibleName(QApplication::translate("MainWindow", "te", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        hslider->setAccessibleName(QApplication::translate("MainWindow", "hslider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pushButton_7->setAccessibleName(QApplication::translate("MainWindow", "close_btn", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_7->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        le->setAccessibleName(QApplication::translate("MainWindow", "le", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label->setAccessibleName(QApplication::translate("MainWindow", "label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\264\320\277\320\270\321\201\321\214", 0, QApplication::UnicodeUTF8));
        cbb->clear();
        cbb->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "10", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_ACCESSIBILITY
        cbb->setAccessibleName(QApplication::translate("MainWindow", "cbb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        hsbar->setAccessibleName(QApplication::translate("MainWindow", "hsbar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        toolButton_2->setAccessibleName(QApplication::translate("MainWindow", "tool_btn", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        toolButton_2->setText(QApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260 \321\201 \320\274\320\265\320\275\321\216", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_3->setAccessibleName(QApplication::translate("MainWindow", "btn", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\213\321\207\320\275\320\260\321\217 \320\272\320\275\320\276\320\277\320\272\320\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        pushButton_2->setAccessibleName(QApplication::translate("MainWindow", "save_btn", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        prog_bar->setAccessibleName(QApplication::translate("MainWindow", "prog_bar", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        radioButton->setAccessibleName(QApplication::translate("MainWindow", "rb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        dateTimeEdit->setAccessibleName(QApplication::translate("MainWindow", "dte", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        dsb->setAccessibleName(QApplication::translate("MainWindow", "dsb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        de->setAccessibleName(QApplication::translate("MainWindow", "de", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        checkBox_2->setAccessibleName(QApplication::translate("MainWindow", "cb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        checkBox_2->setText(QApplication::translate("MainWindow", "CheckBox", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        lcd->setAccessibleName(QApplication::translate("MainWindow", "lcd", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        sb->setAccessibleName(QApplication::translate("MainWindow", "sb", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        label_2->setAccessibleName(QApplication::translate("MainWindow", "label", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        text_ed->setAccessibleName(QApplication::translate("MainWindow", "text_ed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        text_ed->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-weight:600;\">Text </span><span style=\" font-family:'Sans Serif'; font-style:italic; text-decoration: underline;\">Edit</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-style:italic; text-decoration: underline;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Sans Serif'; font-style:italic; text-decoration: underline; color:#006330;\">HTML DOC</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        plainTextEdit->setAccessibleName(QApplication::translate("MainWindow", "plain_text_ed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        plainTextEdit->setPlainText(QApplication::translate("MainWindow", "Plain Text Edit\n"
"", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\320\277\320\270\321\201\320\272\320\260 \342\204\226 1", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\320\277\320\270\321\201\320\272\320\260 \342\204\226 2", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\320\277\320\270\321\201\320\272\320\260 \342\204\226 3", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\320\277\320\270\321\201\320\272\320\260 \342\204\226 4", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \321\201\320\277\320\270\321\201\320\272\320\260 \342\204\226 5", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

#ifndef QT_NO_ACCESSIBILITY
        listWidget->setAccessibleName(QApplication::translate("MainWindow", "lv", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206 \342\204\2262", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206 \342\204\2261", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2261", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "\320\224\320\276\321\207\320\265\321\200\320\275\320\270\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "\320\224\320\276\321\207\320\265\321\200\320\275\320\270\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2262", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2262", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "\320\224\320\276\321\207\320\265\321\200\320\275\320\270\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "\320\224\320\276\321\207\320\265\321\200\320\275\320\270\320\271 \321\215\320\273\320\265\320\274\320\265\320\275\321\202 \342\204\2261", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled1);

#ifndef QT_NO_ACCESSIBILITY
        treeWidget->setAccessibleName(QApplication::translate("MainWindow", "tree_v", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206 \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206 \342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\276\320\273\320\261\320\265\321\206 \342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \342\204\2264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \342\204\2265", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled2 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2261", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2262", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2263", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2265", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2268", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\2269", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(3, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22610", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(3, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22611", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(3, 2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22612", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(4, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22613", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(4, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22614", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(4, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\320\255\320\273. \342\204\22615", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled2);

#ifndef QT_NO_ACCESSIBILITY
        tableWidget->setAccessibleName(QApplication::translate("MainWindow", "table_v", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        pb_change_theme->setAccessibleName(QApplication::translate("MainWindow", "ct_btn", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pb_change_theme->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        toolBox->setAccessibleName(QApplication::translate("MainWindow", "tool_box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\320\241\320\265\320\272\321\206\320\270\321\217 \342\204\2261", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("MainWindow", "\320\241\320\265\320\272\321\206\320\270\321\217 \342\204\2262", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        tabWidget->setAccessibleName(QApplication::translate("MainWindow", "tab_w", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\260 \342\204\2261", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\222\320\272\320\273\320\260\320\264\320\272\320\260 \342\204\2262", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
