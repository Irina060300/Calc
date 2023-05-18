/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *Creditcalculator;
    QWidget *Simplecalculator;
    QGridLayout *gridLayout;
    QLineEdit *result_show;
    QPushButton *pushButton_left_bracket;
    QPushButton *pushButton_right_bracket;
    QPushButton *pushButton_pm;
    QPushButton *pushButton_clean;
    QPushButton *pushButton_clear;
    QLineEdit *lineEdit_print_x;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_div;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_log;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_0;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_x;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_mod;
    QLineEdit *lineEdit_step_2;
    QLineEdit *lineEdit_start;
    QLineEdit *lineEdit_end;
    QLineEdit *lineEdit_step;
    QLineEdit *lineEdit_end_2;
    QLineEdit *lineEdit_start_2;
    QPushButton *pushButton_create_graph;
    QLabel *label_6;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_int_rate;
    QLineEdit *lineEdit_term;
    QComboBox *comboBox_term;
    QLabel *label;
    QLineEdit *lineEdit_input;
    QLineEdit *lineEdit_loan;
    QComboBox *comboBox_type;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_calc_cr;
    QLabel *label_rate_m;
    QLabel *label_term_m;
    QLabel *label_loan_m;
    QLabel *label_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(440, 473);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton#evilButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Creditcalculator = new QTabWidget(centralwidget);
        Creditcalculator->setObjectName(QString::fromUtf8("Creditcalculator"));
        Simplecalculator = new QWidget();
        Simplecalculator->setObjectName(QString::fromUtf8("Simplecalculator"));
        gridLayout = new QGridLayout(Simplecalculator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        result_show = new QLineEdit(Simplecalculator);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(result_show->sizePolicy().hasHeightForWidth());
        result_show->setSizePolicy(sizePolicy);
        result_show->setMinimumSize(QSize(350, 35));
        result_show->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 248, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(212, 212, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(148, 148, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 42, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(57, 57, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(169, 169, 169, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        QBrush brush8(QColor(170, 170, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush10(QColor(0, 0, 0, 127));
        brush10.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
        QBrush brush11(QColor(85, 85, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush12(QColor(42, 42, 127, 127));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        result_show->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Serif Sinhala Thin"));
        font.setPointSize(17);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        result_show->setReadOnly(true);

        gridLayout->addWidget(result_show, 0, 0, 1, 8);

        pushButton_left_bracket = new QPushButton(Simplecalculator);
        pushButton_left_bracket->setObjectName(QString::fromUtf8("pushButton_left_bracket"));
        sizePolicy.setHeightForWidth(pushButton_left_bracket->sizePolicy().hasHeightForWidth());
        pushButton_left_bracket->setSizePolicy(sizePolicy);
        pushButton_left_bracket->setMinimumSize(QSize(60, 50));
        pushButton_left_bracket->setSizeIncrement(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(176, 224, 230, 255));
        gradient.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush13(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush14(QColor(223, 249, 255, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        QBrush brush15(QColor(96, 121, 127, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush15);
        QBrush brush16(QColor(128, 162, 170, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(176, 224, 230, 255));
        gradient1.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush17(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush17);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(176, 224, 230, 255));
        gradient2.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush18(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(176, 224, 230, 255));
        gradient3.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush19(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush19);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(176, 224, 230, 255));
        gradient4.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush20(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(176, 224, 230, 255));
        gradient5.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush21(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush21);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(176, 224, 230, 255));
        gradient6.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush22(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(176, 224, 230, 255));
        gradient7.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush23(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(176, 224, 230, 255));
        gradient8.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush24(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush24);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush25(QColor(192, 243, 255, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush26(QColor(96, 121, 127, 127));
        brush26.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        pushButton_left_bracket->setPalette(palette1);
        QFont font1;
        font1.setPointSize(14);
        pushButton_left_bracket->setFont(font1);
        pushButton_left_bracket->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 	#B0E0E6, stop: 1 	#E0FFFF);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF0F5, stop: 1 #FAF0E6);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_left_bracket, 1, 0, 2, 2);

        pushButton_right_bracket = new QPushButton(Simplecalculator);
        pushButton_right_bracket->setObjectName(QString::fromUtf8("pushButton_right_bracket"));
        sizePolicy.setHeightForWidth(pushButton_right_bracket->sizePolicy().hasHeightForWidth());
        pushButton_right_bracket->setSizePolicy(sizePolicy);
        pushButton_right_bracket->setMinimumSize(QSize(60, 50));
        pushButton_right_bracket->setSizeIncrement(QSize(0, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(176, 224, 230, 255));
        gradient9.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush27(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush27);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(176, 224, 230, 255));
        gradient10.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush28(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush28);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(176, 224, 230, 255));
        gradient11.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush29(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush29);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(176, 224, 230, 255));
        gradient12.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush30(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(176, 224, 230, 255));
        gradient13.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush31(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush31);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(176, 224, 230, 255));
        gradient14.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush32(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush32);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(176, 224, 230, 255));
        gradient15.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush33(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush33);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(176, 224, 230, 255));
        gradient16.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush34(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush34);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(176, 224, 230, 255));
        gradient17.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush35(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush35);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        pushButton_right_bracket->setPalette(palette2);
        pushButton_right_bracket->setFont(font1);
        pushButton_right_bracket->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 	#B0E0E6, stop: 1 	#E0FFFF);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF0F5, stop: 1 #FAF0E6);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_right_bracket, 1, 2, 2, 2);

        pushButton_pm = new QPushButton(Simplecalculator);
        pushButton_pm->setObjectName(QString::fromUtf8("pushButton_pm"));
        sizePolicy.setHeightForWidth(pushButton_pm->sizePolicy().hasHeightForWidth());
        pushButton_pm->setSizePolicy(sizePolicy);
        pushButton_pm->setMinimumSize(QSize(50, 50));
        pushButton_pm->setMaximumSize(QSize(16777215, 16777215));
        pushButton_pm->setFont(font1);
        pushButton_pm->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f0d2e8, stop: 1 #E6E6FA);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF5EE, stop: 1	#FFFAF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_pm, 1, 4, 2, 1);

        pushButton_clean = new QPushButton(Simplecalculator);
        pushButton_clean->setObjectName(QString::fromUtf8("pushButton_clean"));
        sizePolicy.setHeightForWidth(pushButton_clean->sizePolicy().hasHeightForWidth());
        pushButton_clean->setSizePolicy(sizePolicy);
        pushButton_clean->setMinimumSize(QSize(50, 50));
        pushButton_clean->setSizeIncrement(QSize(0, 0));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(152, 251, 152, 255));
        gradient18.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush36(gradient18);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush36);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush37(QColor(255, 215, 220, 255));
        brush37.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush37);
        QBrush brush38(QColor(127, 87, 93, 255));
        brush38.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush38);
        QBrush brush39(QColor(170, 117, 124, 255));
        brush39.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush39);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(152, 251, 152, 255));
        gradient19.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush40(gradient19);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush40);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(152, 251, 152, 255));
        gradient20.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush41(gradient20);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush41);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush37);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(152, 251, 152, 255));
        gradient21.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush42(gradient21);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush42);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush37);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush38);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush39);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(152, 251, 152, 255));
        gradient22.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush43(gradient22);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush43);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(152, 251, 152, 255));
        gradient23.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush44(gradient23);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush44);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush37);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush38);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(152, 251, 152, 255));
        gradient24.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush45(gradient24);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush45);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush37);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush39);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush38);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush38);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(152, 251, 152, 255));
        gradient25.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush46(gradient25);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush46);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(152, 251, 152, 255));
        gradient26.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush47(gradient26);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush47);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush48(QColor(255, 175, 186, 255));
        brush48.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush48);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush49(QColor(127, 87, 93, 127));
        brush49.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush49);
#endif
        pushButton_clean->setPalette(palette3);
        pushButton_clean->setFont(font1);
        pushButton_clean->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #98FB98, stop: 1 	#F0FFF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_clean, 1, 5, 2, 1);

        pushButton_clear = new QPushButton(Simplecalculator);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setMinimumSize(QSize(50, 50));
        pushButton_clear->setSizeIncrement(QSize(0, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient27(0, 0, 0, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(152, 251, 152, 255));
        gradient27.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush50(gradient27);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush50);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush51(QColor(255, 212, 219, 255));
        brush51.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush51);
        QBrush brush52(QColor(127, 85, 92, 255));
        brush52.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush52);
        QBrush brush53(QColor(170, 113, 122, 255));
        brush53.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush53);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient28(0, 0, 0, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(152, 251, 152, 255));
        gradient28.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush54(gradient28);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush54);
        QLinearGradient gradient29(0, 0, 0, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(152, 251, 152, 255));
        gradient29.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush55(gradient29);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush55);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush51);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient30(0, 0, 0, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(152, 251, 152, 255));
        gradient30.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush56(gradient30);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush56);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush51);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush52);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush53);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient31(0, 0, 0, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(152, 251, 152, 255));
        gradient31.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush57(gradient31);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush57);
        QLinearGradient gradient32(0, 0, 0, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(152, 251, 152, 255));
        gradient32.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush58(gradient32);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush58);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush51);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush52);
        QLinearGradient gradient33(0, 0, 0, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(152, 251, 152, 255));
        gradient33.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush59(gradient33);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush59);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush51);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush52);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush53);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush52);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush52);
        QLinearGradient gradient34(0, 0, 0, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(152, 251, 152, 255));
        gradient34.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush60(gradient34);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush60);
        QLinearGradient gradient35(0, 0, 0, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(152, 251, 152, 255));
        gradient35.setColorAt(1, QColor(240, 255, 240, 255));
        QBrush brush61(gradient35);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush61);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush62(QColor(255, 170, 183, 255));
        brush62.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush62);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush63(QColor(127, 85, 92, 127));
        brush63.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush63);
