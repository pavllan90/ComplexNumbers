/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed 8. Nov 12:53:15 2017
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_26;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_21;
    QFrame *line;
    QPushButton *pushButton_22;
    QFrame *line_2;
    QPushButton *pushButton_23;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_25;
    QPushButton *pushButton_24;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(319, 506);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        pushButton_26 = new QPushButton(tab);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));

        verticalLayout->addWidget(pushButton_26);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_19 = new QPushButton(tab);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        horizontalLayout_2->addWidget(pushButton_19);

        pushButton_20 = new QPushButton(tab);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        horizontalLayout_2->addWidget(pushButton_20);


        verticalLayout_2->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_10 = new QPushButton(tab);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 3, 0, 1, 1);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 1, 1, 1);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 1);

        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 4, 0, 1, 1);

        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout->addWidget(pushButton_14, 4, 1, 1, 1);

        pushButton_15 = new QPushButton(tab);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout->addWidget(pushButton_15, 4, 2, 1, 1);

        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout->addWidget(pushButton_16, 5, 0, 1, 1);

        pushButton_17 = new QPushButton(tab);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout->addWidget(pushButton_17, 5, 1, 1, 1);

        pushButton_18 = new QPushButton(tab);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_18, 5, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_21 = new QPushButton(tab_2);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        pushButton_21->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_21);

        line = new QFrame(tab_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        pushButton_22 = new QPushButton(tab_2);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_22);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2);

        pushButton_23 = new QPushButton(tab_2);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_23);


        verticalLayout_6->addLayout(horizontalLayout_3);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        lineEdit_2 = new QLineEdit(tab_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_5->addWidget(lineEdit_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_25 = new QPushButton(tab_2);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));

        horizontalLayout_4->addWidget(pushButton_25);

        pushButton_24 = new QPushButton(tab_2);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        horizontalLayout_4->addWidget(pushButton_24);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_6->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        pushButton_12->raise();
        pushButton_13->raise();
        pushButton_14->raise();
        pushButton_15->raise();
        pushButton_16->raise();
        pushButton_17->raise();
        pushButton_18->raise();
        label->raise();
        lineEdit->raise();
        label_2->raise();
        pushButton_19->raise();
        pushButton_20->raise();
        tabWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 319, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Enter:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        pushButton_26->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("MainWindow", "(", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("MainWindow", ")", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "i", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "j", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "k", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "=", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Calculator:", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("MainWindow", "Size", 0, QApplication::UnicodeUTF8));
        pushButton_22->setText(QApplication::translate("MainWindow", "Is Empty?", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("MainWindow", "Show", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        pushButton_25->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        pushButton_24->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Container:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
