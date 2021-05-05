/********************************************************************************
** Form generated from reading UI file 'crystaladvanced.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYSTALADVANCED_H
#define UI_CRYSTALADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrystalAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_crystalAngles;
    QFormLayout *formLayout;
    QLabel *label_angleP;
    QLineEdit *lineEdit_angleP;
    QLabel *label_angleL;
    QLineEdit *lineEdit_angleL;
    QLabel *label_containerParams_2;
    QFormLayout *formLayout_2;
    QLabel *label_PE;
    QComboBox *comboBox_PE;
    QLabel *label_FLE;
    QComboBox *comboBox_FLE;
    QLabel *label_calcSurrounding;
    QComboBox *comboBox_Surrounding;
    QLabel *label_densityDefine;
    QComboBox *comboBox_Density;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_SurrEl;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLabel *label_SurrElSymbol;
    QLineEdit *lineEdit_SurrElSymbol;
    QLabel *label_SurrElNum;
    QLineEdit *lineEdit_SurrElNum;
    QPushButton *pushButton_SurrEl;
    QLabel *label_SurrAtomList;
    QTextEdit *textEdit_SurrEl;
    QFormLayout *formLayout_4;
    QLabel *label_Density;
    QLineEdit *lineEdit_Density;
    QLabel *label_goniometer;
    QComboBox *comboBox_goniometer;
    QLabel *label_polarisation4;
    QComboBox *comboBox_polarisation;
    QLabel *label_containerParams;
    QFormLayout *formLayout_5;
    QLabel *label_containerType;
    QComboBox *comboBox_containerType;
    QLabel *label_containerThickness;
    QLineEdit *lineEdit_containerThickness;
    QLabel *label_containerDensity;
    QLineEdit *lineEdit_containerDensity;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_containerMatEl;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_6;
    QLabel *label_containerEl;
    QLineEdit *lineEdit_containerEl;
    QLabel *label_containerNum;
    QLineEdit *lineEdit_containerNum;
    QPushButton *pushButton_container;
    QLabel *label_atomList;
    QTextEdit *textEdit_container;
    QFormLayout *formLayout_7;
    QLabel *label_containerMixture;
    QLineEdit *lineEdit_materialMixture;
    QPushButton *pushButton;

    void setupUi(QDialog *CrystalAdvanced)
    {
        if (CrystalAdvanced->objectName().isEmpty())
            CrystalAdvanced->setObjectName(QString::fromUtf8("CrystalAdvanced"));
        CrystalAdvanced->resize(487, 550);
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
        CrystalAdvanced->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"#scrollAreaWidgetCont"
                        "ents{\n"
"background: #025;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background: #025;\n"
"}"));
        verticalLayout = new QVBoxLayout(CrystalAdvanced);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(CrystalAdvanced);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -376, 453, 877));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_crystalAngles = new QLabel(scrollAreaWidgetContents);
        label_crystalAngles->setObjectName(QString::fromUtf8("label_crystalAngles"));
        QFont font;
        font.setPointSize(12);
        font.setUnderline(true);
        label_crystalAngles->setFont(font);

        verticalLayout_2->addWidget(label_crystalAngles);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 0);
        label_angleP = new QLabel(scrollAreaWidgetContents);
        label_angleP->setObjectName(QString::fromUtf8("label_angleP"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_angleP);

        lineEdit_angleP = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_angleP->setObjectName(QString::fromUtf8("lineEdit_angleP"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_angleP);

        label_angleL = new QLabel(scrollAreaWidgetContents);
        label_angleL->setObjectName(QString::fromUtf8("label_angleL"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_angleL);

        lineEdit_angleL = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_angleL->setObjectName(QString::fromUtf8("lineEdit_angleL"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_angleL);


        verticalLayout_2->addLayout(formLayout);

        label_containerParams_2 = new QLabel(scrollAreaWidgetContents);
        label_containerParams_2->setObjectName(QString::fromUtf8("label_containerParams_2"));
        label_containerParams_2->setFont(font);

        verticalLayout_2->addWidget(label_containerParams_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_PE = new QLabel(scrollAreaWidgetContents);
        label_PE->setObjectName(QString::fromUtf8("label_PE"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_PE);

        comboBox_PE = new QComboBox(scrollAreaWidgetContents);
        comboBox_PE->addItem(QString());
        comboBox_PE->addItem(QString());
        comboBox_PE->setObjectName(QString::fromUtf8("comboBox_PE"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox_PE);

        label_FLE = new QLabel(scrollAreaWidgetContents);
        label_FLE->setObjectName(QString::fromUtf8("label_FLE"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_FLE);

        comboBox_FLE = new QComboBox(scrollAreaWidgetContents);
        comboBox_FLE->addItem(QString());
        comboBox_FLE->addItem(QString());
        comboBox_FLE->setObjectName(QString::fromUtf8("comboBox_FLE"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_FLE);

        label_calcSurrounding = new QLabel(scrollAreaWidgetContents);
        label_calcSurrounding->setObjectName(QString::fromUtf8("label_calcSurrounding"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_calcSurrounding);

        comboBox_Surrounding = new QComboBox(scrollAreaWidgetContents);
        comboBox_Surrounding->addItem(QString());
        comboBox_Surrounding->addItem(QString());
        comboBox_Surrounding->setObjectName(QString::fromUtf8("comboBox_Surrounding"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox_Surrounding);

        label_densityDefine = new QLabel(scrollAreaWidgetContents);
        label_densityDefine->setObjectName(QString::fromUtf8("label_densityDefine"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_densityDefine);

        comboBox_Density = new QComboBox(scrollAreaWidgetContents);
        comboBox_Density->addItem(QString());
        comboBox_Density->addItem(QString());
        comboBox_Density->setObjectName(QString::fromUtf8("comboBox_Density"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_Density);


        verticalLayout_2->addLayout(formLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_SurrEl = new QLabel(scrollAreaWidgetContents);
        label_SurrEl->setObjectName(QString::fromUtf8("label_SurrEl"));

        horizontalLayout_2->addWidget(label_SurrEl);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_SurrElSymbol = new QLabel(scrollAreaWidgetContents);
        label_SurrElSymbol->setObjectName(QString::fromUtf8("label_SurrElSymbol"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_SurrElSymbol);

        lineEdit_SurrElSymbol = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_SurrElSymbol->setObjectName(QString::fromUtf8("lineEdit_SurrElSymbol"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_SurrElSymbol);

        label_SurrElNum = new QLabel(scrollAreaWidgetContents);
        label_SurrElNum->setObjectName(QString::fromUtf8("label_SurrElNum"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_SurrElNum);

        lineEdit_SurrElNum = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_SurrElNum->setObjectName(QString::fromUtf8("lineEdit_SurrElNum"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_SurrElNum);


        verticalLayout_3->addLayout(formLayout_3);

        pushButton_SurrEl = new QPushButton(scrollAreaWidgetContents);
        pushButton_SurrEl->setObjectName(QString::fromUtf8("pushButton_SurrEl"));
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
        pushButton_SurrEl->setPalette(palette1);

        verticalLayout_3->addWidget(pushButton_SurrEl);

        label_SurrAtomList = new QLabel(scrollAreaWidgetContents);
        label_SurrAtomList->setObjectName(QString::fromUtf8("label_SurrAtomList"));

        verticalLayout_3->addWidget(label_SurrAtomList);

        textEdit_SurrEl = new QTextEdit(scrollAreaWidgetContents);
        textEdit_SurrEl->setObjectName(QString::fromUtf8("textEdit_SurrEl"));

        verticalLayout_3->addWidget(textEdit_SurrEl);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_Density = new QLabel(scrollAreaWidgetContents);
        label_Density->setObjectName(QString::fromUtf8("label_Density"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_Density);

        lineEdit_Density = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_Density->setObjectName(QString::fromUtf8("lineEdit_Density"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_Density);

        label_goniometer = new QLabel(scrollAreaWidgetContents);
        label_goniometer->setObjectName(QString::fromUtf8("label_goniometer"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_goniometer);

        comboBox_goniometer = new QComboBox(scrollAreaWidgetContents);
        comboBox_goniometer->addItem(QString());
        comboBox_goniometer->addItem(QString());
        comboBox_goniometer->setObjectName(QString::fromUtf8("comboBox_goniometer"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, comboBox_goniometer);

        label_polarisation4 = new QLabel(scrollAreaWidgetContents);
        label_polarisation4->setObjectName(QString::fromUtf8("label_polarisation4"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_polarisation4);

        comboBox_polarisation = new QComboBox(scrollAreaWidgetContents);
        comboBox_polarisation->addItem(QString());
        comboBox_polarisation->addItem(QString());
        comboBox_polarisation->setObjectName(QString::fromUtf8("comboBox_polarisation"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, comboBox_polarisation);


        verticalLayout_2->addLayout(formLayout_4);

        label_containerParams = new QLabel(scrollAreaWidgetContents);
        label_containerParams->setObjectName(QString::fromUtf8("label_containerParams"));
        label_containerParams->setFont(font);

        verticalLayout_2->addWidget(label_containerParams);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_containerType = new QLabel(scrollAreaWidgetContents);
        label_containerType->setObjectName(QString::fromUtf8("label_containerType"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_containerType);

        comboBox_containerType = new QComboBox(scrollAreaWidgetContents);
        comboBox_containerType->addItem(QString());
        comboBox_containerType->addItem(QString());
        comboBox_containerType->addItem(QString());
        comboBox_containerType->setObjectName(QString::fromUtf8("comboBox_containerType"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, comboBox_containerType);

        label_containerThickness = new QLabel(scrollAreaWidgetContents);
        label_containerThickness->setObjectName(QString::fromUtf8("label_containerThickness"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_containerThickness);

        lineEdit_containerThickness = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_containerThickness->setObjectName(QString::fromUtf8("lineEdit_containerThickness"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, lineEdit_containerThickness);

        label_containerDensity = new QLabel(scrollAreaWidgetContents);
        label_containerDensity->setObjectName(QString::fromUtf8("label_containerDensity"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_containerDensity);

        lineEdit_containerDensity = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_containerDensity->setObjectName(QString::fromUtf8("lineEdit_containerDensity"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, lineEdit_containerDensity);


        verticalLayout_2->addLayout(formLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 10);
        label_containerMatEl = new QLabel(scrollAreaWidgetContents);
        label_containerMatEl->setObjectName(QString::fromUtf8("label_containerMatEl"));

        horizontalLayout_3->addWidget(label_containerMatEl);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, 0);
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(-1, -1, -1, 10);
        label_containerEl = new QLabel(scrollAreaWidgetContents);
        label_containerEl->setObjectName(QString::fromUtf8("label_containerEl"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_containerEl);

        lineEdit_containerEl = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_containerEl->setObjectName(QString::fromUtf8("lineEdit_containerEl"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, lineEdit_containerEl);

        label_containerNum = new QLabel(scrollAreaWidgetContents);
        label_containerNum->setObjectName(QString::fromUtf8("label_containerNum"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_containerNum);

        lineEdit_containerNum = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_containerNum->setObjectName(QString::fromUtf8("lineEdit_containerNum"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, lineEdit_containerNum);


        verticalLayout_4->addLayout(formLayout_6);

        pushButton_container = new QPushButton(scrollAreaWidgetContents);
        pushButton_container->setObjectName(QString::fromUtf8("pushButton_container"));
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
        pushButton_container->setPalette(palette2);

        verticalLayout_4->addWidget(pushButton_container);

        label_atomList = new QLabel(scrollAreaWidgetContents);
        label_atomList->setObjectName(QString::fromUtf8("label_atomList"));

        verticalLayout_4->addWidget(label_atomList);

        textEdit_container = new QTextEdit(scrollAreaWidgetContents);
        textEdit_container->setObjectName(QString::fromUtf8("textEdit_container"));

        verticalLayout_4->addWidget(textEdit_container);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(-1, -1, -1, 10);
        label_containerMixture = new QLabel(scrollAreaWidgetContents);
        label_containerMixture->setObjectName(QString::fromUtf8("label_containerMixture"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_containerMixture);

        lineEdit_materialMixture = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_materialMixture->setObjectName(QString::fromUtf8("lineEdit_materialMixture"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, lineEdit_materialMixture);


        verticalLayout_2->addLayout(formLayout_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(CrystalAdvanced);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(136, 136, 221, 255));
        gradient18.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient18.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient18.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient18.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush31(gradient18);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush31);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(136, 136, 221, 255));
        gradient19.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient19.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient19.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient19.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush32(gradient19);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush32);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(136, 136, 221, 255));
        gradient20.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient20.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient20.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient20.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush33(gradient20);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush33);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(136, 136, 221, 255));
        gradient21.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient21.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient21.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient21.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush34(gradient21);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush34);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(136, 136, 221, 255));
        gradient22.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient22.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient22.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient22.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush35(gradient22);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush35);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(136, 136, 221, 255));
        gradient23.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient23.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient23.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient23.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush36(gradient23);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush36);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(136, 136, 221, 255));
        gradient24.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient24.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient24.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient24.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush37(gradient24);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush37);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(136, 136, 221, 255));
        gradient25.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient25.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient25.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient25.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush38(gradient25);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush38);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(136, 136, 221, 255));
        gradient26.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient26.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient26.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient26.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush39(gradient26);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush39);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush21);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton->setPalette(palette3);

        verticalLayout->addWidget(pushButton);


        retranslateUi(CrystalAdvanced);

        QMetaObject::connectSlotsByName(CrystalAdvanced);
    } // setupUi

    void retranslateUi(QDialog *CrystalAdvanced)
    {
        CrystalAdvanced->setWindowTitle(QCoreApplication::translate("CrystalAdvanced", "Advanced Crystal Parameters", nullptr));
        label_crystalAngles->setText(QCoreApplication::translate("CrystalAdvanced", "Crystal Angles", nullptr));
#if QT_CONFIG(tooltip)
        label_angleP->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The angle in degrees between the Y axis and goniometer axis in the Y plane</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_angleP->setText(QCoreApplication::translate("CrystalAdvanced", "AngleP", nullptr));
#if QT_CONFIG(tooltip)
        label_angleL->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The angle in degrees between the Y axis and goniometer axis in the Y plane</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_angleL->setText(QCoreApplication::translate("CrystalAdvanced", "AngleL", nullptr));
        label_containerParams_2->setText(QCoreApplication::translate("CrystalAdvanced", "Escape Parameters", nullptr));
#if QT_CONFIG(tooltip)
        label_PE->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to calculate escape of photoelectrons from the crystal</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_PE->setText(QCoreApplication::translate("CrystalAdvanced", "Photoelectron escape", nullptr));
        comboBox_PE->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "False", nullptr));
        comboBox_PE->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "True", nullptr));

#if QT_CONFIG(tooltip)
        label_FLE->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to include escape of fluorescent photons from the crystal. Recommended for samples with heavy metals</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_FLE->setText(QCoreApplication::translate("CrystalAdvanced", "Fluorescent escape", nullptr));
        comboBox_FLE->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "False", nullptr));
        comboBox_FLE->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "True", nullptr));

#if QT_CONFIG(tooltip)
        label_calcSurrounding->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether or not to include photoelectron entry</p><p>from the surrounding material into the crystal volume</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_calcSurrounding->setText(QCoreApplication::translate("CrystalAdvanced", "Calculate Surrounding", nullptr));
        comboBox_Surrounding->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "False", nullptr));
        comboBox_Surrounding->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "True", nullptr));

#if QT_CONFIG(tooltip)
        label_densityDefine->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Whether to define the surrounding in terms of density of constituents (non-soluition based) or concentration (for solution based).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_densityDefine->setText(QCoreApplication::translate("CrystalAdvanced", "Define with denisty?", nullptr));
        comboBox_Density->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "Yes", nullptr));
        comboBox_Density->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "No", nullptr));

        label_SurrEl->setText(QCoreApplication::translate("CrystalAdvanced", "Surrounding Elements", nullptr));
        label_SurrElSymbol->setText(QCoreApplication::translate("CrystalAdvanced", "Element Symbol", nullptr));
        label_SurrElNum->setText(QCoreApplication::translate("CrystalAdvanced", "Number", nullptr));
        pushButton_SurrEl->setText(QCoreApplication::translate("CrystalAdvanced", "Add Element", nullptr));
        label_SurrAtomList->setText(QCoreApplication::translate("CrystalAdvanced", "Atom list", nullptr));
#if QT_CONFIG(tooltip)
        label_Density->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The density of the surrounding material</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_Density->setText(QCoreApplication::translate("CrystalAdvanced", "Density", nullptr));
#if QT_CONFIG(tooltip)
        label_goniometer->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The orientation of the goniometer</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_goniometer->setText(QCoreApplication::translate("CrystalAdvanced", "Goniometer axis", nullptr));
        comboBox_goniometer->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "Horizontal", nullptr));
        comboBox_goniometer->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "Vertical", nullptr));

#if QT_CONFIG(tooltip)
        label_polarisation4->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The direction of beam polarisation</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_polarisation4->setText(QCoreApplication::translate("CrystalAdvanced", "Polarisation direction", nullptr));
        comboBox_polarisation->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "Horizontal", nullptr));
        comboBox_polarisation->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "Vertical", nullptr));

        label_containerParams->setText(QCoreApplication::translate("CrystalAdvanced", "Container Parameters", nullptr));
#if QT_CONFIG(tooltip)
        label_containerType->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The way to specifiy the sample container.</p><p>Material defines the surrounding by name, and Elemental by elemental composition</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_containerType->setText(QCoreApplication::translate("CrystalAdvanced", "Container type", nullptr));
        comboBox_containerType->setItemText(0, QCoreApplication::translate("CrystalAdvanced", "None", nullptr));
        comboBox_containerType->setItemText(1, QCoreApplication::translate("CrystalAdvanced", "Mixture", nullptr));
        comboBox_containerType->setItemText(2, QCoreApplication::translate("CrystalAdvanced", "Elements", nullptr));

#if QT_CONFIG(tooltip)
        label_containerThickness->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The thickness of the sample container</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_containerThickness->setText(QCoreApplication::translate("CrystalAdvanced", "Container Thickness", nullptr));
#if QT_CONFIG(tooltip)
        label_containerDensity->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>The density of the sample container</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_containerDensity->setText(QCoreApplication::translate("CrystalAdvanced", "Container Density", nullptr));
#if QT_CONFIG(tooltip)
        label_containerMatEl->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Specifies the elements in the container</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_containerMatEl->setText(QCoreApplication::translate("CrystalAdvanced", "Material Elements", nullptr));
        label_containerEl->setText(QCoreApplication::translate("CrystalAdvanced", "Element Symbol", nullptr));
        label_containerNum->setText(QCoreApplication::translate("CrystalAdvanced", "Number", nullptr));
        pushButton_container->setText(QCoreApplication::translate("CrystalAdvanced", "Add Element", nullptr));
        label_atomList->setText(QCoreApplication::translate("CrystalAdvanced", "Atom list", nullptr));
#if QT_CONFIG(tooltip)
        label_containerMixture->setToolTip(QCoreApplication::translate("CrystalAdvanced", "<html><head/><body><p>Specifies the container material by name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_containerMixture->setText(QCoreApplication::translate("CrystalAdvanced", "Material Mixture", nullptr));
        pushButton->setText(QCoreApplication::translate("CrystalAdvanced", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CrystalAdvanced: public Ui_CrystalAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYSTALADVANCED_H