#endif
        pushButton_clear->setPalette(palette4);
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #98FB98, stop: 1 	#F0FFF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_clear, 1, 6, 2, 1);

        lineEdit_print_x = new QLineEdit(Simplecalculator);
        lineEdit_print_x->setObjectName(QString::fromUtf8("lineEdit_print_x"));
        sizePolicy.setHeightForWidth(lineEdit_print_x->sizePolicy().hasHeightForWidth());
        lineEdit_print_x->setSizePolicy(sizePolicy);
        lineEdit_print_x->setMinimumSize(QSize(50, 20));
        lineEdit_print_x->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(10);
        lineEdit_print_x->setFont(font2);
        lineEdit_print_x->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_print_x->setAlignment(Qt::AlignCenter);
        lineEdit_print_x->setReadOnly(false);

        gridLayout->addWidget(lineEdit_print_x, 2, 7, 1, 1);

        pushButton_1 = new QPushButton(Simplecalculator);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(50, 50));
        pushButton_1->setSizeIncrement(QSize(0, 0));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient36(0, 0, 0, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(255, 228, 225, 255));
        gradient36.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush64(gradient36);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush64);
        QBrush brush65(QColor(234, 220, 242, 255));
        brush65.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        QBrush brush66(QColor(106, 93, 114, 255));
        brush66.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush66);
        QBrush brush67(QColor(142, 124, 153, 255));
        brush67.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient37(0, 0, 0, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(255, 228, 225, 255));
        gradient37.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush68(gradient37);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush68);
        QLinearGradient gradient38(0, 0, 0, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(255, 228, 225, 255));
        gradient38.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush69(gradient38);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush69);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient39(0, 0, 0, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(255, 228, 225, 255));
        gradient39.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush70(gradient39);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush70);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient40(0, 0, 0, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(255, 228, 225, 255));
        gradient40.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush71(gradient40);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush71);
        QLinearGradient gradient41(0, 0, 0, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(255, 228, 225, 255));
        gradient41.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush72(gradient41);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush72);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient42(0, 0, 0, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(255, 228, 225, 255));
        gradient42.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush73(gradient42);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush73);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient43(0, 0, 0, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(255, 228, 225, 255));
        gradient43.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush74(gradient43);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush74);
        QLinearGradient gradient44(0, 0, 0, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(255, 228, 225, 255));
        gradient44.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush75(gradient44);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush75);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush76(QColor(213, 186, 229, 255));
        brush76.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush77(QColor(106, 93, 114, 127));
        brush77.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_1->setPalette(palette5);
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(Simplecalculator);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(50, 50));
        pushButton_2->setSizeIncrement(QSize(0, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient45(0, 0, 0, 1);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(255, 228, 225, 255));
        gradient45.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush78(gradient45);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush78);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient46(0, 0, 0, 1);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(0, QColor(255, 228, 225, 255));
        gradient46.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush79(gradient46);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush79);
        QLinearGradient gradient47(0, 0, 0, 1);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(0, QColor(255, 228, 225, 255));
        gradient47.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush80(gradient47);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush80);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient48(0, 0, 0, 1);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(255, 228, 225, 255));
        gradient48.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush81(gradient48);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush81);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient49(0, 0, 0, 1);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(0, QColor(255, 228, 225, 255));
        gradient49.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush82(gradient49);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush82);
        QLinearGradient gradient50(0, 0, 0, 1);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(255, 228, 225, 255));
        gradient50.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush83(gradient50);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush83);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient51(0, 0, 0, 1);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(255, 228, 225, 255));
        gradient51.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush84(gradient51);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush84);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient52(0, 0, 0, 1);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(0, QColor(255, 228, 225, 255));
        gradient52.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush85(gradient52);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush85);
        QLinearGradient gradient53(0, 0, 0, 1);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(0, QColor(255, 228, 225, 255));
        gradient53.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush86(gradient53);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_2->setPalette(palette6);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 2);

        pushButton_3 = new QPushButton(Simplecalculator);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(50, 50));
        pushButton_3->setSizeIncrement(QSize(0, 0));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient54(0, 0, 0, 1);
        gradient54.setSpread(QGradient::PadSpread);
        gradient54.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient54.setColorAt(0, QColor(255, 228, 225, 255));
        gradient54.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush87(gradient54);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush87);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient55(0, 0, 0, 1);
        gradient55.setSpread(QGradient::PadSpread);
        gradient55.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient55.setColorAt(0, QColor(255, 228, 225, 255));
        gradient55.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush88(gradient55);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush88);
        QLinearGradient gradient56(0, 0, 0, 1);
        gradient56.setSpread(QGradient::PadSpread);
        gradient56.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient56.setColorAt(0, QColor(255, 228, 225, 255));
        gradient56.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush89(gradient56);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush89);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient57(0, 0, 0, 1);
        gradient57.setSpread(QGradient::PadSpread);
        gradient57.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient57.setColorAt(0, QColor(255, 228, 225, 255));
        gradient57.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush90(gradient57);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush90);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient58(0, 0, 0, 1);
        gradient58.setSpread(QGradient::PadSpread);
        gradient58.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient58.setColorAt(0, QColor(255, 228, 225, 255));
        gradient58.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush91(gradient58);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush91);
        QLinearGradient gradient59(0, 0, 0, 1);
        gradient59.setSpread(QGradient::PadSpread);
        gradient59.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient59.setColorAt(0, QColor(255, 228, 225, 255));
        gradient59.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush92(gradient59);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush92);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient60(0, 0, 0, 1);
        gradient60.setSpread(QGradient::PadSpread);
        gradient60.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient60.setColorAt(0, QColor(255, 228, 225, 255));
        gradient60.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush93(gradient60);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush93);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient61(0, 0, 0, 1);
        gradient61.setSpread(QGradient::PadSpread);
        gradient61.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient61.setColorAt(0, QColor(255, 228, 225, 255));
        gradient61.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush94(gradient61);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush94);
        QLinearGradient gradient62(0, 0, 0, 1);
        gradient62.setSpread(QGradient::PadSpread);
        gradient62.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient62.setColorAt(0, QColor(255, 228, 225, 255));
        gradient62.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush95(gradient62);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush95);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_3->setPalette(palette7);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_3, 3, 3, 1, 1);

        pushButton_div = new QPushButton(Simplecalculator);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        sizePolicy.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy);
        pushButton_div->setMinimumSize(QSize(50, 50));
        pushButton_div->setMaximumSize(QSize(16777215, 16777215));
        pushButton_div->setSizeIncrement(QSize(0, 0));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient63(0, 0, 0, 1);
        gradient63.setSpread(QGradient::PadSpread);
        gradient63.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient63.setColorAt(0, QColor(240, 210, 232, 255));
        gradient63.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush96(gradient63);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush96);
        QBrush brush97(QColor(226, 242, 238, 255));
        brush97.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush97);
        QBrush brush98(QColor(99, 114, 110, 255));
        brush98.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush98);
        QBrush brush99(QColor(132, 153, 147, 255));
        brush99.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush99);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient64(0, 0, 0, 1);
        gradient64.setSpread(QGradient::PadSpread);
        gradient64.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient64.setColorAt(0, QColor(240, 210, 232, 255));
        gradient64.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush100(gradient64);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush100);
        QLinearGradient gradient65(0, 0, 0, 1);
        gradient65.setSpread(QGradient::PadSpread);
        gradient65.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient65.setColorAt(0, QColor(240, 210, 232, 255));
        gradient65.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush101(gradient65);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush101);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush97);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient66(0, 0, 0, 1);
        gradient66.setSpread(QGradient::PadSpread);
        gradient66.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient66.setColorAt(0, QColor(240, 210, 232, 255));
        gradient66.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush102(gradient66);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush102);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush97);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush98);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush99);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient67(0, 0, 0, 1);
        gradient67.setSpread(QGradient::PadSpread);
        gradient67.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient67.setColorAt(0, QColor(240, 210, 232, 255));
        gradient67.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush103(gradient67);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush103);
        QLinearGradient gradient68(0, 0, 0, 1);
        gradient68.setSpread(QGradient::PadSpread);
        gradient68.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient68.setColorAt(0, QColor(240, 210, 232, 255));
        gradient68.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush104(gradient68);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush104);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush97);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush98);
        QLinearGradient gradient69(0, 0, 0, 1);
        gradient69.setSpread(QGradient::PadSpread);
        gradient69.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient69.setColorAt(0, QColor(240, 210, 232, 255));
        gradient69.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush105(gradient69);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush105);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush97);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush98);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush99);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush98);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush98);
        QLinearGradient gradient70(0, 0, 0, 1);
        gradient70.setSpread(QGradient::PadSpread);
        gradient70.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient70.setColorAt(0, QColor(240, 210, 232, 255));
        gradient70.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush106(gradient70);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush106);
        QLinearGradient gradient71(0, 0, 0, 1);
        gradient71.setSpread(QGradient::PadSpread);
        gradient71.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient71.setColorAt(0, QColor(240, 210, 232, 255));
        gradient71.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush107(gradient71);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush107);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush108(QColor(198, 229, 221, 255));
        brush108.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush108);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush109(QColor(99, 114, 110, 127));
        brush109.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush109);
