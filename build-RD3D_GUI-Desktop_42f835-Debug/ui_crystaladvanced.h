/********************************************************************************
** Form generated from reading UI file 'crystaladvanced.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYSTALADVANCED_H
#define UI_CRYSTALADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CrystalAdvanced
{
public:
    QLabel *label_angleP;
    QLineEdit *lineEdit_angleP;
    QPushButton *pushButton;
    QLabel *label_angleL;
    QLineEdit *lineEdit_angleL;
    QLabel *label_containerType;
    QComboBox *comboBox_containerType;
    QLabel *label_containerMixture;
    QLineEdit *lineEdit_materialMixture;
    QLabel *label_containerThickness;
    QLabel *label_containerDensity;
    QLabel *label_containerParams;
    QLabel *label_crystalAngles;
    QLineEdit *lineEdit_containerThickness;
    QLineEdit *lineEdit_containerDensity;
    QLabel *label_containerMatEl;
    QLineEdit *lineEdit_containerEl;
    QLabel *label_containerNum;
    QLineEdit *lineEdit_containerNum;
    QLabel *label_containerEl;
    QPushButton *pushButton_container;
    QTextEdit *textEdit_container;
    QLabel *label_atomList;
    QLabel *label_containerParams_2;
    QLabel *label_calcSurrounding;
    QLabel *label_densityDefine;
    QPushButton *pushButton_SurrEl;
    QLineEdit *lineEdit_Density;
    QLineEdit *lineEdit_SurrElSymbol;
    QTextEdit *textEdit_SurrEl;
    QLabel *label_Density;
    QLineEdit *lineEdit_SurrElNum;
    QLabel *label_SurrElSymbol;
    QLabel *label_SurrAtomList;
    QLabel *label_SurrElNum;
    QLabel *label_SurrEl;
    QLabel *label_goniometer;
    QLabel *label_PE;
    QLabel *label_FLE;
    QComboBox *comboBox_PE;
    QComboBox *comboBox_FLE;
    QComboBox *comboBox_Surrounding;
    QComboBox *comboBox_Density;
    QLabel *label_SurrConc;
    QLabel *label_polarisation4;
    QComboBox *comboBox_goniometer;
    QComboBox *comboBox_polarisation;

    void setupUi(QDialog *CrystalAdvanced)
    {
        if (CrystalAdvanced->objectName().isEmpty())
            CrystalAdvanced->setObjectName(QStringLiteral("CrystalAdvanced"));
        CrystalAdvanced->resize(572, 790);
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
        CrystalAdvanced->setPalette(palette);
        CrystalAdvanced->setStyleSheet(QLatin1String("QPushButton {\n"
"color: black;\n"
"background-color: #5500ff;\n"
"}\n"
"\n"
"QLabel{\n"
"color: white;\n"
"}\n"
"\n"
"QComboBox{\n"
"color: white;\n"
"background-color: #002147;;\n"
"}\n"
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
"background: #002147;\n"
"}"));
        label_angleP = new QLabel(CrystalAdvanced);
        label_angleP->setObjectName(QStringLiteral("label_angleP"));
        label_angleP->setGeometry(QRect(20, 60, 59, 15));
        lineEdit_angleP = new QLineEdit(CrystalAdvanced);
        lineEdit_angleP->setObjectName(QStringLiteral("lineEdit_angleP"));
        lineEdit_angleP->setGeometry(QRect(160, 60, 361, 23));
        pushButton = new QPushButton(CrystalAdvanced);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 750, 80, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush8(QColor(85, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
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
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton->setPalette(palette1);
        label_angleL = new QLabel(CrystalAdvanced);
        label_angleL->setObjectName(QStringLiteral("label_angleL"));
        label_angleL->setGeometry(QRect(20, 100, 59, 15));
        lineEdit_angleL = new QLineEdit(CrystalAdvanced);
        lineEdit_angleL->setObjectName(QStringLiteral("lineEdit_angleL"));
        lineEdit_angleL->setGeometry(QRect(160, 100, 361, 23));
        label_containerType = new QLabel(CrystalAdvanced);
        label_containerType->setObjectName(QStringLiteral("label_containerType"));
        label_containerType->setGeometry(QRect(20, 540, 91, 16));
        comboBox_containerType = new QComboBox(CrystalAdvanced);
        comboBox_containerType->setObjectName(QStringLiteral("comboBox_containerType"));
        comboBox_containerType->setGeometry(QRect(160, 540, 371, 23));
        label_containerMixture = new QLabel(CrystalAdvanced);
        label_containerMixture->setObjectName(QStringLiteral("label_containerMixture"));
        label_containerMixture->setGeometry(QRect(20, 660, 101, 16));
        lineEdit_materialMixture = new QLineEdit(CrystalAdvanced);
        lineEdit_materialMixture->setObjectName(QStringLiteral("lineEdit_materialMixture"));
        lineEdit_materialMixture->setGeometry(QRect(160, 660, 361, 23));
        label_containerThickness = new QLabel(CrystalAdvanced);
        label_containerThickness->setObjectName(QStringLiteral("label_containerThickness"));
        label_containerThickness->setGeometry(QRect(20, 570, 131, 16));
        label_containerDensity = new QLabel(CrystalAdvanced);
        label_containerDensity->setObjectName(QStringLiteral("label_containerDensity"));
        label_containerDensity->setGeometry(QRect(20, 600, 131, 16));
        label_containerParams = new QLabel(CrystalAdvanced);
        label_containerParams->setObjectName(QStringLiteral("label_containerParams"));
        label_containerParams->setGeometry(QRect(20, 500, 181, 21));
        QFont font;
        font.setPointSize(12);
        font.setUnderline(true);
        label_containerParams->setFont(font);
        label_crystalAngles = new QLabel(CrystalAdvanced);
        label_crystalAngles->setObjectName(QStringLiteral("label_crystalAngles"));
        label_crystalAngles->setGeometry(QRect(20, 20, 181, 21));
        label_crystalAngles->setFont(font);
        lineEdit_containerThickness = new QLineEdit(CrystalAdvanced);
        lineEdit_containerThickness->setObjectName(QStringLiteral("lineEdit_containerThickness"));
        lineEdit_containerThickness->setGeometry(QRect(160, 570, 371, 23));
        lineEdit_containerDensity = new QLineEdit(CrystalAdvanced);
        lineEdit_containerDensity->setObjectName(QStringLiteral("lineEdit_containerDensity"));
        lineEdit_containerDensity->setGeometry(QRect(160, 600, 371, 23));
        label_containerMatEl = new QLabel(CrystalAdvanced);
        label_containerMatEl->setObjectName(QStringLiteral("label_containerMatEl"));
        label_containerMatEl->setGeometry(QRect(20, 660, 111, 16));
        lineEdit_containerEl = new QLineEdit(CrystalAdvanced);
        lineEdit_containerEl->setObjectName(QStringLiteral("lineEdit_containerEl"));
        lineEdit_containerEl->setGeometry(QRect(250, 640, 41, 23));
        label_containerNum = new QLabel(CrystalAdvanced);
        label_containerNum->setObjectName(QStringLiteral("label_containerNum"));
        label_containerNum->setGeometry(QRect(190, 680, 51, 16));
        lineEdit_containerNum = new QLineEdit(CrystalAdvanced);
        lineEdit_containerNum->setObjectName(QStringLiteral("lineEdit_containerNum"));
        lineEdit_containerNum->setGeometry(QRect(250, 680, 41, 23));
        label_containerEl = new QLabel(CrystalAdvanced);
        label_containerEl->setObjectName(QStringLiteral("label_containerEl"));
        label_containerEl->setGeometry(QRect(140, 640, 111, 16));
        pushButton_container = new QPushButton(CrystalAdvanced);
        pushButton_container->setObjectName(QStringLiteral("pushButton_container"));
        pushButton_container->setGeometry(QRect(300, 640, 80, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_container->setPalette(palette2);
        textEdit_container = new QTextEdit(CrystalAdvanced);
        textEdit_container->setObjectName(QStringLiteral("textEdit_container"));
        textEdit_container->setGeometry(QRect(410, 650, 121, 61));
        label_atomList = new QLabel(CrystalAdvanced);
        label_atomList->setObjectName(QStringLiteral("label_atomList"));
        label_atomList->setGeometry(QRect(440, 630, 111, 16));
        label_containerParams_2 = new QLabel(CrystalAdvanced);
        label_containerParams_2->setObjectName(QStringLiteral("label_containerParams_2"));
        label_containerParams_2->setGeometry(QRect(20, 150, 181, 21));
        label_containerParams_2->setFont(font);
        label_calcSurrounding = new QLabel(CrystalAdvanced);
        label_calcSurrounding->setObjectName(QStringLiteral("label_calcSurrounding"));
        label_calcSurrounding->setGeometry(QRect(20, 250, 141, 16));
        label_densityDefine = new QLabel(CrystalAdvanced);
        label_densityDefine->setObjectName(QStringLiteral("label_densityDefine"));
        label_densityDefine->setGeometry(QRect(20, 280, 141, 16));
        pushButton_SurrEl = new QPushButton(CrystalAdvanced);
        pushButton_SurrEl->setObjectName(QStringLiteral("pushButton_SurrEl"));
        pushButton_SurrEl->setGeometry(QRect(320, 320, 80, 71));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_SurrEl->setPalette(palette3);
        lineEdit_Density = new QLineEdit(CrystalAdvanced);
        lineEdit_Density->setObjectName(QStringLiteral("lineEdit_Density"));
        lineEdit_Density->setGeometry(QRect(160, 410, 371, 23));
        lineEdit_SurrElSymbol = new QLineEdit(CrystalAdvanced);
        lineEdit_SurrElSymbol->setObjectName(QStringLiteral("lineEdit_SurrElSymbol"));
        lineEdit_SurrElSymbol->setGeometry(QRect(270, 320, 41, 23));
        textEdit_SurrEl = new QTextEdit(CrystalAdvanced);
        textEdit_SurrEl->setObjectName(QStringLiteral("textEdit_SurrEl"));
        textEdit_SurrEl->setGeometry(QRect(410, 330, 121, 61));
        label_Density = new QLabel(CrystalAdvanced);
        label_Density->setObjectName(QStringLiteral("label_Density"));
        label_Density->setGeometry(QRect(20, 410, 101, 16));
        lineEdit_SurrElNum = new QLineEdit(CrystalAdvanced);
        lineEdit_SurrElNum->setObjectName(QStringLiteral("lineEdit_SurrElNum"));
        lineEdit_SurrElNum->setGeometry(QRect(270, 360, 41, 23));
        label_SurrElSymbol = new QLabel(CrystalAdvanced);
        label_SurrElSymbol->setObjectName(QStringLiteral("label_SurrElSymbol"));
        label_SurrElSymbol->setGeometry(QRect(160, 320, 111, 16));
        label_SurrAtomList = new QLabel(CrystalAdvanced);
        label_SurrAtomList->setObjectName(QStringLiteral("label_SurrAtomList"));
        label_SurrAtomList->setGeometry(QRect(440, 310, 111, 16));
        label_SurrElNum = new QLabel(CrystalAdvanced);
        label_SurrElNum->setObjectName(QStringLiteral("label_SurrElNum"));
        label_SurrElNum->setGeometry(QRect(210, 360, 51, 16));
        label_SurrEl = new QLabel(CrystalAdvanced);
        label_SurrEl->setObjectName(QStringLiteral("label_SurrEl"));
        label_SurrEl->setGeometry(QRect(20, 340, 141, 16));
        label_goniometer = new QLabel(CrystalAdvanced);
        label_goniometer->setObjectName(QStringLiteral("label_goniometer"));
        label_goniometer->setGeometry(QRect(20, 440, 101, 16));
        label_PE = new QLabel(CrystalAdvanced);
        label_PE->setObjectName(QStringLiteral("label_PE"));
        label_PE->setGeometry(QRect(20, 180, 141, 16));
        label_FLE = new QLabel(CrystalAdvanced);
        label_FLE->setObjectName(QStringLiteral("label_FLE"));
        label_FLE->setGeometry(QRect(20, 210, 141, 16));
        comboBox_PE = new QComboBox(CrystalAdvanced);
        comboBox_PE->setObjectName(QStringLiteral("comboBox_PE"));
        comboBox_PE->setGeometry(QRect(160, 180, 371, 23));
        comboBox_FLE = new QComboBox(CrystalAdvanced);
        comboBox_FLE->setObjectName(QStringLiteral("comboBox_FLE"));
        comboBox_FLE->setGeometry(QRect(160, 210, 371, 23));
        comboBox_Surrounding = new QComboBox(CrystalAdvanced);
        comboBox_Surrounding->setObjectName(QStringLiteral("comboBox_Surrounding"));
        comboBox_Surrounding->setGeometry(QRect(160, 250, 371, 23));
        comboBox_Density = new QComboBox(CrystalAdvanced);
        comboBox_Density->setObjectName(QStringLiteral("comboBox_Density"));
        comboBox_Density->setGeometry(QRect(160, 280, 371, 23));
        label_SurrConc = new QLabel(CrystalAdvanced);
        label_SurrConc->setObjectName(QStringLiteral("label_SurrConc"));
        label_SurrConc->setGeometry(QRect(20, 340, 141, 16));
        label_polarisation4 = new QLabel(CrystalAdvanced);
        label_polarisation4->setObjectName(QStringLiteral("label_polarisation4"));
        label_polarisation4->setGeometry(QRect(20, 470, 131, 16));
        comboBox_goniometer = new QComboBox(CrystalAdvanced);
        comboBox_goniometer->setObjectName(QStringLiteral("comboBox_goniometer"));
        comboBox_goniometer->setGeometry(QRect(160, 440, 371, 23));
        comboBox_polarisation = new QComboBox(CrystalAdvanced);
        comboBox_polarisation->setObjectName(QStringLiteral("comboBox_polarisation"));
        comboBox_polarisation->setGeometry(QRect(160, 470, 371, 23));

        retranslateUi(CrystalAdvanced);

        QMetaObject::connectSlotsByName(CrystalAdvanced);
    } // setupUi

    void retranslateUi(QDialog *CrystalAdvanced)
    {
        CrystalAdvanced->setWindowTitle(QApplication::translate("CrystalAdvanced", "Advanced Crystal Parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_angleP->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The angle in degrees between the Y axis and goniometer axis in the Y plane</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_angleP->setText(QApplication::translate("CrystalAdvanced", "AngleP", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CrystalAdvanced", "OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_angleL->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The angle in degrees between the Y axis and goniometer axis in the Y plane</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_angleL->setText(QApplication::translate("CrystalAdvanced", "AngleL", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_containerType->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The way to specifiy the sample container.</p><p>Material defines the surrounding by name, and Elemental by elemental composition</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_containerType->setText(QApplication::translate("CrystalAdvanced", "Container type", Q_NULLPTR));
        comboBox_containerType->clear();
        comboBox_containerType->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "None", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "Mixture", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "Elements", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_containerMixture->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Specifies the container material by name</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_containerMixture->setText(QApplication::translate("CrystalAdvanced", "Material Mixture", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_containerThickness->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The thickness of the sample container</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_containerThickness->setText(QApplication::translate("CrystalAdvanced", "Container Thickness", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_containerDensity->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The density of the sample container</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_containerDensity->setText(QApplication::translate("CrystalAdvanced", "Container Density", Q_NULLPTR));
        label_containerParams->setText(QApplication::translate("CrystalAdvanced", "Container Parameters", Q_NULLPTR));
        label_crystalAngles->setText(QApplication::translate("CrystalAdvanced", "Crystal Angles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_containerMatEl->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Specifies the elements in the container</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_containerMatEl->setText(QApplication::translate("CrystalAdvanced", "Material Elements", Q_NULLPTR));
        label_containerNum->setText(QApplication::translate("CrystalAdvanced", "Number", Q_NULLPTR));
        label_containerEl->setText(QApplication::translate("CrystalAdvanced", "Element Symbol", Q_NULLPTR));
        pushButton_container->setText(QApplication::translate("CrystalAdvanced", "Add Element", Q_NULLPTR));
        label_atomList->setText(QApplication::translate("CrystalAdvanced", "Atom list", Q_NULLPTR));
        label_containerParams_2->setText(QApplication::translate("CrystalAdvanced", "Escape Parameters", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_calcSurrounding->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to include photoelectron entry</p><p>from the surrounding material into the crystal volume</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_calcSurrounding->setText(QApplication::translate("CrystalAdvanced", "Calculate Surrounding", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_densityDefine->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether to define the surrounding in terms of density of constituents (non-soluition based) or concentration (for solution based).</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_densityDefine->setText(QApplication::translate("CrystalAdvanced", "Define with denisty?", Q_NULLPTR));
        pushButton_SurrEl->setText(QApplication::translate("CrystalAdvanced", "Add Element", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Density->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The density of the surrounding material</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Density->setText(QApplication::translate("CrystalAdvanced", "Density", Q_NULLPTR));
        label_SurrElSymbol->setText(QApplication::translate("CrystalAdvanced", "Element Symbol", Q_NULLPTR));
        label_SurrAtomList->setText(QApplication::translate("CrystalAdvanced", "Atom list", Q_NULLPTR));
        label_SurrElNum->setText(QApplication::translate("CrystalAdvanced", "Number", Q_NULLPTR));
        label_SurrEl->setText(QApplication::translate("CrystalAdvanced", "Surrounding Elements", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_goniometer->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The orientation of the goniometer</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_goniometer->setText(QApplication::translate("CrystalAdvanced", "Goniometer axis", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_PE->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to calculate escape of photoelectrons from the crystal</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_PE->setText(QApplication::translate("CrystalAdvanced", "Photoelectron escape", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_FLE->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to include escape of fluorescent photons from the crystal. Recommended for samples with heavy metals</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_FLE->setText(QApplication::translate("CrystalAdvanced", "Fluorescent escape", Q_NULLPTR));
        comboBox_PE->clear();
        comboBox_PE->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "False", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "True", Q_NULLPTR)
        );
        comboBox_FLE->clear();
        comboBox_FLE->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "False", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "True", Q_NULLPTR)
        );
        comboBox_Surrounding->clear();
        comboBox_Surrounding->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "False", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "True", Q_NULLPTR)
        );
        comboBox_Density->clear();
        comboBox_Density->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "Yes", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "No", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_SurrConc->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>defines the concentration of elements (not including water) in the surrounding in mM</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_SurrConc->setText(QApplication::translate("CrystalAdvanced", "Surrounding Conc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_polarisation4->setToolTip(QApplication::translate("CrystalAdvanced", "<html><head/><body><p>The direction of beam polarisation</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_polarisation4->setText(QApplication::translate("CrystalAdvanced", "Polarisation direction", Q_NULLPTR));
        comboBox_goniometer->clear();
        comboBox_goniometer->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "Horizontal", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "Vertical", Q_NULLPTR)
        );
        comboBox_polarisation->clear();
        comboBox_polarisation->insertItems(0, QStringList()
         << QApplication::translate("CrystalAdvanced", "Horizontal", Q_NULLPTR)
         << QApplication::translate("CrystalAdvanced", "Vertical", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class CrystalAdvanced: public Ui_CrystalAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYSTALADVANCED_H
