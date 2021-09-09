/********************************************************************************
** Form generated from reading UI file 'runwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNWINDOW_H
#define UI_RUNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_runWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_output;
    QPushButton *pushButton_plotHist;
    QPushButton *pushButton_runBack;

    void setupUi(QDialog *runWindow)
    {
        if (runWindow->objectName().isEmpty())
            runWindow->setObjectName(QStringLiteral("runWindow"));
        runWindow->resize(605, 565);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 33, 71, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 49, 106, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(0, 41, 88, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 16, 35, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 22, 47, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        runWindow->setPalette(palette);
        runWindow->setStyleSheet(QLatin1String("QPushButton {\n"
"color: black;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #88d, stop: 0.1 #99e, stop: 0.49 #77c, stop: 0.5 #66b, stop: 1 #77c);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"padding: 3px;\n"
"font-size: 12px;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QComboBox{\n"
"color: white;\n"
"background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #03a, stop: 0.1 #039, stop: 0.49 #037, stop: 0.5 #027, stop: 1 #025);\n"
"border-width: 1px;\n"
"border-color: #339;\n"
"border-style: solid;\n"
"border-radius: 7;\n"
"}\n"
"\n"
"\n"
"QLineEdit{\n"
"color: white;\n"
"background-color: black;\n"
"}\n"
"\n"
"QTextEdit{\n"
"color: white;\n"
"background-color: black;\n"
"}\n"
"/*\n"
"#tabCrystal {\n"
"background: #002147;\n"
"}\n"
"#tabBeam {\n"
"background: #002147;\n"
"}\n"
"#tabWedge {\n"
"background: #002147;\n"
"}\n"
"*/\n"
"#centralWidget{\n"
"background: #025;\n"
"}\n"
"\n"
"QComboBox QAbstractIt"
                        "emView {\n"
"background: #025;\n"
"}"));
        verticalLayout = new QVBoxLayout(runWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit_output = new QTextEdit(runWindow);
        textEdit_output->setObjectName(QStringLiteral("textEdit_output"));

        verticalLayout->addWidget(textEdit_output);

        pushButton_plotHist = new QPushButton(runWindow);
        pushButton_plotHist->setObjectName(QStringLiteral("pushButton_plotHist"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(136, 136, 221, 255));
        gradient.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush8(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(170, 127, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(127, 63, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(42, 0, 127, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(56, 0, 170, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(136, 136, 221, 255));
        gradient1.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient1.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient1.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient1.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush13(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush13);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(136, 136, 221, 255));
        gradient2.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient2.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient2.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient2.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush14(gradient2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(136, 136, 221, 255));
        gradient3.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient3.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient3.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient3.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush15(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(136, 136, 221, 255));
        gradient4.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient4.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient4.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient4.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush16(gradient4);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(136, 136, 221, 255));
        gradient5.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient5.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient5.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient5.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush17(gradient5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(136, 136, 221, 255));
        gradient6.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient6.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient6.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient6.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush18(gradient6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(136, 136, 221, 255));
        gradient7.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient7.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient7.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient7.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush19(gradient7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(136, 136, 221, 255));
        gradient8.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient8.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient8.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient8.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush20(gradient8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush21(QColor(85, 0, 255, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_plotHist->setPalette(palette1);

        verticalLayout->addWidget(pushButton_plotHist);

        pushButton_runBack = new QPushButton(runWindow);
        pushButton_runBack->setObjectName(QStringLiteral("pushButton_runBack"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(136, 136, 221, 255));
        gradient9.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient9.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient9.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient9.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush22(gradient9);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush22);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(136, 136, 221, 255));
        gradient10.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient10.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient10.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient10.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush23(gradient10);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush23);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(136, 136, 221, 255));
        gradient11.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient11.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient11.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient11.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush24(gradient11);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(136, 136, 221, 255));
        gradient12.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient12.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient12.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient12.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush25(gradient12);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush25);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(136, 136, 221, 255));
        gradient13.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient13.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient13.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient13.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush26(gradient13);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush26);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(136, 136, 221, 255));
        gradient14.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient14.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient14.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient14.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush27(gradient14);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush27);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(136, 136, 221, 255));
        gradient15.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient15.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient15.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient15.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush28(gradient15);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(136, 136, 221, 255));
        gradient16.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient16.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient16.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient16.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush29(gradient16);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush29);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(136, 136, 221, 255));
        gradient17.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient17.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient17.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient17.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush30(gradient17);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_runBack->setPalette(palette2);

        verticalLayout->addWidget(pushButton_runBack);


        retranslateUi(runWindow);

        QMetaObject::connectSlotsByName(runWindow);
    } // setupUi

    void retranslateUi(QDialog *runWindow)
    {
        runWindow->setWindowTitle(QApplication::translate("runWindow", "RADDOSE-3D run", Q_NULLPTR));
        pushButton_plotHist->setText(QApplication::translate("runWindow", "Plot dose histogram", Q_NULLPTR));
        pushButton_runBack->setText(QApplication::translate("runWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class runWindow: public Ui_runWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNWINDOW_H