#endif
        pushButton_div->setPalette(palette8);
        pushButton_div->setFont(font1);
        pushButton_div->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f0d2e8, stop: 1 #E6E6FA);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF5EE, stop: 1	#FFFAF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_div, 3, 4, 1, 1);

        pushButton_sin = new QPushButton(Simplecalculator);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);
        pushButton_sin->setMinimumSize(QSize(50, 50));
        pushButton_sin->setMaximumSize(QSize(16777215, 16777215));
        pushButton_sin->setSizeIncrement(QSize(0, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient72(0, 0, 0, 1);
        gradient72.setSpread(QGradient::PadSpread);
        gradient72.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient72.setColorAt(0, QColor(255, 222, 173, 255));
        gradient72.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush110(gradient72);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush110);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush6);
        QBrush brush111(QColor(217, 224, 255, 255));
        brush111.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        QBrush brush112(QColor(89, 96, 127, 255));
        brush112.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush112);
        QBrush brush113(QColor(119, 129, 170, 255));
        brush113.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient73(0, 0, 0, 1);
        gradient73.setSpread(QGradient::PadSpread);
        gradient73.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient73.setColorAt(0, QColor(255, 222, 173, 255));
        gradient73.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush114(gradient73);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush114);
        QLinearGradient gradient74(0, 0, 0, 1);
        gradient74.setSpread(QGradient::PadSpread);
        gradient74.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient74.setColorAt(0, QColor(255, 222, 173, 255));
        gradient74.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush115(gradient74);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush115);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient75(0, 0, 0, 1);
        gradient75.setSpread(QGradient::PadSpread);
        gradient75.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient75.setColorAt(0, QColor(255, 222, 173, 255));
        gradient75.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush116(gradient75);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush116);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient76(0, 0, 0, 1);
        gradient76.setSpread(QGradient::PadSpread);
        gradient76.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient76.setColorAt(0, QColor(255, 222, 173, 255));
        gradient76.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush117(gradient76);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush117);
        QLinearGradient gradient77(0, 0, 0, 1);
        gradient77.setSpread(QGradient::PadSpread);
        gradient77.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient77.setColorAt(0, QColor(255, 222, 173, 255));
        gradient77.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush118(gradient77);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush118);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient78(0, 0, 0, 1);
        gradient78.setSpread(QGradient::PadSpread);
        gradient78.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient78.setColorAt(0, QColor(255, 222, 173, 255));
        gradient78.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush119(gradient78);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush119);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient79(0, 0, 0, 1);
        gradient79.setSpread(QGradient::PadSpread);
        gradient79.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient79.setColorAt(0, QColor(255, 222, 173, 255));
        gradient79.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush120(gradient79);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush120);
        QLinearGradient gradient80(0, 0, 0, 1);
        gradient80.setSpread(QGradient::PadSpread);
        gradient80.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient80.setColorAt(0, QColor(255, 222, 173, 255));
        gradient80.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush121(gradient80);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush121);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush122(QColor(179, 193, 255, 255));
        brush122.setStyle(Qt::SolidPattern);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush123(QColor(89, 96, 127, 127));
        brush123.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_sin->setPalette(palette9);
        pushButton_sin->setFont(font1);
        pushButton_sin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_sin, 3, 5, 1, 1);

        pushButton_cos = new QPushButton(Simplecalculator);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy);
        pushButton_cos->setMinimumSize(QSize(50, 50));
        pushButton_cos->setSizeIncrement(QSize(0, 0));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient81(0, 0, 0, 1);
        gradient81.setSpread(QGradient::PadSpread);
        gradient81.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient81.setColorAt(0, QColor(255, 222, 173, 255));
        gradient81.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush124(gradient81);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush124);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient82(0, 0, 0, 1);
        gradient82.setSpread(QGradient::PadSpread);
        gradient82.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient82.setColorAt(0, QColor(255, 222, 173, 255));
        gradient82.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush125(gradient82);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush125);
        QLinearGradient gradient83(0, 0, 0, 1);
        gradient83.setSpread(QGradient::PadSpread);
        gradient83.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient83.setColorAt(0, QColor(255, 222, 173, 255));
        gradient83.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush126(gradient83);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush126);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient84(0, 0, 0, 1);
        gradient84.setSpread(QGradient::PadSpread);
        gradient84.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient84.setColorAt(0, QColor(255, 222, 173, 255));
        gradient84.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush127(gradient84);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush127);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient85(0, 0, 0, 1);
        gradient85.setSpread(QGradient::PadSpread);
        gradient85.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient85.setColorAt(0, QColor(255, 222, 173, 255));
        gradient85.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush128(gradient85);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush128);
        QLinearGradient gradient86(0, 0, 0, 1);
        gradient86.setSpread(QGradient::PadSpread);
        gradient86.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient86.setColorAt(0, QColor(255, 222, 173, 255));
        gradient86.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush129(gradient86);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush129);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient87(0, 0, 0, 1);
        gradient87.setSpread(QGradient::PadSpread);
        gradient87.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient87.setColorAt(0, QColor(255, 222, 173, 255));
        gradient87.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush130(gradient87);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush130);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient88(0, 0, 0, 1);
        gradient88.setSpread(QGradient::PadSpread);
        gradient88.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient88.setColorAt(0, QColor(255, 222, 173, 255));
        gradient88.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush131(gradient88);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush131);
        QLinearGradient gradient89(0, 0, 0, 1);
        gradient89.setSpread(QGradient::PadSpread);
        gradient89.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient89.setColorAt(0, QColor(255, 222, 173, 255));
        gradient89.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush132(gradient89);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush132);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_cos->setPalette(palette10);
        pushButton_cos->setFont(font1);
        pushButton_cos->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_cos, 3, 6, 1, 1);

        pushButton_tg = new QPushButton(Simplecalculator);
        pushButton_tg->setObjectName(QString::fromUtf8("pushButton_tg"));
        sizePolicy.setHeightForWidth(pushButton_tg->sizePolicy().hasHeightForWidth());
        pushButton_tg->setSizePolicy(sizePolicy);
        pushButton_tg->setMinimumSize(QSize(50, 50));
        pushButton_tg->setSizeIncrement(QSize(0, 0));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient90(0, 0, 0, 1);
        gradient90.setSpread(QGradient::PadSpread);
        gradient90.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient90.setColorAt(0, QColor(255, 222, 173, 255));
        gradient90.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush133(gradient90);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush133);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient91(0, 0, 0, 1);
        gradient91.setSpread(QGradient::PadSpread);
        gradient91.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient91.setColorAt(0, QColor(255, 222, 173, 255));
        gradient91.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush134(gradient91);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush134);
        QLinearGradient gradient92(0, 0, 0, 1);
        gradient92.setSpread(QGradient::PadSpread);
        gradient92.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient92.setColorAt(0, QColor(255, 222, 173, 255));
        gradient92.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush135(gradient92);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush135);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient93(0, 0, 0, 1);
        gradient93.setSpread(QGradient::PadSpread);
        gradient93.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient93.setColorAt(0, QColor(255, 222, 173, 255));
        gradient93.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush136(gradient93);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush136);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient94(0, 0, 0, 1);
        gradient94.setSpread(QGradient::PadSpread);
        gradient94.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient94.setColorAt(0, QColor(255, 222, 173, 255));
        gradient94.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush137(gradient94);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush137);
        QLinearGradient gradient95(0, 0, 0, 1);
        gradient95.setSpread(QGradient::PadSpread);
        gradient95.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient95.setColorAt(0, QColor(255, 222, 173, 255));
        gradient95.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush138(gradient95);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush138);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient96(0, 0, 0, 1);
        gradient96.setSpread(QGradient::PadSpread);
        gradient96.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient96.setColorAt(0, QColor(255, 222, 173, 255));
        gradient96.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush139(gradient96);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush139);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient97(0, 0, 0, 1);
        gradient97.setSpread(QGradient::PadSpread);
        gradient97.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient97.setColorAt(0, QColor(255, 222, 173, 255));
        gradient97.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush140(gradient97);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush140);
        QLinearGradient gradient98(0, 0, 0, 1);
        gradient98.setSpread(QGradient::PadSpread);
        gradient98.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient98.setColorAt(0, QColor(255, 222, 173, 255));
        gradient98.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush141(gradient98);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush141);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_tg->setPalette(palette11);
        pushButton_tg->setFont(font1);
        pushButton_tg->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_tg, 3, 7, 1, 1);

        pushButton_4 = new QPushButton(Simplecalculator);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(50, 50));
        pushButton_4->setSizeIncrement(QSize(0, 0));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient99(0, 0, 0, 1);
        gradient99.setSpread(QGradient::PadSpread);
        gradient99.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient99.setColorAt(0, QColor(255, 228, 225, 255));
        gradient99.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush142(gradient99);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush142);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient100(0, 0, 0, 1);
        gradient100.setSpread(QGradient::PadSpread);
        gradient100.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient100.setColorAt(0, QColor(255, 228, 225, 255));
        gradient100.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush143(gradient100);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush143);
        QLinearGradient gradient101(0, 0, 0, 1);
        gradient101.setSpread(QGradient::PadSpread);
        gradient101.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient101.setColorAt(0, QColor(255, 228, 225, 255));
        gradient101.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush144(gradient101);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush144);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient102(0, 0, 0, 1);
        gradient102.setSpread(QGradient::PadSpread);
        gradient102.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient102.setColorAt(0, QColor(255, 228, 225, 255));
        gradient102.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush145(gradient102);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush145);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient103(0, 0, 0, 1);
        gradient103.setSpread(QGradient::PadSpread);
        gradient103.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient103.setColorAt(0, QColor(255, 228, 225, 255));
        gradient103.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush146(gradient103);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush146);
        QLinearGradient gradient104(0, 0, 0, 1);
        gradient104.setSpread(QGradient::PadSpread);
        gradient104.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient104.setColorAt(0, QColor(255, 228, 225, 255));
        gradient104.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush147(gradient104);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush147);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient105(0, 0, 0, 1);
        gradient105.setSpread(QGradient::PadSpread);
        gradient105.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient105.setColorAt(0, QColor(255, 228, 225, 255));
        gradient105.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush148(gradient105);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush148);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient106(0, 0, 0, 1);
        gradient106.setSpread(QGradient::PadSpread);
        gradient106.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient106.setColorAt(0, QColor(255, 228, 225, 255));
        gradient106.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush149(gradient106);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush149);
        QLinearGradient gradient107(0, 0, 0, 1);
        gradient107.setSpread(QGradient::PadSpread);
        gradient107.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient107.setColorAt(0, QColor(255, 228, 225, 255));
        gradient107.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush150(gradient107);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush150);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_4->setPalette(palette12);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_4, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(Simplecalculator);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(50, 50));
        pushButton_5->setSizeIncrement(QSize(0, 0));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient108(0, 0, 0, 1);
        gradient108.setSpread(QGradient::PadSpread);
        gradient108.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient108.setColorAt(0, QColor(255, 228, 225, 255));
        gradient108.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush151(gradient108);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush151);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient109(0, 0, 0, 1);
        gradient109.setSpread(QGradient::PadSpread);
        gradient109.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient109.setColorAt(0, QColor(255, 228, 225, 255));
        gradient109.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush152(gradient109);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush152);
        QLinearGradient gradient110(0, 0, 0, 1);
        gradient110.setSpread(QGradient::PadSpread);
        gradient110.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient110.setColorAt(0, QColor(255, 228, 225, 255));
        gradient110.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush153(gradient110);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush153);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient111(0, 0, 0, 1);
        gradient111.setSpread(QGradient::PadSpread);
        gradient111.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient111.setColorAt(0, QColor(255, 228, 225, 255));
        gradient111.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush154(gradient111);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush154);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient112(0, 0, 0, 1);
        gradient112.setSpread(QGradient::PadSpread);
        gradient112.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient112.setColorAt(0, QColor(255, 228, 225, 255));
        gradient112.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush155(gradient112);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush155);
        QLinearGradient gradient113(0, 0, 0, 1);
        gradient113.setSpread(QGradient::PadSpread);
        gradient113.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient113.setColorAt(0, QColor(255, 228, 225, 255));
        gradient113.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush156(gradient113);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush156);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient114(0, 0, 0, 1);
        gradient114.setSpread(QGradient::PadSpread);
        gradient114.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient114.setColorAt(0, QColor(255, 228, 225, 255));
        gradient114.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush157(gradient114);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush157);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient115(0, 0, 0, 1);
        gradient115.setSpread(QGradient::PadSpread);
        gradient115.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient115.setColorAt(0, QColor(255, 228, 225, 255));
        gradient115.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush158(gradient115);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush158);
        QLinearGradient gradient116(0, 0, 0, 1);
        gradient116.setSpread(QGradient::PadSpread);
        gradient116.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient116.setColorAt(0, QColor(255, 228, 225, 255));
        gradient116.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush159(gradient116);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush159);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_5->setPalette(palette13);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_5, 4, 1, 1, 2);

        pushButton_6 = new QPushButton(Simplecalculator);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(50, 50));
        pushButton_6->setSizeIncrement(QSize(0, 0));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient117(0, 0, 0, 1);
        gradient117.setSpread(QGradient::PadSpread);
        gradient117.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient117.setColorAt(0, QColor(255, 228, 225, 255));
        gradient117.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush160(gradient117);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush160);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient118(0, 0, 0, 1);
        gradient118.setSpread(QGradient::PadSpread);
        gradient118.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient118.setColorAt(0, QColor(255, 228, 225, 255));
        gradient118.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush161(gradient118);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush161);
        QLinearGradient gradient119(0, 0, 0, 1);
        gradient119.setSpread(QGradient::PadSpread);
        gradient119.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient119.setColorAt(0, QColor(255, 228, 225, 255));
        gradient119.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush162(gradient119);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush162);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient120(0, 0, 0, 1);
        gradient120.setSpread(QGradient::PadSpread);
        gradient120.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient120.setColorAt(0, QColor(255, 228, 225, 255));
        gradient120.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush163(gradient120);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush163);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient121(0, 0, 0, 1);
        gradient121.setSpread(QGradient::PadSpread);
        gradient121.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient121.setColorAt(0, QColor(255, 228, 225, 255));
        gradient121.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush164(gradient121);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush164);
        QLinearGradient gradient122(0, 0, 0, 1);
        gradient122.setSpread(QGradient::PadSpread);
        gradient122.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient122.setColorAt(0, QColor(255, 228, 225, 255));
        gradient122.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush165(gradient122);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush165);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient123(0, 0, 0, 1);
        gradient123.setSpread(QGradient::PadSpread);
        gradient123.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient123.setColorAt(0, QColor(255, 228, 225, 255));
        gradient123.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush166(gradient123);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush166);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient124(0, 0, 0, 1);
        gradient124.setSpread(QGradient::PadSpread);
        gradient124.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient124.setColorAt(0, QColor(255, 228, 225, 255));
        gradient124.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush167(gradient124);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush167);
        QLinearGradient gradient125(0, 0, 0, 1);
        gradient125.setSpread(QGradient::PadSpread);
        gradient125.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient125.setColorAt(0, QColor(255, 228, 225, 255));
        gradient125.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush168(gradient125);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush168);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_6->setPalette(palette14);
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_6, 4, 3, 1, 1);

        pushButton_minus = new QPushButton(Simplecalculator);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setMinimumSize(QSize(50, 50));
        pushButton_minus->setMaximumSize(QSize(16777215, 16777215));
        pushButton_minus->setSizeIncrement(QSize(0, 0));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient126(0, 0, 0, 1);
        gradient126.setSpread(QGradient::PadSpread);
        gradient126.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient126.setColorAt(0, QColor(240, 210, 232, 255));
        gradient126.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush169(gradient126);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush169);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush97);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush98);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush99);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient127(0, 0, 0, 1);
        gradient127.setSpread(QGradient::PadSpread);
        gradient127.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient127.setColorAt(0, QColor(240, 210, 232, 255));
        gradient127.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush170(gradient127);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush170);
        QLinearGradient gradient128(0, 0, 0, 1);
        gradient128.setSpread(QGradient::PadSpread);
        gradient128.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient128.setColorAt(0, QColor(240, 210, 232, 255));
        gradient128.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush171(gradient128);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush171);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush97);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient129(0, 0, 0, 1);
        gradient129.setSpread(QGradient::PadSpread);
        gradient129.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient129.setColorAt(0, QColor(240, 210, 232, 255));
        gradient129.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush172(gradient129);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush172);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush97);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush98);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush99);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient130(0, 0, 0, 1);
        gradient130.setSpread(QGradient::PadSpread);
        gradient130.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient130.setColorAt(0, QColor(240, 210, 232, 255));
        gradient130.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush173(gradient130);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush173);
        QLinearGradient gradient131(0, 0, 0, 1);
        gradient131.setSpread(QGradient::PadSpread);
        gradient131.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient131.setColorAt(0, QColor(240, 210, 232, 255));
        gradient131.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush174(gradient131);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush174);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush97);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush98);
        QLinearGradient gradient132(0, 0, 0, 1);
        gradient132.setSpread(QGradient::PadSpread);
        gradient132.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient132.setColorAt(0, QColor(240, 210, 232, 255));
        gradient132.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush175(gradient132);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush175);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush97);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush98);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush99);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush98);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush98);
        QLinearGradient gradient133(0, 0, 0, 1);
        gradient133.setSpread(QGradient::PadSpread);
        gradient133.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient133.setColorAt(0, QColor(240, 210, 232, 255));
        gradient133.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush176(gradient133);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush176);
        QLinearGradient gradient134(0, 0, 0, 1);
        gradient134.setSpread(QGradient::PadSpread);
        gradient134.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient134.setColorAt(0, QColor(240, 210, 232, 255));
        gradient134.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush177(gradient134);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush177);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush108);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush109);
#endif
        pushButton_minus->setPalette(palette15);
        pushButton_minus->setFont(font1);
        pushButton_minus->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f0d2e8, stop: 1 #E6E6FA);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF5EE, stop: 1	#FFFAF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_minus, 4, 4, 1, 1);

        pushButton_acos = new QPushButton(Simplecalculator);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        sizePolicy.setHeightForWidth(pushButton_acos->sizePolicy().hasHeightForWidth());
        pushButton_acos->setSizePolicy(sizePolicy);
        pushButton_acos->setMinimumSize(QSize(50, 50));
        pushButton_acos->setSizeIncrement(QSize(0, 0));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient135(0, 0, 0, 1);
        gradient135.setSpread(QGradient::PadSpread);
        gradient135.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient135.setColorAt(0, QColor(255, 222, 173, 255));
        gradient135.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush178(gradient135);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush178);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient136(0, 0, 0, 1);
        gradient136.setSpread(QGradient::PadSpread);
        gradient136.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient136.setColorAt(0, QColor(255, 222, 173, 255));
        gradient136.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush179(gradient136);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush179);
        QLinearGradient gradient137(0, 0, 0, 1);
        gradient137.setSpread(QGradient::PadSpread);
        gradient137.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient137.setColorAt(0, QColor(255, 222, 173, 255));
        gradient137.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush180(gradient137);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush180);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient138(0, 0, 0, 1);
        gradient138.setSpread(QGradient::PadSpread);
        gradient138.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient138.setColorAt(0, QColor(255, 222, 173, 255));
        gradient138.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush181(gradient138);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush181);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient139(0, 0, 0, 1);
        gradient139.setSpread(QGradient::PadSpread);
        gradient139.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient139.setColorAt(0, QColor(255, 222, 173, 255));
        gradient139.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush182(gradient139);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush182);
        QLinearGradient gradient140(0, 0, 0, 1);
        gradient140.setSpread(QGradient::PadSpread);
        gradient140.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient140.setColorAt(0, QColor(255, 222, 173, 255));
        gradient140.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush183(gradient140);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush183);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient141(0, 0, 0, 1);
        gradient141.setSpread(QGradient::PadSpread);
        gradient141.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient141.setColorAt(0, QColor(255, 222, 173, 255));
        gradient141.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush184(gradient141);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush184);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient142(0, 0, 0, 1);
        gradient142.setSpread(QGradient::PadSpread);
        gradient142.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient142.setColorAt(0, QColor(255, 222, 173, 255));
        gradient142.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush185(gradient142);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush185);
        QLinearGradient gradient143(0, 0, 0, 1);
        gradient143.setSpread(QGradient::PadSpread);
        gradient143.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient143.setColorAt(0, QColor(255, 222, 173, 255));
        gradient143.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush186(gradient143);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush186);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_acos->setPalette(palette16);
        pushButton_acos->setFont(font1);
        pushButton_acos->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_acos, 4, 5, 1, 1);

        pushButton_asin = new QPushButton(Simplecalculator);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        sizePolicy.setHeightForWidth(pushButton_asin->sizePolicy().hasHeightForWidth());
        pushButton_asin->setSizePolicy(sizePolicy);
        pushButton_asin->setMinimumSize(QSize(50, 50));
        pushButton_asin->setMaximumSize(QSize(16777215, 16777215));
        pushButton_asin->setSizeIncrement(QSize(0, 0));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient144(0, 0, 0, 1);
        gradient144.setSpread(QGradient::PadSpread);
        gradient144.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient144.setColorAt(0, QColor(255, 222, 173, 255));
        gradient144.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush187(gradient144);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush187);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient145(0, 0, 0, 1);
        gradient145.setSpread(QGradient::PadSpread);
        gradient145.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient145.setColorAt(0, QColor(255, 222, 173, 255));
        gradient145.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush188(gradient145);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush188);
        QLinearGradient gradient146(0, 0, 0, 1);
        gradient146.setSpread(QGradient::PadSpread);
        gradient146.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient146.setColorAt(0, QColor(255, 222, 173, 255));
        gradient146.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush189(gradient146);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush189);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient147(0, 0, 0, 1);
        gradient147.setSpread(QGradient::PadSpread);
        gradient147.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient147.setColorAt(0, QColor(255, 222, 173, 255));
        gradient147.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush190(gradient147);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush190);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient148(0, 0, 0, 1);
        gradient148.setSpread(QGradient::PadSpread);
        gradient148.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient148.setColorAt(0, QColor(255, 222, 173, 255));
        gradient148.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush191(gradient148);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush191);
        QLinearGradient gradient149(0, 0, 0, 1);
        gradient149.setSpread(QGradient::PadSpread);
        gradient149.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient149.setColorAt(0, QColor(255, 222, 173, 255));
        gradient149.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush192(gradient149);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush192);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient150(0, 0, 0, 1);
        gradient150.setSpread(QGradient::PadSpread);
        gradient150.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient150.setColorAt(0, QColor(255, 222, 173, 255));
        gradient150.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush193(gradient150);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush193);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient151(0, 0, 0, 1);
        gradient151.setSpread(QGradient::PadSpread);
        gradient151.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient151.setColorAt(0, QColor(255, 222, 173, 255));
        gradient151.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush194(gradient151);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush194);
        QLinearGradient gradient152(0, 0, 0, 1);
        gradient152.setSpread(QGradient::PadSpread);
        gradient152.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient152.setColorAt(0, QColor(255, 222, 173, 255));
        gradient152.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush195(gradient152);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush195);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_asin->setPalette(palette17);
        pushButton_asin->setFont(font1);
        pushButton_asin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_asin, 4, 6, 1, 1);

        pushButton_atan = new QPushButton(Simplecalculator);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        sizePolicy.setHeightForWidth(pushButton_atan->sizePolicy().hasHeightForWidth());
        pushButton_atan->setSizePolicy(sizePolicy);
        pushButton_atan->setMinimumSize(QSize(50, 50));
        pushButton_atan->setMaximumSize(QSize(16777215, 16777215));
        pushButton_atan->setSizeIncrement(QSize(0, 0));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient153(0, 0, 0, 1);
        gradient153.setSpread(QGradient::PadSpread);
        gradient153.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient153.setColorAt(0, QColor(255, 222, 173, 255));
        gradient153.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush196(gradient153);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush196);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient154(0, 0, 0, 1);
        gradient154.setSpread(QGradient::PadSpread);
        gradient154.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient154.setColorAt(0, QColor(255, 222, 173, 255));
        gradient154.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush197(gradient154);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush197);
        QLinearGradient gradient155(0, 0, 0, 1);
        gradient155.setSpread(QGradient::PadSpread);
        gradient155.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient155.setColorAt(0, QColor(255, 222, 173, 255));
        gradient155.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush198(gradient155);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush198);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient156(0, 0, 0, 1);
        gradient156.setSpread(QGradient::PadSpread);
        gradient156.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient156.setColorAt(0, QColor(255, 222, 173, 255));
        gradient156.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush199(gradient156);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush199);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient157(0, 0, 0, 1);
        gradient157.setSpread(QGradient::PadSpread);
        gradient157.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient157.setColorAt(0, QColor(255, 222, 173, 255));
        gradient157.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush200(gradient157);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush200);
        QLinearGradient gradient158(0, 0, 0, 1);
        gradient158.setSpread(QGradient::PadSpread);
        gradient158.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient158.setColorAt(0, QColor(255, 222, 173, 255));
        gradient158.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush201(gradient158);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush201);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient159(0, 0, 0, 1);
        gradient159.setSpread(QGradient::PadSpread);
        gradient159.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient159.setColorAt(0, QColor(255, 222, 173, 255));
        gradient159.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush202(gradient159);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush202);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient160(0, 0, 0, 1);
        gradient160.setSpread(QGradient::PadSpread);
        gradient160.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient160.setColorAt(0, QColor(255, 222, 173, 255));
        gradient160.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush203(gradient160);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush203);
        QLinearGradient gradient161(0, 0, 0, 1);
        gradient161.setSpread(QGradient::PadSpread);
        gradient161.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient161.setColorAt(0, QColor(255, 222, 173, 255));
        gradient161.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush204(gradient161);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush204);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_atan->setPalette(palette18);
        QFont font3;
        font3.setPointSize(14);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        pushButton_atan->setFont(font3);
        pushButton_atan->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_atan, 4, 7, 1, 1);

        pushButton_7 = new QPushButton(Simplecalculator);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(50, 50));
        pushButton_7->setSizeIncrement(QSize(0, 0));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient162(0, 0, 0, 1);
        gradient162.setSpread(QGradient::PadSpread);
        gradient162.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient162.setColorAt(0, QColor(255, 228, 225, 255));
        gradient162.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush205(gradient162);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush205);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient163(0, 0, 0, 1);
        gradient163.setSpread(QGradient::PadSpread);
        gradient163.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient163.setColorAt(0, QColor(255, 228, 225, 255));
        gradient163.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush206(gradient163);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush206);
        QLinearGradient gradient164(0, 0, 0, 1);
        gradient164.setSpread(QGradient::PadSpread);
        gradient164.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient164.setColorAt(0, QColor(255, 228, 225, 255));
        gradient164.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush207(gradient164);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush207);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient165(0, 0, 0, 1);
        gradient165.setSpread(QGradient::PadSpread);
        gradient165.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient165.setColorAt(0, QColor(255, 228, 225, 255));
        gradient165.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush208(gradient165);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush208);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient166(0, 0, 0, 1);
        gradient166.setSpread(QGradient::PadSpread);
        gradient166.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient166.setColorAt(0, QColor(255, 228, 225, 255));
        gradient166.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush209(gradient166);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush209);
        QLinearGradient gradient167(0, 0, 0, 1);
        gradient167.setSpread(QGradient::PadSpread);
        gradient167.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient167.setColorAt(0, QColor(255, 228, 225, 255));
        gradient167.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush210(gradient167);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush210);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient168(0, 0, 0, 1);
        gradient168.setSpread(QGradient::PadSpread);
        gradient168.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient168.setColorAt(0, QColor(255, 228, 225, 255));
        gradient168.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush211(gradient168);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush211);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient169(0, 0, 0, 1);
        gradient169.setSpread(QGradient::PadSpread);
        gradient169.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient169.setColorAt(0, QColor(255, 228, 225, 255));
        gradient169.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush212(gradient169);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush212);
        QLinearGradient gradient170(0, 0, 0, 1);
        gradient170.setSpread(QGradient::PadSpread);
        gradient170.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient170.setColorAt(0, QColor(255, 228, 225, 255));
        gradient170.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush213(gradient170);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush213);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_7->setPalette(palette19);
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_7, 5, 0, 1, 1);

        pushButton_8 = new QPushButton(Simplecalculator);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(50, 50));
        pushButton_8->setSizeIncrement(QSize(0, 0));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient171(0, 0, 0, 1);
        gradient171.setSpread(QGradient::PadSpread);
        gradient171.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient171.setColorAt(0, QColor(255, 228, 225, 255));
        gradient171.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush214(gradient171);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush214);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient172(0, 0, 0, 1);
        gradient172.setSpread(QGradient::PadSpread);
        gradient172.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient172.setColorAt(0, QColor(255, 228, 225, 255));
        gradient172.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush215(gradient172);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush215);
        QLinearGradient gradient173(0, 0, 0, 1);
        gradient173.setSpread(QGradient::PadSpread);
        gradient173.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient173.setColorAt(0, QColor(255, 228, 225, 255));
        gradient173.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush216(gradient173);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush216);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient174(0, 0, 0, 1);
        gradient174.setSpread(QGradient::PadSpread);
        gradient174.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient174.setColorAt(0, QColor(255, 228, 225, 255));
        gradient174.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush217(gradient174);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush217);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient175(0, 0, 0, 1);
        gradient175.setSpread(QGradient::PadSpread);
        gradient175.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient175.setColorAt(0, QColor(255, 228, 225, 255));
        gradient175.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush218(gradient175);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush218);
        QLinearGradient gradient176(0, 0, 0, 1);
        gradient176.setSpread(QGradient::PadSpread);
        gradient176.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient176.setColorAt(0, QColor(255, 228, 225, 255));
        gradient176.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush219(gradient176);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush219);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient177(0, 0, 0, 1);
        gradient177.setSpread(QGradient::PadSpread);
        gradient177.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient177.setColorAt(0, QColor(255, 228, 225, 255));
        gradient177.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush220(gradient177);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush220);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient178(0, 0, 0, 1);
        gradient178.setSpread(QGradient::PadSpread);
        gradient178.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient178.setColorAt(0, QColor(255, 228, 225, 255));
        gradient178.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush221(gradient178);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush221);
        QLinearGradient gradient179(0, 0, 0, 1);
        gradient179.setSpread(QGradient::PadSpread);
        gradient179.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient179.setColorAt(0, QColor(255, 228, 225, 255));
        gradient179.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush222(gradient179);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush222);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_8->setPalette(palette20);
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_8, 5, 1, 1, 2);

        pushButton_9 = new QPushButton(Simplecalculator);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(50, 50));
        pushButton_9->setSizeIncrement(QSize(0, 0));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient180(0, 0, 0, 1);
        gradient180.setSpread(QGradient::PadSpread);
        gradient180.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient180.setColorAt(0, QColor(255, 228, 225, 255));
        gradient180.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush223(gradient180);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush223);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient181(0, 0, 0, 1);
        gradient181.setSpread(QGradient::PadSpread);
        gradient181.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient181.setColorAt(0, QColor(255, 228, 225, 255));
        gradient181.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush224(gradient181);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush224);
        QLinearGradient gradient182(0, 0, 0, 1);
        gradient182.setSpread(QGradient::PadSpread);
        gradient182.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient182.setColorAt(0, QColor(255, 228, 225, 255));
        gradient182.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush225(gradient182);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush225);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient183(0, 0, 0, 1);
        gradient183.setSpread(QGradient::PadSpread);
        gradient183.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient183.setColorAt(0, QColor(255, 228, 225, 255));
        gradient183.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush226(gradient183);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush226);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient184(0, 0, 0, 1);
        gradient184.setSpread(QGradient::PadSpread);
        gradient184.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient184.setColorAt(0, QColor(255, 228, 225, 255));
        gradient184.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush227(gradient184);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush227);
        QLinearGradient gradient185(0, 0, 0, 1);
        gradient185.setSpread(QGradient::PadSpread);
        gradient185.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient185.setColorAt(0, QColor(255, 228, 225, 255));
        gradient185.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush228(gradient185);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush228);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient186(0, 0, 0, 1);
        gradient186.setSpread(QGradient::PadSpread);
        gradient186.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient186.setColorAt(0, QColor(255, 228, 225, 255));
        gradient186.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush229(gradient186);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush229);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient187(0, 0, 0, 1);
        gradient187.setSpread(QGradient::PadSpread);
        gradient187.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient187.setColorAt(0, QColor(255, 228, 225, 255));
        gradient187.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush230(gradient187);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush230);
        QLinearGradient gradient188(0, 0, 0, 1);
        gradient188.setSpread(QGradient::PadSpread);
        gradient188.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient188.setColorAt(0, QColor(255, 228, 225, 255));
        gradient188.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush231(gradient188);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush231);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_9->setPalette(palette21);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_9, 5, 3, 1, 1);

        pushButton_plus = new QPushButton(Simplecalculator);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setMinimumSize(QSize(50, 50));
        pushButton_plus->setMaximumSize(QSize(16777215, 16777215));
        pushButton_plus->setSizeIncrement(QSize(0, 0));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient189(0, 0, 0, 1);
        gradient189.setSpread(QGradient::PadSpread);
        gradient189.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient189.setColorAt(0, QColor(240, 210, 232, 255));
        gradient189.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush232(gradient189);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush232);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush97);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush98);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush99);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient190(0, 0, 0, 1);
        gradient190.setSpread(QGradient::PadSpread);
        gradient190.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient190.setColorAt(0, QColor(240, 210, 232, 255));
        gradient190.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush233(gradient190);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush233);
        QLinearGradient gradient191(0, 0, 0, 1);
        gradient191.setSpread(QGradient::PadSpread);
        gradient191.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient191.setColorAt(0, QColor(240, 210, 232, 255));
        gradient191.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush234(gradient191);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush234);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush97);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient192(0, 0, 0, 1);
        gradient192.setSpread(QGradient::PadSpread);
        gradient192.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient192.setColorAt(0, QColor(240, 210, 232, 255));
        gradient192.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush235(gradient192);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush235);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush97);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush98);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush99);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient193(0, 0, 0, 1);
        gradient193.setSpread(QGradient::PadSpread);
        gradient193.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient193.setColorAt(0, QColor(240, 210, 232, 255));
        gradient193.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush236(gradient193);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush236);
        QLinearGradient gradient194(0, 0, 0, 1);
        gradient194.setSpread(QGradient::PadSpread);
        gradient194.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient194.setColorAt(0, QColor(240, 210, 232, 255));
        gradient194.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush237(gradient194);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush237);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush97);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush98);
        QLinearGradient gradient195(0, 0, 0, 1);
        gradient195.setSpread(QGradient::PadSpread);
        gradient195.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient195.setColorAt(0, QColor(240, 210, 232, 255));
        gradient195.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush238(gradient195);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush238);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush97);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush98);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush99);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush98);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush98);
        QLinearGradient gradient196(0, 0, 0, 1);
        gradient196.setSpread(QGradient::PadSpread);
        gradient196.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient196.setColorAt(0, QColor(240, 210, 232, 255));
        gradient196.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush239(gradient196);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush239);
        QLinearGradient gradient197(0, 0, 0, 1);
        gradient197.setSpread(QGradient::PadSpread);
        gradient197.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient197.setColorAt(0, QColor(240, 210, 232, 255));
        gradient197.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush240(gradient197);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush240);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush108);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush109);
#endif
        pushButton_plus->setPalette(palette22);
        pushButton_plus->setFont(font1);
        pushButton_plus->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f0d2e8, stop: 1 #E6E6FA);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF5EE, stop: 1	#FFFAF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_plus, 5, 4, 1, 1);

        pushButton_log = new QPushButton(Simplecalculator);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        sizePolicy.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy);
        pushButton_log->setMinimumSize(QSize(50, 50));
        pushButton_log->setSizeIncrement(QSize(0, 0));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient198(0, 0, 0, 1);
        gradient198.setSpread(QGradient::PadSpread);
        gradient198.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient198.setColorAt(0, QColor(255, 222, 173, 255));
        gradient198.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush241(gradient198);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush241);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient199(0, 0, 0, 1);
        gradient199.setSpread(QGradient::PadSpread);
        gradient199.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient199.setColorAt(0, QColor(255, 222, 173, 255));
        gradient199.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush242(gradient199);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush242);
        QLinearGradient gradient200(0, 0, 0, 1);
        gradient200.setSpread(QGradient::PadSpread);
        gradient200.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient200.setColorAt(0, QColor(255, 222, 173, 255));
        gradient200.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush243(gradient200);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush243);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient201(0, 0, 0, 1);
        gradient201.setSpread(QGradient::PadSpread);
        gradient201.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient201.setColorAt(0, QColor(255, 222, 173, 255));
        gradient201.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush244(gradient201);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush244);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient202(0, 0, 0, 1);
        gradient202.setSpread(QGradient::PadSpread);
        gradient202.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient202.setColorAt(0, QColor(255, 222, 173, 255));
        gradient202.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush245(gradient202);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush245);
        QLinearGradient gradient203(0, 0, 0, 1);
        gradient203.setSpread(QGradient::PadSpread);
        gradient203.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient203.setColorAt(0, QColor(255, 222, 173, 255));
        gradient203.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush246(gradient203);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush246);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient204(0, 0, 0, 1);
        gradient204.setSpread(QGradient::PadSpread);
        gradient204.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient204.setColorAt(0, QColor(255, 222, 173, 255));
        gradient204.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush247(gradient204);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush247);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient205(0, 0, 0, 1);
        gradient205.setSpread(QGradient::PadSpread);
        gradient205.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient205.setColorAt(0, QColor(255, 222, 173, 255));
        gradient205.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush248(gradient205);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush248);
        QLinearGradient gradient206(0, 0, 0, 1);
        gradient206.setSpread(QGradient::PadSpread);
        gradient206.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient206.setColorAt(0, QColor(255, 222, 173, 255));
        gradient206.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush249(gradient206);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush249);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_log->setPalette(palette23);
        pushButton_log->setFont(font1);
        pushButton_log->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_log, 5, 5, 1, 1);

        pushButton_ln = new QPushButton(Simplecalculator);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        sizePolicy.setHeightForWidth(pushButton_ln->sizePolicy().hasHeightForWidth());
        pushButton_ln->setSizePolicy(sizePolicy);
        pushButton_ln->setMinimumSize(QSize(50, 50));
        pushButton_ln->setSizeIncrement(QSize(0, 0));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient207(0, 0, 0, 1);
        gradient207.setSpread(QGradient::PadSpread);
        gradient207.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient207.setColorAt(0, QColor(255, 222, 173, 255));
        gradient207.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush250(gradient207);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush250);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient208(0, 0, 0, 1);
        gradient208.setSpread(QGradient::PadSpread);
        gradient208.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient208.setColorAt(0, QColor(255, 222, 173, 255));
        gradient208.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush251(gradient208);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush251);
        QLinearGradient gradient209(0, 0, 0, 1);
        gradient209.setSpread(QGradient::PadSpread);
        gradient209.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient209.setColorAt(0, QColor(255, 222, 173, 255));
        gradient209.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush252(gradient209);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush252);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient210(0, 0, 0, 1);
        gradient210.setSpread(QGradient::PadSpread);
        gradient210.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient210.setColorAt(0, QColor(255, 222, 173, 255));
        gradient210.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush253(gradient210);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush253);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient211(0, 0, 0, 1);
        gradient211.setSpread(QGradient::PadSpread);
        gradient211.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient211.setColorAt(0, QColor(255, 222, 173, 255));
        gradient211.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush254(gradient211);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush254);
        QLinearGradient gradient212(0, 0, 0, 1);
        gradient212.setSpread(QGradient::PadSpread);
        gradient212.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient212.setColorAt(0, QColor(255, 222, 173, 255));
        gradient212.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush255(gradient212);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush255);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient213(0, 0, 0, 1);
        gradient213.setSpread(QGradient::PadSpread);
        gradient213.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient213.setColorAt(0, QColor(255, 222, 173, 255));
        gradient213.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush256(gradient213);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush256);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient214(0, 0, 0, 1);
        gradient214.setSpread(QGradient::PadSpread);
        gradient214.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient214.setColorAt(0, QColor(255, 222, 173, 255));
        gradient214.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush257(gradient214);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush257);
        QLinearGradient gradient215(0, 0, 0, 1);
        gradient215.setSpread(QGradient::PadSpread);
        gradient215.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient215.setColorAt(0, QColor(255, 222, 173, 255));
        gradient215.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush258(gradient215);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush258);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_ln->setPalette(palette24);
        pushButton_ln->setFont(font1);
        pushButton_ln->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_ln, 5, 6, 1, 1);

        pushButton_sqrt = new QPushButton(Simplecalculator);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        sizePolicy.setHeightForWidth(pushButton_sqrt->sizePolicy().hasHeightForWidth());
        pushButton_sqrt->setSizePolicy(sizePolicy);
        pushButton_sqrt->setMinimumSize(QSize(50, 50));
        pushButton_sqrt->setSizeIncrement(QSize(0, 0));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient216(0, 0, 0, 1);
        gradient216.setSpread(QGradient::PadSpread);
        gradient216.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient216.setColorAt(0, QColor(255, 222, 173, 255));
        gradient216.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush259(gradient216);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush259);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient217(0, 0, 0, 1);
        gradient217.setSpread(QGradient::PadSpread);
        gradient217.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient217.setColorAt(0, QColor(255, 222, 173, 255));
        gradient217.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush260(gradient217);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush260);
        QLinearGradient gradient218(0, 0, 0, 1);
        gradient218.setSpread(QGradient::PadSpread);
        gradient218.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient218.setColorAt(0, QColor(255, 222, 173, 255));
        gradient218.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush261(gradient218);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush261);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient219(0, 0, 0, 1);
        gradient219.setSpread(QGradient::PadSpread);
        gradient219.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient219.setColorAt(0, QColor(255, 222, 173, 255));
        gradient219.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush262(gradient219);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush262);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient220(0, 0, 0, 1);
        gradient220.setSpread(QGradient::PadSpread);
        gradient220.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient220.setColorAt(0, QColor(255, 222, 173, 255));
        gradient220.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush263(gradient220);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush263);
        QLinearGradient gradient221(0, 0, 0, 1);
        gradient221.setSpread(QGradient::PadSpread);
        gradient221.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient221.setColorAt(0, QColor(255, 222, 173, 255));
        gradient221.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush264(gradient221);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush264);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient222(0, 0, 0, 1);
        gradient222.setSpread(QGradient::PadSpread);
        gradient222.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient222.setColorAt(0, QColor(255, 222, 173, 255));
        gradient222.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush265(gradient222);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush265);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient223(0, 0, 0, 1);
        gradient223.setSpread(QGradient::PadSpread);
        gradient223.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient223.setColorAt(0, QColor(255, 222, 173, 255));
        gradient223.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush266(gradient223);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush266);
        QLinearGradient gradient224(0, 0, 0, 1);
        gradient224.setSpread(QGradient::PadSpread);
        gradient224.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient224.setColorAt(0, QColor(255, 222, 173, 255));
        gradient224.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush267(gradient224);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush267);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_sqrt->setPalette(palette25);
        pushButton_sqrt->setFont(font1);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_sqrt, 5, 7, 1, 1);

        pushButton_0 = new QPushButton(Simplecalculator);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setMinimumSize(QSize(50, 50));
        pushButton_0->setSizeIncrement(QSize(0, 0));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient225(0, 0, 0, 1);
        gradient225.setSpread(QGradient::PadSpread);
        gradient225.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient225.setColorAt(0, QColor(255, 228, 225, 255));
        gradient225.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush268(gradient225);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush268);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush65);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush66);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush67);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient226(0, 0, 0, 1);
        gradient226.setSpread(QGradient::PadSpread);
        gradient226.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient226.setColorAt(0, QColor(255, 228, 225, 255));
        gradient226.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush269(gradient226);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush269);
        QLinearGradient gradient227(0, 0, 0, 1);
        gradient227.setSpread(QGradient::PadSpread);
        gradient227.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient227.setColorAt(0, QColor(255, 228, 225, 255));
        gradient227.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush270(gradient227);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush270);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush65);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient228(0, 0, 0, 1);
        gradient228.setSpread(QGradient::PadSpread);
        gradient228.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient228.setColorAt(0, QColor(255, 228, 225, 255));
        gradient228.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush271(gradient228);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush271);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush65);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush66);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush67);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient229(0, 0, 0, 1);
        gradient229.setSpread(QGradient::PadSpread);
        gradient229.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient229.setColorAt(0, QColor(255, 228, 225, 255));
        gradient229.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush272(gradient229);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush272);
        QLinearGradient gradient230(0, 0, 0, 1);
        gradient230.setSpread(QGradient::PadSpread);
        gradient230.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient230.setColorAt(0, QColor(255, 228, 225, 255));
        gradient230.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush273(gradient230);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush273);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush65);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush66);
        QLinearGradient gradient231(0, 0, 0, 1);
        gradient231.setSpread(QGradient::PadSpread);
        gradient231.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient231.setColorAt(0, QColor(255, 228, 225, 255));
        gradient231.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush274(gradient231);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush274);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush65);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush66);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush67);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush66);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush66);
        QLinearGradient gradient232(0, 0, 0, 1);
        gradient232.setSpread(QGradient::PadSpread);
        gradient232.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient232.setColorAt(0, QColor(255, 228, 225, 255));
        gradient232.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush275(gradient232);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush275);
        QLinearGradient gradient233(0, 0, 0, 1);
        gradient233.setSpread(QGradient::PadSpread);
        gradient233.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient233.setColorAt(0, QColor(255, 228, 225, 255));
        gradient233.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush276(gradient233);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush276);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush76);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush77);
#endif
        pushButton_0->setPalette(palette26);
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_0, 6, 0, 1, 1);

        pushButton_dot = new QPushButton(Simplecalculator);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        sizePolicy.setHeightForWidth(pushButton_dot->sizePolicy().hasHeightForWidth());
        pushButton_dot->setSizePolicy(sizePolicy);
        pushButton_dot->setMinimumSize(QSize(50, 50));
        pushButton_dot->setSizeIncrement(QSize(0, 0));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient234(0, 0, 0, 1);
        gradient234.setSpread(QGradient::PadSpread);
        gradient234.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient234.setColorAt(0, QColor(176, 224, 230, 255));
        gradient234.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush277(gradient234);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush277);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient235(0, 0, 0, 1);
        gradient235.setSpread(QGradient::PadSpread);
        gradient235.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient235.setColorAt(0, QColor(176, 224, 230, 255));
        gradient235.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush278(gradient235);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush278);
        QLinearGradient gradient236(0, 0, 0, 1);
        gradient236.setSpread(QGradient::PadSpread);
        gradient236.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient236.setColorAt(0, QColor(176, 224, 230, 255));
        gradient236.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush279(gradient236);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush279);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient237(0, 0, 0, 1);
        gradient237.setSpread(QGradient::PadSpread);
        gradient237.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient237.setColorAt(0, QColor(176, 224, 230, 255));
        gradient237.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush280(gradient237);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush280);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient238(0, 0, 0, 1);
        gradient238.setSpread(QGradient::PadSpread);
        gradient238.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient238.setColorAt(0, QColor(176, 224, 230, 255));
        gradient238.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush281(gradient238);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush281);
        QLinearGradient gradient239(0, 0, 0, 1);
        gradient239.setSpread(QGradient::PadSpread);
        gradient239.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient239.setColorAt(0, QColor(176, 224, 230, 255));
        gradient239.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush282(gradient239);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush282);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient240(0, 0, 0, 1);
        gradient240.setSpread(QGradient::PadSpread);
        gradient240.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient240.setColorAt(0, QColor(176, 224, 230, 255));
        gradient240.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush283(gradient240);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush283);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient241(0, 0, 0, 1);
        gradient241.setSpread(QGradient::PadSpread);
        gradient241.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient241.setColorAt(0, QColor(176, 224, 230, 255));
        gradient241.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush284(gradient241);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush284);
        QLinearGradient gradient242(0, 0, 0, 1);
        gradient242.setSpread(QGradient::PadSpread);
        gradient242.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient242.setColorAt(0, QColor(176, 224, 230, 255));
        gradient242.setColorAt(1, QColor(224, 255, 255, 255));
        QBrush brush285(gradient242);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush285);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        pushButton_dot->setPalette(palette27);
        pushButton_dot->setFont(font1);
        pushButton_dot->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 	#B0E0E6, stop: 1 	#E0FFFF);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF0F5, stop: 1 #FAF0E6);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_dot, 6, 1, 1, 2);

        pushButton_eq = new QPushButton(Simplecalculator);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        sizePolicy.setHeightForWidth(pushButton_eq->sizePolicy().hasHeightForWidth());
        pushButton_eq->setSizePolicy(sizePolicy);
        pushButton_eq->setMinimumSize(QSize(50, 50));
        pushButton_eq->setSizeIncrement(QSize(0, 0));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient243(0, 0, 0, 1);
        gradient243.setSpread(QGradient::PadSpread);
        gradient243.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient243.setColorAt(0, QColor(255, 228, 225, 255));
        gradient243.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush286(gradient243);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush286);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush14);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush15);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient244(0, 0, 0, 1);
        gradient244.setSpread(QGradient::PadSpread);
        gradient244.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient244.setColorAt(0, QColor(255, 228, 225, 255));
        gradient244.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush287(gradient244);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush287);
        QLinearGradient gradient245(0, 0, 0, 1);
        gradient245.setSpread(QGradient::PadSpread);
        gradient245.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient245.setColorAt(0, QColor(255, 228, 225, 255));
        gradient245.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush288(gradient245);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush288);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient246(0, 0, 0, 1);
        gradient246.setSpread(QGradient::PadSpread);
        gradient246.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient246.setColorAt(0, QColor(255, 228, 225, 255));
        gradient246.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush289(gradient246);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush289);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush14);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush15);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush16);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient247(0, 0, 0, 1);
        gradient247.setSpread(QGradient::PadSpread);
        gradient247.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient247.setColorAt(0, QColor(255, 228, 225, 255));
        gradient247.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush290(gradient247);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush290);
        QLinearGradient gradient248(0, 0, 0, 1);
        gradient248.setSpread(QGradient::PadSpread);
        gradient248.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient248.setColorAt(0, QColor(255, 228, 225, 255));
        gradient248.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush291(gradient248);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush291);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        QLinearGradient gradient249(0, 0, 0, 1);
        gradient249.setSpread(QGradient::PadSpread);
        gradient249.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient249.setColorAt(0, QColor(255, 228, 225, 255));
        gradient249.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush292(gradient249);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush292);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush14);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush15);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        QLinearGradient gradient250(0, 0, 0, 1);
        gradient250.setSpread(QGradient::PadSpread);
        gradient250.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient250.setColorAt(0, QColor(255, 228, 225, 255));
        gradient250.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush293(gradient250);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush293);
        QLinearGradient gradient251(0, 0, 0, 1);
        gradient251.setSpread(QGradient::PadSpread);
        gradient251.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient251.setColorAt(0, QColor(255, 228, 225, 255));
        gradient251.setColorAt(1, QColor(255, 250, 240, 255));
        QBrush brush294(gradient251);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush294);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush25);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush26);
#endif
        pushButton_eq->setPalette(palette28);
        pushButton_eq->setFont(font1);
        pushButton_eq->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #FFE4E1, stop: 1#FFFAF0);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #f0ffe8, stop: 1#F0FFF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }"
                        "\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom "
                        "right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_eq, 6, 3, 1, 1);

        pushButton_mult = new QPushButton(Simplecalculator);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        sizePolicy.setHeightForWidth(pushButton_mult->sizePolicy().hasHeightForWidth());
        pushButton_mult->setSizePolicy(sizePolicy);
        pushButton_mult->setMinimumSize(QSize(50, 50));
        pushButton_mult->setMaximumSize(QSize(16777215, 16777215));
        pushButton_mult->setSizeIncrement(QSize(0, 0));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient252(0, 0, 0, 1);
        gradient252.setSpread(QGradient::PadSpread);
        gradient252.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient252.setColorAt(0, QColor(240, 210, 232, 255));
        gradient252.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush295(gradient252);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush295);
        palette29.setBrush(QPalette::Active, QPalette::Midlight, brush97);
        palette29.setBrush(QPalette::Active, QPalette::Dark, brush98);
        palette29.setBrush(QPalette::Active, QPalette::Mid, brush99);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient253(0, 0, 0, 1);
        gradient253.setSpread(QGradient::PadSpread);
        gradient253.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient253.setColorAt(0, QColor(240, 210, 232, 255));
        gradient253.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush296(gradient253);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush296);
        QLinearGradient gradient254(0, 0, 0, 1);
        gradient254.setSpread(QGradient::PadSpread);
        gradient254.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient254.setColorAt(0, QColor(240, 210, 232, 255));
        gradient254.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush297(gradient254);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush297);
        palette29.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush97);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient255(0, 0, 0, 1);
        gradient255.setSpread(QGradient::PadSpread);
        gradient255.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient255.setColorAt(0, QColor(240, 210, 232, 255));
        gradient255.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush298(gradient255);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush298);
        palette29.setBrush(QPalette::Inactive, QPalette::Midlight, brush97);
        palette29.setBrush(QPalette::Inactive, QPalette::Dark, brush98);
        palette29.setBrush(QPalette::Inactive, QPalette::Mid, brush99);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient256(0, 0, 0, 1);
        gradient256.setSpread(QGradient::PadSpread);
        gradient256.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient256.setColorAt(0, QColor(240, 210, 232, 255));
        gradient256.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush299(gradient256);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush299);
        QLinearGradient gradient257(0, 0, 0, 1);
        gradient257.setSpread(QGradient::PadSpread);
        gradient257.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient257.setColorAt(0, QColor(240, 210, 232, 255));
        gradient257.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush300(gradient257);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush300);
        palette29.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush97);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush98);
        QLinearGradient gradient258(0, 0, 0, 1);
        gradient258.setSpread(QGradient::PadSpread);
        gradient258.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient258.setColorAt(0, QColor(240, 210, 232, 255));
        gradient258.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush301(gradient258);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush301);
        palette29.setBrush(QPalette::Disabled, QPalette::Midlight, brush97);
        palette29.setBrush(QPalette::Disabled, QPalette::Dark, brush98);
        palette29.setBrush(QPalette::Disabled, QPalette::Mid, brush99);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush98);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush98);
        QLinearGradient gradient259(0, 0, 0, 1);
        gradient259.setSpread(QGradient::PadSpread);
        gradient259.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient259.setColorAt(0, QColor(240, 210, 232, 255));
        gradient259.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush302(gradient259);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush302);
        QLinearGradient gradient260(0, 0, 0, 1);
        gradient260.setSpread(QGradient::PadSpread);
        gradient260.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient260.setColorAt(0, QColor(240, 210, 232, 255));
        gradient260.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush303(gradient260);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush303);
        palette29.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush108);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush109);
#endif
        pushButton_mult->setPalette(palette29);
        pushButton_mult->setFont(font1);
        pushButton_mult->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f0d2e8, stop: 1 #E6E6FA);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF5EE, stop: 1	#FFFAF0);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_mult, 6, 4, 1, 1);

        pushButton_x = new QPushButton(Simplecalculator);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        sizePolicy.setHeightForWidth(pushButton_x->sizePolicy().hasHeightForWidth());
        pushButton_x->setSizePolicy(sizePolicy);
        pushButton_x->setMinimumSize(QSize(50, 50));
        pushButton_x->setSizeIncrement(QSize(0, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nimbus Roman"));
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        pushButton_x->setFont(font4);
        pushButton_x->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 	#B0E0E6, stop: 1 	#E0FFFF);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 	#FFF0F5, stop: 1 #FAF0E6);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_x, 6, 5, 1, 1);

        pushButton_pow = new QPushButton(Simplecalculator);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        sizePolicy.setHeightForWidth(pushButton_pow->sizePolicy().hasHeightForWidth());
        pushButton_pow->setSizePolicy(sizePolicy);
        pushButton_pow->setMinimumSize(QSize(50, 50));
        pushButton_pow->setSizeIncrement(QSize(0, 0));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient261(0, 0, 0, 1);
        gradient261.setSpread(QGradient::PadSpread);
        gradient261.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient261.setColorAt(0, QColor(255, 222, 173, 255));
        gradient261.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush304(gradient261);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush304);
        palette30.setBrush(QPalette::Active, QPalette::Light, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Midlight, brush111);
        palette30.setBrush(QPalette::Active, QPalette::Dark, brush112);
        palette30.setBrush(QPalette::Active, QPalette::Mid, brush113);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush);
        palette30.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient262(0, 0, 0, 1);
        gradient262.setSpread(QGradient::PadSpread);
        gradient262.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient262.setColorAt(0, QColor(255, 222, 173, 255));
        gradient262.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush305(gradient262);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush305);
        QLinearGradient gradient263(0, 0, 0, 1);
        gradient263.setSpread(QGradient::PadSpread);
        gradient263.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient263.setColorAt(0, QColor(255, 222, 173, 255));
        gradient263.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush306(gradient263);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush306);
        palette30.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush111);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette30.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush10);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient264(0, 0, 0, 1);
        gradient264.setSpread(QGradient::PadSpread);
        gradient264.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient264.setColorAt(0, QColor(255, 222, 173, 255));
        gradient264.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush307(gradient264);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush307);
        palette30.setBrush(QPalette::Inactive, QPalette::Light, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Midlight, brush111);
        palette30.setBrush(QPalette::Inactive, QPalette::Dark, brush112);
        palette30.setBrush(QPalette::Inactive, QPalette::Mid, brush113);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient265(0, 0, 0, 1);
        gradient265.setSpread(QGradient::PadSpread);
        gradient265.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient265.setColorAt(0, QColor(255, 222, 173, 255));
        gradient265.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush308(gradient265);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush308);
        QLinearGradient gradient266(0, 0, 0, 1);
        gradient266.setSpread(QGradient::PadSpread);
        gradient266.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient266.setColorAt(0, QColor(255, 222, 173, 255));
        gradient266.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush309(gradient266);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush309);
        palette30.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush111);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette30.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush112);
        QLinearGradient gradient267(0, 0, 0, 1);
        gradient267.setSpread(QGradient::PadSpread);
        gradient267.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient267.setColorAt(0, QColor(255, 222, 173, 255));
        gradient267.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush310(gradient267);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush310);
        palette30.setBrush(QPalette::Disabled, QPalette::Light, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::Midlight, brush111);
        palette30.setBrush(QPalette::Disabled, QPalette::Dark, brush112);
        palette30.setBrush(QPalette::Disabled, QPalette::Mid, brush113);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush112);
        palette30.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush112);
        QLinearGradient gradient268(0, 0, 0, 1);
        gradient268.setSpread(QGradient::PadSpread);
        gradient268.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient268.setColorAt(0, QColor(255, 222, 173, 255));
        gradient268.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush311(gradient268);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush311);
        QLinearGradient gradient269(0, 0, 0, 1);
        gradient269.setSpread(QGradient::PadSpread);
        gradient269.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient269.setColorAt(0, QColor(255, 222, 173, 255));
        gradient269.setColorAt(1, QColor(255, 248, 220, 255));
        QBrush brush312(gradient269);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush312);
        palette30.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush122);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette30.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush123);
#endif
        pushButton_pow->setPalette(palette30);
        pushButton_pow->setFont(font1);
        pushButton_pow->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_pow, 6, 6, 1, 1);

        pushButton_mod = new QPushButton(Simplecalculator);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        sizePolicy.setHeightForWidth(pushButton_mod->sizePolicy().hasHeightForWidth());
        pushButton_mod->setSizePolicy(sizePolicy);
        pushButton_mod->setMinimumSize(QSize(50, 50));
        pushButton_mod->setMaximumSize(QSize(16777215, 16777215));
        pushButton_mod->setFont(font1);
        pushButton_mod->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #ffdead, stop: 1 #fff8dc);\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
""
                        " }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: botto"
                        "m right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     position: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout->addWidget(pushButton_mod, 6, 7, 1, 1);

        lineEdit_step_2 = new QLineEdit(Simplecalculator);
        lineEdit_step_2->setObjectName(QString::fromUtf8("lineEdit_step_2"));
        sizePolicy.setHeightForWidth(lineEdit_step_2->sizePolicy().hasHeightForWidth());
        lineEdit_step_2->setSizePolicy(sizePolicy);
        lineEdit_step_2->setMinimumSize(QSize(70, 35));
        lineEdit_step_2->setSizeIncrement(QSize(0, 0));
        lineEdit_step_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F2;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_step_2->setAlignment(Qt::AlignCenter);
        lineEdit_step_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_step_2, 7, 6, 1, 2);

        lineEdit_start = new QLineEdit(Simplecalculator);
        lineEdit_start->setObjectName(QString::fromUtf8("lineEdit_start"));
        sizePolicy.setHeightForWidth(lineEdit_start->sizePolicy().hasHeightForWidth());
        lineEdit_start->setSizePolicy(sizePolicy);
        lineEdit_start->setMinimumSize(QSize(70, 20));
        lineEdit_start->setSizeIncrement(QSize(0, 0));
        lineEdit_start->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_start->setAlignment(Qt::AlignCenter);
        lineEdit_start->setReadOnly(false);

        gridLayout->addWidget(lineEdit_start, 8, 1, 1, 3);

        lineEdit_end = new QLineEdit(Simplecalculator);
        lineEdit_end->setObjectName(QString::fromUtf8("lineEdit_end"));
        sizePolicy.setHeightForWidth(lineEdit_end->sizePolicy().hasHeightForWidth());
        lineEdit_end->setSizePolicy(sizePolicy);
        lineEdit_end->setMinimumSize(QSize(70, 20));
        lineEdit_end->setSizeIncrement(QSize(0, 0));
        lineEdit_end->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_end->setAlignment(Qt::AlignCenter);
        lineEdit_end->setReadOnly(false);

        gridLayout->addWidget(lineEdit_end, 8, 4, 1, 2);

        lineEdit_step = new QLineEdit(Simplecalculator);
        lineEdit_step->setObjectName(QString::fromUtf8("lineEdit_step"));
        sizePolicy.setHeightForWidth(lineEdit_step->sizePolicy().hasHeightForWidth());
        lineEdit_step->setSizePolicy(sizePolicy);
        lineEdit_step->setMinimumSize(QSize(70, 20));
        lineEdit_step->setSizeIncrement(QSize(0, 0));
        lineEdit_step->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_step->setAlignment(Qt::AlignCenter);
        lineEdit_step->setReadOnly(false);

        gridLayout->addWidget(lineEdit_step, 8, 6, 1, 2);

        lineEdit_end_2 = new QLineEdit(Simplecalculator);
        lineEdit_end_2->setObjectName(QString::fromUtf8("lineEdit_end_2"));
        sizePolicy.setHeightForWidth(lineEdit_end_2->sizePolicy().hasHeightForWidth());
        lineEdit_end_2->setSizePolicy(sizePolicy);
        lineEdit_end_2->setMinimumSize(QSize(70, 35));
        lineEdit_end_2->setSizeIncrement(QSize(0, 0));
        lineEdit_end_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F2;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_end_2->setAlignment(Qt::AlignCenter);
        lineEdit_end_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_end_2, 7, 4, 1, 2);

        lineEdit_start_2 = new QLineEdit(Simplecalculator);
        lineEdit_start_2->setObjectName(QString::fromUtf8("lineEdit_start_2"));
        sizePolicy.setHeightForWidth(lineEdit_start_2->sizePolicy().hasHeightForWidth());
        lineEdit_start_2->setSizePolicy(sizePolicy);
        lineEdit_start_2->setMinimumSize(QSize(70, 35));
        lineEdit_start_2->setSizeIncrement(QSize(0, 0));
        lineEdit_start_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 1px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F2;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_start_2->setAlignment(Qt::AlignCenter);
        lineEdit_start_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_start_2, 7, 1, 1, 3);

        pushButton_create_graph = new QPushButton(Simplecalculator);
        pushButton_create_graph->setObjectName(QString::fromUtf8("pushButton_create_graph"));
        sizePolicy.setHeightForWidth(pushButton_create_graph->sizePolicy().hasHeightForWidth());
        pushButton_create_graph->setSizePolicy(sizePolicy);
        pushButton_create_graph->setMinimumSize(QSize(50, 35));
        pushButton_create_graph->setSizeIncrement(QSize(0, 0));
        pushButton_create_graph->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_create_graph, 7, 0, 2, 1);

        label_6 = new QLabel(Simplecalculator);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 7, 1, 1);

        gridLayout->setRowStretch(0, 4);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setRowStretch(3, 4);
        gridLayout->setRowStretch(4, 4);
        gridLayout->setRowStretch(5, 4);
        gridLayout->setRowStretch(6, 4);
        gridLayout->setRowStretch(7, 4);
        gridLayout->setRowStretch(8, 4);
        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 4);
        gridLayout->setColumnStretch(4, 4);
        gridLayout->setColumnStretch(5, 4);
        gridLayout->setColumnStretch(6, 4);
        gridLayout->setColumnStretch(7, 4);
        Creditcalculator->addTab(Simplecalculator, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEdit_int_rate = new QLineEdit(tab_2);
        lineEdit_int_rate->setObjectName(QString::fromUtf8("lineEdit_int_rate"));
        sizePolicy.setHeightForWidth(lineEdit_int_rate->sizePolicy().hasHeightForWidth());
        lineEdit_int_rate->setSizePolicy(sizePolicy);
        lineEdit_int_rate->setMinimumSize(QSize(70, 25));
        lineEdit_int_rate->setSizeIncrement(QSize(0, 20));
        lineEdit_int_rate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_int_rate->setReadOnly(false);

        gridLayout_3->addWidget(lineEdit_int_rate, 5, 3, 1, 2);

        lineEdit_term = new QLineEdit(tab_2);
        lineEdit_term->setObjectName(QString::fromUtf8("lineEdit_term"));
        sizePolicy.setHeightForWidth(lineEdit_term->sizePolicy().hasHeightForWidth());
        lineEdit_term->setSizePolicy(sizePolicy);
        lineEdit_term->setMinimumSize(QSize(0, 25));
        lineEdit_term->setSizeIncrement(QSize(0, 20));
        lineEdit_term->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_term->setReadOnly(false);

        gridLayout_3->addWidget(lineEdit_term, 3, 3, 1, 1);

        comboBox_term = new QComboBox(tab_2);
        comboBox_term->addItem(QString());
        comboBox_term->addItem(QString());
        comboBox_term->setObjectName(QString::fromUtf8("comboBox_term"));
        comboBox_term->setEnabled(true);
        sizePolicy.setHeightForWidth(comboBox_term->sizePolicy().hasHeightForWidth());
        comboBox_term->setSizePolicy(sizePolicy);
        comboBox_term->setMinimumSize(QSize(0, 25));

        gridLayout_3->addWidget(comboBox_term, 3, 4, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setFont(font1);

        gridLayout_3->addWidget(label, 1, 0, 1, 3);

        lineEdit_input = new QLineEdit(tab_2);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        sizePolicy.setHeightForWidth(lineEdit_input->sizePolicy().hasHeightForWidth());
        lineEdit_input->setSizePolicy(sizePolicy);
        lineEdit_input->setMinimumSize(QSize(400, 40));
        lineEdit_input->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #dcf9fc;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_input->setAlignment(Qt::AlignCenter);
        lineEdit_input->setReadOnly(true);

        gridLayout_3->addWidget(lineEdit_input, 0, 0, 1, 5);

        lineEdit_loan = new QLineEdit(tab_2);
        lineEdit_loan->setObjectName(QString::fromUtf8("lineEdit_loan"));
        sizePolicy.setHeightForWidth(lineEdit_loan->sizePolicy().hasHeightForWidth());
        lineEdit_loan->setSizePolicy(sizePolicy);
        lineEdit_loan->setMinimumSize(QSize(200, 25));
        lineEdit_loan->setSizeIncrement(QSize(0, 0));
        lineEdit_loan->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid gray;\n"
"    border-radius: 1px;\n"
"    padding: 0 8px;\n"
"    background: #FFF8F0;\n"
"    selection-background-color: darkgray;\n"
"}"));
        lineEdit_loan->setReadOnly(false);

        gridLayout_3->addWidget(lineEdit_loan, 1, 3, 1, 2);

        comboBox_type = new QComboBox(tab_2);
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));
        comboBox_type->setEnabled(true);
        sizePolicy.setHeightForWidth(comboBox_type->sizePolicy().hasHeightForWidth());
        comboBox_type->setSizePolicy(sizePolicy);
        comboBox_type->setMinimumSize(QSize(0, 25));

        gridLayout_3->addWidget(comboBox_type, 7, 2, 1, 1);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);

        gridLayout_3->addWidget(label_2, 3, 0, 1, 3);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font1);

        gridLayout_3->addWidget(label_4, 7, 0, 1, 2);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font1);

        gridLayout_3->addWidget(label_3, 5, 0, 1, 3);

        pushButton_calc_cr = new QPushButton(tab_2);
        pushButton_calc_cr->setObjectName(QString::fromUtf8("pushButton_calc_cr"));
        pushButton_calc_cr->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButton_calc_cr->sizePolicy().hasHeightForWidth());
        pushButton_calc_cr->setSizePolicy(sizePolicy);
        pushButton_calc_cr->setMinimumSize(QSize(0, 40));
        pushButton_calc_cr->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"     border: 1px solid #8f8f91;\n"
"     border-radius: 3px;\n"
"     background-color: #ffedf4;\n"
" }\n"
"\n"
"QPushButton:pressed {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:flat {\n"
"     border: none; /* \320\264\320\273\321\217 \320\277\320\273\320\276\321\201\320\272\320\276\320\271 \320\272\320\275\320\276\320\277\320\272\320\270 \320\263\321\200\320\260\320\275\320\270\321\206\321\213 \320\275\320\265\321\202 */\n"
" }\n"
"\n"
" QPushButton:default {\n"
"     border-color: navy; /* \320\264\320\265\320\273\320\260\320\265\320\274 \320\272\320\275\320\276\320\277\320\272\321\203 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\262\321\213\320\277\321\203\320\272\320\273\320\276\320\271 */\n"
" }\n"
"\320\224\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 QPushButton \321\201 \320\274\320"
                        "\265\320\275\321\216 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\320\271\321\202\320\265 \321\201\321\203\320\261\321\215\320\273\320\265\320\274\320\265\320\275\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217 ::menu-indicator.\n"
"\n"
" QPushButton:open { /* \320\272\320\276\320\263\320\264\320\260 \321\201\320\276\320\261\321\201\321\202\320\262\320\265\320\275\320\275\320\276\320\265 \320\274\320\265\320\275\321\216 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\321\201\320\272\321\200\321\213\321\202\320\276 */\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton::menu-indicator {\n"
"     image: url(menu_indicator.png);\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: bottom right;\n"
" }\n"
"\n"
" QPushButton::menu-indicator:pressed, QPushButton::menu-indicator:open {\n"
"     positio"
                        "n: relative;\n"
"     top: 2px; left: 2px; /* \321\201\320\264\320\262\320\270\320\263\320\260\320\265\320\274 \321\201\321\202\321\200\320\265\320\273\320\272\321\203 \320\275\320\260 2 px */\n"
" }"));

        gridLayout_3->addWidget(pushButton_calc_cr, 8, 0, 1, 5);

        label_rate_m = new QLabel(tab_2);
        label_rate_m->setObjectName(QString::fromUtf8("label_rate_m"));
        QFont font5;
        font5.setItalic(true);
        label_rate_m->setFont(font5);
        label_rate_m->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_rate_m, 6, 0, 1, 5);

        label_term_m = new QLabel(tab_2);
        label_term_m->setObjectName(QString::fromUtf8("label_term_m"));
        QFont font6;
        font6.setPointSize(9);
        font6.setItalic(true);
        label_term_m->setFont(font6);
        label_term_m->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_term_m, 4, 0, 1, 5);

        label_loan_m = new QLabel(tab_2);
        label_loan_m->setObjectName(QString::fromUtf8("label_loan_m"));
        label_loan_m->setMinimumSize(QSize(180, 0));
        label_loan_m->setFont(font5);
        label_loan_m->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_3->addWidget(label_loan_m, 2, 0, 1, 5);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(0, 90));

        gridLayout_3->addWidget(label_7, 9, 0, 1, 5);

        gridLayout_3->setRowStretch(0, 2);
        gridLayout_3->setRowStretch(1, 2);
        gridLayout_3->setRowStretch(2, 1);
        gridLayout_3->setRowStretch(3, 2);
        gridLayout_3->setRowStretch(4, 1);
        gridLayout_3->setRowStretch(5, 2);
        gridLayout_3->setRowStretch(6, 1);
        gridLayout_3->setRowStretch(7, 2);
        gridLayout_3->setRowStretch(8, 2);
        gridLayout_3->setRowStretch(9, 8);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 8);
        gridLayout_3->setColumnStretch(4, 8);
        Creditcalculator->addTab(tab_2, QString());

        gridLayout_2->addWidget(Creditcalculator, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Creditcalculator->setCurrentIndex(0);
        comboBox_term->setCurrentIndex(0);
        comboBox_type->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "S21_Calculator", nullptr));
        pushButton_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_pm->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_clean->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tg->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", " mod ", nullptr));
        lineEdit_step_2->setText(QCoreApplication::translate("MainWindow", "   step", nullptr));
        lineEdit_end_2->setText(QCoreApplication::translate("MainWindow", "  x_end", nullptr));
        lineEdit_start_2->setText(QCoreApplication::translate("MainWindow", "x_begin", nullptr));
        pushButton_create_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "set x", nullptr));
        Creditcalculator->setTabText(Creditcalculator->indexOf(Simplecalculator), QCoreApplication::translate("MainWindow", "Simple calculator", nullptr));
        comboBox_term->setItemText(0, QCoreApplication::translate("MainWindow", "years", nullptr));
        comboBox_term->setItemText(1, QCoreApplication::translate("MainWindow", "months", nullptr));

        comboBox_term->setCurrentText(QCoreApplication::translate("MainWindow", "years", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Total loan amount:", nullptr));
        comboBox_type->setItemText(0, QCoreApplication::translate("MainWindow", "annuity", nullptr));
        comboBox_type->setItemText(1, QCoreApplication::translate("MainWindow", "differiented", nullptr));

        comboBox_type->setCurrentText(QCoreApplication::translate("MainWindow", "annuity", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Term:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Interest rate:", nullptr));
        pushButton_calc_cr->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        label_rate_m->setText(QString());
        label_term_m->setText(QString());
        label_loan_m->setText(QString());
        label_7->setText(QString());
        Creditcalculator->setTabText(Creditcalculator->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Credit calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
