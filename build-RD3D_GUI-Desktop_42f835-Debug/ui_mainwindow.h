/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionAbout;
    QAction *actionClose;
    QAction *actionUser_guide;
    QAction *actionOpen_2;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabCrystal;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_CType;
    QLabel *label_Type;
    QComboBox *comboBox;
    QLabel *label_Dims;
    QLabel *label_X;
    QLineEdit *lineEdit_X;
    QLabel *label_Y;
    QLineEdit *lineEdit_Y;
    QLabel *label_Z;
    QLineEdit *lineEdit_Z;
    QLabel *label_X_2;
    QLabel *label_Y_2;
    QLabel *label_Modelfile;
    QLineEdit *lineEdit_modelfile;
    QPushButton *pushButton_browsemodel;
    QLabel *label_ppm;
    QLineEdit *lineEdit_ppm;
    QLabel *label_AbsCoef;
    QComboBox *comboBox_AbsCoef;
    QLabel *label_UnitCell;
    QLabel *label_Monomers;
    QLabel *label_Residues;
    QLineEdit *lineEdit_Monomers;
    QLineEdit *lineEdit_Residues;
    QLabel *label_heavyProt;
    QLineEdit *lineEdit_ElheavyProt;
    QLineEdit *lineEdit_a;
    QLineEdit *lineEdit_b;
    QLineEdit *lineEdit_c;
    QLabel *label_c;
    QLabel *label_b;
    QLabel *label_a;
    QLineEdit *lineEdit_alpha;
    QLabel *label_gamma;
    QLabel *label_alpha;
    QLineEdit *lineEdit_beta;
    QLabel *label_beta;
    QLineEdit *lineEdit_gamma;
    QTextEdit *textEdit_heavyProt;
    QPushButton *pushButton_heavyProt;
    QLabel *label_heavyEl;
    QLabel *label_heavyNum;
    QLineEdit *lineEdit_ElheavyProt_2;
    QLabel *label_heavyTitle;
    QTextEdit *textEdit_solventConc;
    QLabel *label_solventConc;
    QLineEdit *lineEdit_Elconc;
    QLabel *label_Solvent;
    QLabel *label_solventTitle;
    QPushButton *pushButton_solventConc;
    QLabel *label_solventEl;
    QLineEdit *lineEdit_Elsolvent;
    QLabel *label_SolventFr;
    QLineEdit *lineEdit_solventFr;
    QLabel *label_Nucleotides;
    QLabel *label_DNA;
    QLineEdit *lineEdit_DNA;
    QLabel *label_RNA;
    QLineEdit *lineEdit_RNA;
    QLabel *label_PDB;
    QLineEdit *lineEdit_PDB;
    QLabel *label_fasta;
    QLineEdit *lineEdit_fasta;
    QPushButton *pushButton_browseFasta;
    QLabel *label_carb;
    QLineEdit *lineEdit_carb;
    QLabel *label_pConc;
    QLineEdit *lineEdit_pConc;
    QLabel *label_SmallMole;
    QLabel *label_atomList;
    QLabel *label_CIF;
    QLineEdit *lineEdit_CIF;
    QPushButton *pushButton_CIF;
    QPushButton *pushButton_crystalAdvanced;
    QWidget *tabBeam;
    QLabel *label_beamType;
    QComboBox *comboBox_beamType;
    QLabel *label_FWHM;
    QLabel *label_Collimation;
    QLabel *label_collType;
    QLabel *label_collDims;
    QComboBox *comboBox_collType;
    QLabel *label_collX;
    QLabel *label_collY;
    QLineEdit *lineEdit_collX;
    QLineEdit *lineEdit_collY;
    QLabel *label_beamFile;
    QLineEdit *lineEdit_beamFile;
    QPushButton *pushButton_beamFile;
    QLineEdit *lineEdit_pxSizeX;
    QLabel *label_pxSize;
    QLabel *label_flux;
    QLineEdit *lineEdit_flux;
    QLabel *label_pulseEn;
    QLineEdit *lineEdit_pulseEn;
    QLabel *label_beamEn;
    QLineEdit *lineEdit_beamEn;
    QLabel *label_beamEnFWHM;
    QLineEdit *lineEdit_beamEnFWHM;
    QLabel *label_monochrome;
    QComboBox *comboBox_monochrome;
    QLineEdit *lineEdit_pxSizeY;
    QLabel *label_pxX;
    QLabel *label_pxY;
    QLineEdit *lineEdit_FWHMY;
    QLabel *label_FWHMX;
    QLineEdit *lineEdit_FWHMX;
    QLabel *label_FWHMY;
    QWidget *tabWedge;
    QLabel *label_startAngle;
    QLineEdit *lineEdit_startAngle;
    QLabel *label_endAngle;
    QLineEdit *lineEdit_endAngle;
    QLabel *label_expTime;
    QLabel *label_pulseLength;
    QLineEdit *lineEdit_exposureTime;
    QLabel *label_angleRes;
    QLineEdit *lineEdit_angleRes;
    QLabel *label_startOffset;
    QLineEdit *lineEdit_offsetX;
    QLabel *label_offsetX;
    QLabel *label_offsetY;
    QLineEdit *lineEdit_offsetY;
    QLabel *label_offsetZ;
    QLineEdit *lineEdit_offsetZ;
    QLabel *label_tns;
    QLabel *label_rotOffset;
    QLineEdit *lineEdit_rotOffset;
    QLineEdit *lineEdit_tnsX;
    QLineEdit *lineEdit_tnsY;
    QLabel *label_tnsZ;
    QLabel *label_tnsX;
    QLabel *label_tnsY;
    QLineEdit *lineEdit_tnsZ;
    QLabel *label_logo;
    QPushButton *pushButton_run;
    QLabel *label_SubProgram;
    QComboBox *comboBox_subprogram;
    QLabel *label_photons;
    QLineEdit *lineEdit_photons;
    QLabel *label_runs;
    QLineEdit *lineEdit_runs;
    QPushButton *pushButton_manualEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(620, 944);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(141, 0, 211, 255));
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
        QBrush brush7(QColor(0, 33, 71, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
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
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
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
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QLatin1String("QMenuBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 lightgray, stop:1 darkgray);\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"    background: #a8a8a8;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: #888888;\n"
"}"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionUser_guide = new QAction(MainWindow);
        actionUser_guide->setObjectName(QStringLiteral("actionUser_guide"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(0, 34, 85, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        centralWidget->setPalette(palette1);
        centralWidget->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
"\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px #025;\n"
"    background: #025;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #025;\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    background: #002147;\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    bord"
                        "er-bottom-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    border-top-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    border-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
""));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 250, 581, 561));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabCrystal = new QWidget();
        tabCrystal->setObjectName(QStringLiteral("tabCrystal"));
        formLayoutWidget = new QWidget(tabCrystal);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 561, 31));
        formLayout_CType = new QFormLayout(formLayoutWidget);
        formLayout_CType->setSpacing(6);
        formLayout_CType->setContentsMargins(11, 11, 11, 11);
        formLayout_CType->setObjectName(QStringLiteral("formLayout_CType"));
        formLayout_CType->setContentsMargins(0, 0, 0, 0);
        label_Type = new QLabel(formLayoutWidget);
        label_Type->setObjectName(QStringLiteral("label_Type"));

        formLayout_CType->setWidget(0, QFormLayout::LabelRole, label_Type);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_CType->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_Dims = new QLabel(tabCrystal);
        label_Dims->setObjectName(QStringLiteral("label_Dims"));
        label_Dims->setGeometry(QRect(10, 40, 70, 21));
        label_X = new QLabel(tabCrystal);
        label_X->setObjectName(QStringLiteral("label_X"));
        label_X->setGeometry(QRect(90, 40, 20, 21));
        lineEdit_X = new QLineEdit(tabCrystal);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));
        lineEdit_X->setGeometry(QRect(110, 40, 131, 23));
        label_Y = new QLabel(tabCrystal);
        label_Y->setObjectName(QStringLiteral("label_Y"));
        label_Y->setGeometry(QRect(250, 40, 20, 20));
        lineEdit_Y = new QLineEdit(tabCrystal);
        lineEdit_Y->setObjectName(QStringLiteral("lineEdit_Y"));
        lineEdit_Y->setGeometry(QRect(270, 40, 121, 23));
        label_Z = new QLabel(tabCrystal);
        label_Z->setObjectName(QStringLiteral("label_Z"));
        label_Z->setGeometry(QRect(410, 40, 20, 20));
        lineEdit_Z = new QLineEdit(tabCrystal);
        lineEdit_Z->setObjectName(QStringLiteral("lineEdit_Z"));
        lineEdit_Z->setGeometry(QRect(440, 40, 131, 23));
        label_X_2 = new QLabel(tabCrystal);
        label_X_2->setObjectName(QStringLiteral("label_X_2"));
        label_X_2->setGeometry(QRect(90, 40, 20, 20));
        label_Y_2 = new QLabel(tabCrystal);
        label_Y_2->setObjectName(QStringLiteral("label_Y_2"));
        label_Y_2->setGeometry(QRect(250, 40, 20, 21));
        label_Modelfile = new QLabel(tabCrystal);
        label_Modelfile->setObjectName(QStringLiteral("label_Modelfile"));
        label_Modelfile->setGeometry(QRect(10, 40, 70, 21));
        lineEdit_modelfile = new QLineEdit(tabCrystal);
        lineEdit_modelfile->setObjectName(QStringLiteral("lineEdit_modelfile"));
        lineEdit_modelfile->setGeometry(QRect(110, 40, 371, 23));
        pushButton_browsemodel = new QPushButton(tabCrystal);
        pushButton_browsemodel->setObjectName(QStringLiteral("pushButton_browsemodel"));
        pushButton_browsemodel->setGeometry(QRect(490, 40, 80, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(136, 136, 221, 255));
        gradient.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush10(gradient);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(170, 127, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(127, 63, 255, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(42, 0, 127, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(56, 0, 170, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(136, 136, 221, 255));
        gradient1.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient1.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient1.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient1.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush15(gradient1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush15);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(136, 136, 221, 255));
        gradient2.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient2.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient2.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient2.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush16(gradient2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(136, 136, 221, 255));
        gradient3.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient3.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient3.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient3.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush17(gradient3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(136, 136, 221, 255));
        gradient4.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient4.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient4.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient4.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush18(gradient4);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush18);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(136, 136, 221, 255));
        gradient5.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient5.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient5.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient5.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush19(gradient5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(136, 136, 221, 255));
        gradient6.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient6.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient6.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient6.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush20(gradient6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(136, 136, 221, 255));
        gradient7.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient7.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient7.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient7.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush21(gradient7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush21);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(136, 136, 221, 255));
        gradient8.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient8.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient8.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient8.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush22(gradient8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush23(QColor(85, 0, 255, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_browsemodel->setPalette(palette2);
        label_ppm = new QLabel(tabCrystal);
        label_ppm->setObjectName(QStringLiteral("label_ppm"));
        label_ppm->setGeometry(QRect(10, 70, 111, 16));
        lineEdit_ppm = new QLineEdit(tabCrystal);
        lineEdit_ppm->setObjectName(QStringLiteral("lineEdit_ppm"));
        lineEdit_ppm->setGeometry(QRect(120, 70, 451, 23));
        label_AbsCoef = new QLabel(tabCrystal);
        label_AbsCoef->setObjectName(QStringLiteral("label_AbsCoef"));
        label_AbsCoef->setGeometry(QRect(10, 100, 81, 16));
        comboBox_AbsCoef = new QComboBox(tabCrystal);
        comboBox_AbsCoef->setObjectName(QStringLiteral("comboBox_AbsCoef"));
        comboBox_AbsCoef->setGeometry(QRect(90, 100, 481, 23));
        label_UnitCell = new QLabel(tabCrystal);
        label_UnitCell->setObjectName(QStringLiteral("label_UnitCell"));
        label_UnitCell->setGeometry(QRect(10, 130, 81, 16));
        label_Monomers = new QLabel(tabCrystal);
        label_Monomers->setObjectName(QStringLiteral("label_Monomers"));
        label_Monomers->setGeometry(QRect(10, 160, 91, 16));
        label_Residues = new QLabel(tabCrystal);
        label_Residues->setObjectName(QStringLiteral("label_Residues"));
        label_Residues->setGeometry(QRect(10, 190, 171, 16));
#ifndef QT_NO_TOOLTIP
        label_Residues->setToolTip(QStringLiteral("<html><head/><body><p>The number of amino acid residues per monomer</p></body></html>"));
#endif // QT_NO_TOOLTIP
        lineEdit_Monomers = new QLineEdit(tabCrystal);
        lineEdit_Monomers->setObjectName(QStringLiteral("lineEdit_Monomers"));
        lineEdit_Monomers->setGeometry(QRect(100, 160, 471, 23));
        lineEdit_Residues = new QLineEdit(tabCrystal);
        lineEdit_Residues->setObjectName(QStringLiteral("lineEdit_Residues"));
        lineEdit_Residues->setGeometry(QRect(180, 190, 391, 23));
        label_heavyProt = new QLabel(tabCrystal);
        label_heavyProt->setObjectName(QStringLiteral("label_heavyProt"));
        label_heavyProt->setGeometry(QRect(10, 250, 171, 16));
        lineEdit_ElheavyProt = new QLineEdit(tabCrystal);
        lineEdit_ElheavyProt->setObjectName(QStringLiteral("lineEdit_ElheavyProt"));
        lineEdit_ElheavyProt->setGeometry(QRect(300, 230, 41, 23));
        lineEdit_a = new QLineEdit(tabCrystal);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(120, 130, 51, 21));
        lineEdit_b = new QLineEdit(tabCrystal);
        lineEdit_b->setObjectName(QStringLiteral("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(200, 130, 51, 23));
        lineEdit_c = new QLineEdit(tabCrystal);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(280, 130, 51, 23));
        label_c = new QLabel(tabCrystal);
        label_c->setObjectName(QStringLiteral("label_c"));
        label_c->setGeometry(QRect(260, 130, 20, 20));
        label_b = new QLabel(tabCrystal);
        label_b->setObjectName(QStringLiteral("label_b"));
        label_b->setGeometry(QRect(180, 130, 20, 20));
        label_a = new QLabel(tabCrystal);
        label_a->setObjectName(QStringLiteral("label_a"));
        label_a->setGeometry(QRect(100, 130, 20, 21));
        lineEdit_alpha = new QLineEdit(tabCrystal);
        lineEdit_alpha->setObjectName(QStringLiteral("lineEdit_alpha"));
        lineEdit_alpha->setGeometry(QRect(360, 130, 51, 23));
        label_gamma = new QLabel(tabCrystal);
        label_gamma->setObjectName(QStringLiteral("label_gamma"));
        label_gamma->setGeometry(QRect(500, 130, 20, 20));
        label_alpha = new QLabel(tabCrystal);
        label_alpha->setObjectName(QStringLiteral("label_alpha"));
        label_alpha->setGeometry(QRect(340, 130, 20, 21));
        lineEdit_beta = new QLineEdit(tabCrystal);
        lineEdit_beta->setObjectName(QStringLiteral("lineEdit_beta"));
        lineEdit_beta->setGeometry(QRect(440, 130, 51, 23));
        label_beta = new QLabel(tabCrystal);
        label_beta->setObjectName(QStringLiteral("label_beta"));
        label_beta->setGeometry(QRect(420, 130, 20, 20));
        lineEdit_gamma = new QLineEdit(tabCrystal);
        lineEdit_gamma->setObjectName(QStringLiteral("lineEdit_gamma"));
        lineEdit_gamma->setGeometry(QRect(520, 130, 51, 23));
        textEdit_heavyProt = new QTextEdit(tabCrystal);
        textEdit_heavyProt->setObjectName(QStringLiteral("textEdit_heavyProt"));
        textEdit_heavyProt->setGeometry(QRect(450, 240, 121, 61));
        pushButton_heavyProt = new QPushButton(tabCrystal);
        pushButton_heavyProt->setObjectName(QStringLiteral("pushButton_heavyProt"));
        pushButton_heavyProt->setGeometry(QRect(350, 230, 91, 71));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient9(0, 0, 0, 1);
        gradient9.setSpread(QGradient::PadSpread);
        gradient9.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient9.setColorAt(0, QColor(136, 136, 221, 255));
        gradient9.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient9.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient9.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient9.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush24(gradient9);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush24);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient10(0, 0, 0, 1);
        gradient10.setSpread(QGradient::PadSpread);
        gradient10.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient10.setColorAt(0, QColor(136, 136, 221, 255));
        gradient10.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient10.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient10.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient10.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush25(gradient10);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush25);
        QLinearGradient gradient11(0, 0, 0, 1);
        gradient11.setSpread(QGradient::PadSpread);
        gradient11.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient11.setColorAt(0, QColor(136, 136, 221, 255));
        gradient11.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient11.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient11.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient11.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush26(gradient11);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush26);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient12(0, 0, 0, 1);
        gradient12.setSpread(QGradient::PadSpread);
        gradient12.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient12.setColorAt(0, QColor(136, 136, 221, 255));
        gradient12.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient12.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient12.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient12.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush27(gradient12);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush27);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient13(0, 0, 0, 1);
        gradient13.setSpread(QGradient::PadSpread);
        gradient13.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient13.setColorAt(0, QColor(136, 136, 221, 255));
        gradient13.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient13.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient13.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient13.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush28(gradient13);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush28);
        QLinearGradient gradient14(0, 0, 0, 1);
        gradient14.setSpread(QGradient::PadSpread);
        gradient14.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient14.setColorAt(0, QColor(136, 136, 221, 255));
        gradient14.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient14.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient14.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient14.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush29(gradient14);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush29);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient15(0, 0, 0, 1);
        gradient15.setSpread(QGradient::PadSpread);
        gradient15.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient15.setColorAt(0, QColor(136, 136, 221, 255));
        gradient15.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient15.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient15.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient15.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush30(gradient15);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush30);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient16(0, 0, 0, 1);
        gradient16.setSpread(QGradient::PadSpread);
        gradient16.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient16.setColorAt(0, QColor(136, 136, 221, 255));
        gradient16.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient16.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient16.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient16.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush31(gradient16);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush31);
        QLinearGradient gradient17(0, 0, 0, 1);
        gradient17.setSpread(QGradient::PadSpread);
        gradient17.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient17.setColorAt(0, QColor(136, 136, 221, 255));
        gradient17.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient17.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient17.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient17.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush32(gradient17);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush32);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_heavyProt->setPalette(palette3);
        label_heavyEl = new QLabel(tabCrystal);
        label_heavyEl->setObjectName(QStringLiteral("label_heavyEl"));
        label_heavyEl->setGeometry(QRect(190, 230, 111, 16));
        label_heavyNum = new QLabel(tabCrystal);
        label_heavyNum->setObjectName(QStringLiteral("label_heavyNum"));
        label_heavyNum->setGeometry(QRect(240, 270, 51, 16));
        lineEdit_ElheavyProt_2 = new QLineEdit(tabCrystal);
        lineEdit_ElheavyProt_2->setObjectName(QStringLiteral("lineEdit_ElheavyProt_2"));
        lineEdit_ElheavyProt_2->setGeometry(QRect(300, 270, 41, 23));
        label_heavyTitle = new QLabel(tabCrystal);
        label_heavyTitle->setObjectName(QStringLiteral("label_heavyTitle"));
        label_heavyTitle->setGeometry(QRect(460, 220, 111, 16));
        textEdit_solventConc = new QTextEdit(tabCrystal);
        textEdit_solventConc->setObjectName(QStringLiteral("textEdit_solventConc"));
        textEdit_solventConc->setGeometry(QRect(450, 320, 121, 61));
        label_solventConc = new QLabel(tabCrystal);
        label_solventConc->setObjectName(QStringLiteral("label_solventConc"));
        label_solventConc->setGeometry(QRect(200, 350, 91, 16));
        lineEdit_Elconc = new QLineEdit(tabCrystal);
        lineEdit_Elconc->setObjectName(QStringLiteral("lineEdit_Elconc"));
        lineEdit_Elconc->setGeometry(QRect(300, 350, 41, 23));
        label_Solvent = new QLabel(tabCrystal);
        label_Solvent->setObjectName(QStringLiteral("label_Solvent"));
        label_Solvent->setGeometry(QRect(10, 330, 171, 16));
        label_solventTitle = new QLabel(tabCrystal);
        label_solventTitle->setObjectName(QStringLiteral("label_solventTitle"));
        label_solventTitle->setGeometry(QRect(460, 300, 111, 16));
        pushButton_solventConc = new QPushButton(tabCrystal);
        pushButton_solventConc->setObjectName(QStringLiteral("pushButton_solventConc"));
        pushButton_solventConc->setGeometry(QRect(350, 310, 91, 71));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(136, 136, 221, 255));
        gradient18.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient18.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient18.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient18.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush33(gradient18);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush33);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(136, 136, 221, 255));
        gradient19.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient19.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient19.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient19.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush34(gradient19);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush34);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(136, 136, 221, 255));
        gradient20.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient20.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient20.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient20.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush35(gradient20);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush35);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(136, 136, 221, 255));
        gradient21.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient21.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient21.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient21.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush36(gradient21);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush36);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(136, 136, 221, 255));
        gradient22.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient22.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient22.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient22.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush37(gradient22);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush37);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(136, 136, 221, 255));
        gradient23.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient23.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient23.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient23.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush38(gradient23);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush38);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(136, 136, 221, 255));
        gradient24.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient24.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient24.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient24.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush39(gradient24);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush39);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(136, 136, 221, 255));
        gradient25.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient25.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient25.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient25.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush40(gradient25);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush40);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(136, 136, 221, 255));
        gradient26.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient26.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient26.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient26.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush41(gradient26);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush41);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_solventConc->setPalette(palette4);
        label_solventEl = new QLabel(tabCrystal);
        label_solventEl->setObjectName(QStringLiteral("label_solventEl"));
        label_solventEl->setGeometry(QRect(190, 310, 111, 16));
        lineEdit_Elsolvent = new QLineEdit(tabCrystal);
        lineEdit_Elsolvent->setObjectName(QStringLiteral("lineEdit_Elsolvent"));
        lineEdit_Elsolvent->setGeometry(QRect(300, 310, 41, 23));
        label_SolventFr = new QLabel(tabCrystal);
        label_SolventFr->setObjectName(QStringLiteral("label_SolventFr"));
        label_SolventFr->setGeometry(QRect(10, 400, 101, 16));
        lineEdit_solventFr = new QLineEdit(tabCrystal);
        lineEdit_solventFr->setObjectName(QStringLiteral("lineEdit_solventFr"));
        lineEdit_solventFr->setGeometry(QRect(110, 400, 461, 23));
        label_Nucleotides = new QLabel(tabCrystal);
        label_Nucleotides->setObjectName(QStringLiteral("label_Nucleotides"));
        label_Nucleotides->setGeometry(QRect(10, 440, 191, 16));
        label_DNA = new QLabel(tabCrystal);
        label_DNA->setObjectName(QStringLiteral("label_DNA"));
        label_DNA->setGeometry(QRect(190, 440, 59, 15));
        lineEdit_DNA = new QLineEdit(tabCrystal);
        lineEdit_DNA->setObjectName(QStringLiteral("lineEdit_DNA"));
        lineEdit_DNA->setGeometry(QRect(230, 440, 141, 23));
        label_RNA = new QLabel(tabCrystal);
        label_RNA->setObjectName(QStringLiteral("label_RNA"));
        label_RNA->setGeometry(QRect(390, 440, 59, 15));
        lineEdit_RNA = new QLineEdit(tabCrystal);
        lineEdit_RNA->setObjectName(QStringLiteral("lineEdit_RNA"));
        lineEdit_RNA->setGeometry(QRect(430, 440, 141, 23));
        label_PDB = new QLabel(tabCrystal);
        label_PDB->setObjectName(QStringLiteral("label_PDB"));
        label_PDB->setGeometry(QRect(10, 130, 91, 16));
        lineEdit_PDB = new QLineEdit(tabCrystal);
        lineEdit_PDB->setObjectName(QStringLiteral("lineEdit_PDB"));
        lineEdit_PDB->setGeometry(QRect(100, 130, 471, 23));
        label_fasta = new QLabel(tabCrystal);
        label_fasta->setObjectName(QStringLiteral("label_fasta"));
        label_fasta->setGeometry(QRect(10, 190, 91, 16));
        lineEdit_fasta = new QLineEdit(tabCrystal);
        lineEdit_fasta->setObjectName(QStringLiteral("lineEdit_fasta"));
        lineEdit_fasta->setGeometry(QRect(80, 190, 381, 23));
        pushButton_browseFasta = new QPushButton(tabCrystal);
        pushButton_browseFasta->setObjectName(QStringLiteral("pushButton_browseFasta"));
        pushButton_browseFasta->setGeometry(QRect(490, 190, 80, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient27(0, 0, 0, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(136, 136, 221, 255));
        gradient27.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient27.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient27.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient27.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush42(gradient27);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush42);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient28(0, 0, 0, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(136, 136, 221, 255));
        gradient28.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient28.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient28.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient28.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush43(gradient28);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush43);
        QLinearGradient gradient29(0, 0, 0, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(136, 136, 221, 255));
        gradient29.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient29.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient29.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient29.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush44(gradient29);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush44);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient30(0, 0, 0, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(136, 136, 221, 255));
        gradient30.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient30.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient30.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient30.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush45(gradient30);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush45);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient31(0, 0, 0, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(136, 136, 221, 255));
        gradient31.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient31.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient31.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient31.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush46(gradient31);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush46);
        QLinearGradient gradient32(0, 0, 0, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(136, 136, 221, 255));
        gradient32.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient32.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient32.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient32.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush47(gradient32);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush47);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient33(0, 0, 0, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(136, 136, 221, 255));
        gradient33.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient33.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient33.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient33.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush48(gradient33);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush48);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient34(0, 0, 0, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(136, 136, 221, 255));
        gradient34.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient34.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient34.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient34.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush49(gradient34);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush49);
        QLinearGradient gradient35(0, 0, 0, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(136, 136, 221, 255));
        gradient35.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient35.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient35.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient35.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush50(gradient35);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush50);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_browseFasta->setPalette(palette5);
        label_carb = new QLabel(tabCrystal);
        label_carb->setObjectName(QStringLiteral("label_carb"));
        label_carb->setGeometry(QRect(10, 470, 211, 16));
        lineEdit_carb = new QLineEdit(tabCrystal);
        lineEdit_carb->setObjectName(QStringLiteral("lineEdit_carb"));
        lineEdit_carb->setGeometry(QRect(230, 470, 341, 23));
        label_pConc = new QLabel(tabCrystal);
        label_pConc->setObjectName(QStringLiteral("label_pConc"));
        label_pConc->setGeometry(QRect(10, 160, 91, 16));
        lineEdit_pConc = new QLineEdit(tabCrystal);
        lineEdit_pConc->setObjectName(QStringLiteral("lineEdit_pConc"));
        lineEdit_pConc->setGeometry(QRect(100, 160, 471, 23));
        label_SmallMole = new QLabel(tabCrystal);
        label_SmallMole->setObjectName(QStringLiteral("label_SmallMole"));
        label_SmallMole->setGeometry(QRect(10, 250, 171, 16));
        label_atomList = new QLabel(tabCrystal);
        label_atomList->setObjectName(QStringLiteral("label_atomList"));
        label_atomList->setGeometry(QRect(460, 220, 111, 16));
        label_CIF = new QLabel(tabCrystal);
        label_CIF->setObjectName(QStringLiteral("label_CIF"));
        label_CIF->setGeometry(QRect(10, 130, 91, 16));
        lineEdit_CIF = new QLineEdit(tabCrystal);
        lineEdit_CIF->setObjectName(QStringLiteral("lineEdit_CIF"));
        lineEdit_CIF->setGeometry(QRect(100, 130, 381, 23));
        pushButton_CIF = new QPushButton(tabCrystal);
        pushButton_CIF->setObjectName(QStringLiteral("pushButton_CIF"));
        pushButton_CIF->setGeometry(QRect(490, 130, 80, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient36(0, 0, 0, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(136, 136, 221, 255));
        gradient36.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient36.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient36.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient36.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush51(gradient36);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush51);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient37(0, 0, 0, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(136, 136, 221, 255));
        gradient37.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient37.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient37.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient37.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush52(gradient37);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush52);
        QLinearGradient gradient38(0, 0, 0, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(136, 136, 221, 255));
        gradient38.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient38.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient38.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient38.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush53(gradient38);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush53);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient39(0, 0, 0, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(136, 136, 221, 255));
        gradient39.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient39.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient39.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient39.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush54(gradient39);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush54);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient40(0, 0, 0, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(136, 136, 221, 255));
        gradient40.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient40.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient40.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient40.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush55(gradient40);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush55);
        QLinearGradient gradient41(0, 0, 0, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(136, 136, 221, 255));
        gradient41.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient41.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient41.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient41.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush56(gradient41);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient42(0, 0, 0, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(136, 136, 221, 255));
        gradient42.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient42.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient42.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient42.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush57(gradient42);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush57);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient43(0, 0, 0, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(136, 136, 221, 255));
        gradient43.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient43.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient43.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient43.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush58(gradient43);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush58);
        QLinearGradient gradient44(0, 0, 0, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(136, 136, 221, 255));
        gradient44.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient44.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient44.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient44.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush59(gradient44);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush59);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_CIF->setPalette(palette6);
        pushButton_crystalAdvanced = new QPushButton(tabCrystal);
        pushButton_crystalAdvanced->setObjectName(QStringLiteral("pushButton_crystalAdvanced"));
        pushButton_crystalAdvanced->setGeometry(QRect(200, 500, 161, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient45(0, 0, 0, 1);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(136, 136, 221, 255));
        gradient45.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient45.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient45.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient45.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush60(gradient45);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush60);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient46(0, 0, 0, 1);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(0, QColor(136, 136, 221, 255));
        gradient46.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient46.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient46.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient46.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush61(gradient46);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush61);
        QLinearGradient gradient47(0, 0, 0, 1);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(0, QColor(136, 136, 221, 255));
        gradient47.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient47.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient47.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient47.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush62(gradient47);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush62);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient48(0, 0, 0, 1);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(136, 136, 221, 255));
        gradient48.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient48.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient48.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient48.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush63(gradient48);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush63);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient49(0, 0, 0, 1);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(0, QColor(136, 136, 221, 255));
        gradient49.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient49.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient49.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient49.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush64(gradient49);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush64);
        QLinearGradient gradient50(0, 0, 0, 1);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(136, 136, 221, 255));
        gradient50.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient50.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient50.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient50.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush65(gradient50);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush65);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient51(0, 0, 0, 1);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(136, 136, 221, 255));
        gradient51.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient51.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient51.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient51.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush66(gradient51);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient52(0, 0, 0, 1);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(0, QColor(136, 136, 221, 255));
        gradient52.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient52.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient52.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient52.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush67(gradient52);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush67);
        QLinearGradient gradient53(0, 0, 0, 1);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(0, QColor(136, 136, 221, 255));
        gradient53.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient53.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient53.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient53.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush68(gradient53);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush68);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_crystalAdvanced->setPalette(palette7);
        tabWidget->addTab(tabCrystal, QString());
        tabBeam = new QWidget();
        tabBeam->setObjectName(QStringLiteral("tabBeam"));
        label_beamType = new QLabel(tabBeam);
        label_beamType->setObjectName(QStringLiteral("label_beamType"));
        label_beamType->setGeometry(QRect(10, 10, 76, 23));
        comboBox_beamType = new QComboBox(tabBeam);
        comboBox_beamType->setObjectName(QStringLiteral("comboBox_beamType"));
        comboBox_beamType->setGeometry(QRect(98, 10, 471, 23));
        label_FWHM = new QLabel(tabBeam);
        label_FWHM->setObjectName(QStringLiteral("label_FWHM"));
        label_FWHM->setGeometry(QRect(10, 40, 76, 23));
        label_Collimation = new QLabel(tabBeam);
        label_Collimation->setObjectName(QStringLiteral("label_Collimation"));
        label_Collimation->setGeometry(QRect(10, 90, 76, 23));
        label_collType = new QLabel(tabBeam);
        label_collType->setObjectName(QStringLiteral("label_collType"));
        label_collType->setGeometry(QRect(90, 70, 76, 23));
        label_collDims = new QLabel(tabBeam);
        label_collDims->setObjectName(QStringLiteral("label_collDims"));
        label_collDims->setGeometry(QRect(90, 100, 76, 23));
        comboBox_collType = new QComboBox(tabBeam);
        comboBox_collType->setObjectName(QStringLiteral("comboBox_collType"));
        comboBox_collType->setGeometry(QRect(180, 70, 391, 23));
        label_collX = new QLabel(tabBeam);
        label_collX->setObjectName(QStringLiteral("label_collX"));
        label_collX->setGeometry(QRect(180, 100, 16, 23));
        label_collY = new QLabel(tabBeam);
        label_collY->setObjectName(QStringLiteral("label_collY"));
        label_collY->setGeometry(QRect(380, 100, 16, 23));
        lineEdit_collX = new QLineEdit(tabBeam);
        lineEdit_collX->setObjectName(QStringLiteral("lineEdit_collX"));
        lineEdit_collX->setGeometry(QRect(200, 100, 151, 23));
        lineEdit_collY = new QLineEdit(tabBeam);
        lineEdit_collY->setObjectName(QStringLiteral("lineEdit_collY"));
        lineEdit_collY->setGeometry(QRect(410, 100, 151, 23));
        label_beamFile = new QLabel(tabBeam);
        label_beamFile->setObjectName(QStringLiteral("label_beamFile"));
        label_beamFile->setGeometry(QRect(10, 40, 76, 23));
        lineEdit_beamFile = new QLineEdit(tabBeam);
        lineEdit_beamFile->setObjectName(QStringLiteral("lineEdit_beamFile"));
        lineEdit_beamFile->setGeometry(QRect(100, 40, 381, 23));
        pushButton_beamFile = new QPushButton(tabBeam);
        pushButton_beamFile->setObjectName(QStringLiteral("pushButton_beamFile"));
        pushButton_beamFile->setGeometry(QRect(490, 40, 80, 23));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient54(0, 0, 0, 1);
        gradient54.setSpread(QGradient::PadSpread);
        gradient54.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient54.setColorAt(0, QColor(136, 136, 221, 255));
        gradient54.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient54.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient54.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient54.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush69(gradient54);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush69);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient55(0, 0, 0, 1);
        gradient55.setSpread(QGradient::PadSpread);
        gradient55.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient55.setColorAt(0, QColor(136, 136, 221, 255));
        gradient55.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient55.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient55.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient55.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush70(gradient55);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush70);
        QLinearGradient gradient56(0, 0, 0, 1);
        gradient56.setSpread(QGradient::PadSpread);
        gradient56.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient56.setColorAt(0, QColor(136, 136, 221, 255));
        gradient56.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient56.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient56.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient56.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush71(gradient56);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush71);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient57(0, 0, 0, 1);
        gradient57.setSpread(QGradient::PadSpread);
        gradient57.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient57.setColorAt(0, QColor(136, 136, 221, 255));
        gradient57.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient57.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient57.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient57.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush72(gradient57);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush72);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient58(0, 0, 0, 1);
        gradient58.setSpread(QGradient::PadSpread);
        gradient58.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient58.setColorAt(0, QColor(136, 136, 221, 255));
        gradient58.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient58.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient58.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient58.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush73(gradient58);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush73);
        QLinearGradient gradient59(0, 0, 0, 1);
        gradient59.setSpread(QGradient::PadSpread);
        gradient59.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient59.setColorAt(0, QColor(136, 136, 221, 255));
        gradient59.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient59.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient59.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient59.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush74(gradient59);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush74);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient60(0, 0, 0, 1);
        gradient60.setSpread(QGradient::PadSpread);
        gradient60.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient60.setColorAt(0, QColor(136, 136, 221, 255));
        gradient60.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient60.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient60.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient60.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush75(gradient60);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush75);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient61(0, 0, 0, 1);
        gradient61.setSpread(QGradient::PadSpread);
        gradient61.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient61.setColorAt(0, QColor(136, 136, 221, 255));
        gradient61.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient61.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient61.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient61.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush76(gradient61);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush76);
        QLinearGradient gradient62(0, 0, 0, 1);
        gradient62.setSpread(QGradient::PadSpread);
        gradient62.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient62.setColorAt(0, QColor(136, 136, 221, 255));
        gradient62.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient62.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient62.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient62.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush77(gradient62);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush77);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_beamFile->setPalette(palette8);
        lineEdit_pxSizeX = new QLineEdit(tabBeam);
        lineEdit_pxSizeX->setObjectName(QStringLiteral("lineEdit_pxSizeX"));
        lineEdit_pxSizeX->setGeometry(QRect(120, 80, 201, 23));
        label_pxSize = new QLabel(tabBeam);
        label_pxSize->setObjectName(QStringLiteral("label_pxSize"));
        label_pxSize->setGeometry(QRect(10, 80, 76, 23));
        label_flux = new QLabel(tabBeam);
        label_flux->setObjectName(QStringLiteral("label_flux"));
        label_flux->setGeometry(QRect(10, 140, 76, 23));
        lineEdit_flux = new QLineEdit(tabBeam);
        lineEdit_flux->setObjectName(QStringLiteral("lineEdit_flux"));
        lineEdit_flux->setGeometry(QRect(100, 140, 471, 23));
        label_pulseEn = new QLabel(tabBeam);
        label_pulseEn->setObjectName(QStringLiteral("label_pulseEn"));
        label_pulseEn->setGeometry(QRect(10, 140, 81, 23));
        lineEdit_pulseEn = new QLineEdit(tabBeam);
        lineEdit_pulseEn->setObjectName(QStringLiteral("lineEdit_pulseEn"));
        lineEdit_pulseEn->setGeometry(QRect(100, 140, 471, 23));
        label_beamEn = new QLabel(tabBeam);
        label_beamEn->setObjectName(QStringLiteral("label_beamEn"));
        label_beamEn->setGeometry(QRect(10, 180, 81, 23));
        lineEdit_beamEn = new QLineEdit(tabBeam);
        lineEdit_beamEn->setObjectName(QStringLiteral("lineEdit_beamEn"));
        lineEdit_beamEn->setGeometry(QRect(100, 180, 471, 23));
        label_beamEnFWHM = new QLabel(tabBeam);
        label_beamEnFWHM->setObjectName(QStringLiteral("label_beamEnFWHM"));
        label_beamEnFWHM->setGeometry(QRect(10, 240, 91, 23));
        lineEdit_beamEnFWHM = new QLineEdit(tabBeam);
        lineEdit_beamEnFWHM->setObjectName(QStringLiteral("lineEdit_beamEnFWHM"));
        lineEdit_beamEnFWHM->setGeometry(QRect(100, 240, 471, 23));
        label_monochrome = new QLabel(tabBeam);
        label_monochrome->setObjectName(QStringLiteral("label_monochrome"));
        label_monochrome->setGeometry(QRect(10, 210, 141, 23));
        comboBox_monochrome = new QComboBox(tabBeam);
        comboBox_monochrome->setObjectName(QStringLiteral("comboBox_monochrome"));
        comboBox_monochrome->setGeometry(QRect(150, 210, 421, 23));
        lineEdit_pxSizeY = new QLineEdit(tabBeam);
        lineEdit_pxSizeY->setObjectName(QStringLiteral("lineEdit_pxSizeY"));
        lineEdit_pxSizeY->setGeometry(QRect(370, 80, 201, 23));
        label_pxX = new QLabel(tabBeam);
        label_pxX->setObjectName(QStringLiteral("label_pxX"));
        label_pxX->setGeometry(QRect(100, 80, 16, 23));
        label_pxY = new QLabel(tabBeam);
        label_pxY->setObjectName(QStringLiteral("label_pxY"));
        label_pxY->setGeometry(QRect(350, 80, 16, 23));
        lineEdit_FWHMY = new QLineEdit(tabBeam);
        lineEdit_FWHMY->setObjectName(QStringLiteral("lineEdit_FWHMY"));
        lineEdit_FWHMY->setGeometry(QRect(370, 40, 201, 23));
        label_FWHMX = new QLabel(tabBeam);
        label_FWHMX->setObjectName(QStringLiteral("label_FWHMX"));
        label_FWHMX->setGeometry(QRect(100, 40, 16, 23));
        lineEdit_FWHMX = new QLineEdit(tabBeam);
        lineEdit_FWHMX->setObjectName(QStringLiteral("lineEdit_FWHMX"));
        lineEdit_FWHMX->setGeometry(QRect(120, 40, 201, 23));
        label_FWHMY = new QLabel(tabBeam);
        label_FWHMY->setObjectName(QStringLiteral("label_FWHMY"));
        label_FWHMY->setGeometry(QRect(350, 40, 16, 23));
        tabWidget->addTab(tabBeam, QString());
        tabWedge = new QWidget();
        tabWedge->setObjectName(QStringLiteral("tabWedge"));
        label_startAngle = new QLabel(tabWedge);
        label_startAngle->setObjectName(QStringLiteral("label_startAngle"));
        label_startAngle->setGeometry(QRect(10, 20, 71, 16));
        lineEdit_startAngle = new QLineEdit(tabWedge);
        lineEdit_startAngle->setObjectName(QStringLiteral("lineEdit_startAngle"));
        lineEdit_startAngle->setGeometry(QRect(160, 20, 161, 23));
        label_endAngle = new QLabel(tabWedge);
        label_endAngle->setObjectName(QStringLiteral("label_endAngle"));
        label_endAngle->setGeometry(QRect(330, 20, 71, 16));
        lineEdit_endAngle = new QLineEdit(tabWedge);
        lineEdit_endAngle->setObjectName(QStringLiteral("lineEdit_endAngle"));
        lineEdit_endAngle->setGeometry(QRect(410, 20, 161, 23));
        label_expTime = new QLabel(tabWedge);
        label_expTime->setObjectName(QStringLiteral("label_expTime"));
        label_expTime->setGeometry(QRect(10, 60, 91, 16));
        label_pulseLength = new QLabel(tabWedge);
        label_pulseLength->setObjectName(QStringLiteral("label_pulseLength"));
        label_pulseLength->setGeometry(QRect(10, 60, 91, 16));
        lineEdit_exposureTime = new QLineEdit(tabWedge);
        lineEdit_exposureTime->setObjectName(QStringLiteral("lineEdit_exposureTime"));
        lineEdit_exposureTime->setGeometry(QRect(160, 60, 411, 23));
        label_angleRes = new QLabel(tabWedge);
        label_angleRes->setObjectName(QStringLiteral("label_angleRes"));
        label_angleRes->setGeometry(QRect(10, 100, 121, 16));
        lineEdit_angleRes = new QLineEdit(tabWedge);
        lineEdit_angleRes->setObjectName(QStringLiteral("lineEdit_angleRes"));
        lineEdit_angleRes->setGeometry(QRect(160, 100, 411, 23));
        label_startOffset = new QLabel(tabWedge);
        label_startOffset->setObjectName(QStringLiteral("label_startOffset"));
        label_startOffset->setGeometry(QRect(10, 140, 121, 16));
        lineEdit_offsetX = new QLineEdit(tabWedge);
        lineEdit_offsetX->setObjectName(QStringLiteral("lineEdit_offsetX"));
        lineEdit_offsetX->setGeometry(QRect(190, 140, 71, 23));
        label_offsetX = new QLabel(tabWedge);
        label_offsetX->setObjectName(QStringLiteral("label_offsetX"));
        label_offsetX->setGeometry(QRect(160, 140, 20, 21));
        label_offsetY = new QLabel(tabWedge);
        label_offsetY->setObjectName(QStringLiteral("label_offsetY"));
        label_offsetY->setGeometry(QRect(310, 140, 20, 21));
        lineEdit_offsetY = new QLineEdit(tabWedge);
        lineEdit_offsetY->setObjectName(QStringLiteral("lineEdit_offsetY"));
        lineEdit_offsetY->setGeometry(QRect(330, 140, 71, 23));
        label_offsetZ = new QLabel(tabWedge);
        label_offsetZ->setObjectName(QStringLiteral("label_offsetZ"));
        label_offsetZ->setGeometry(QRect(460, 140, 20, 21));
        lineEdit_offsetZ = new QLineEdit(tabWedge);
        lineEdit_offsetZ->setObjectName(QStringLiteral("lineEdit_offsetZ"));
        lineEdit_offsetZ->setGeometry(QRect(480, 140, 71, 23));
        label_tns = new QLabel(tabWedge);
        label_tns->setObjectName(QStringLiteral("label_tns"));
        label_tns->setGeometry(QRect(10, 180, 151, 16));
        label_rotOffset = new QLabel(tabWedge);
        label_rotOffset->setObjectName(QStringLiteral("label_rotOffset"));
        label_rotOffset->setGeometry(QRect(10, 220, 151, 16));
        lineEdit_rotOffset = new QLineEdit(tabWedge);
        lineEdit_rotOffset->setObjectName(QStringLiteral("lineEdit_rotOffset"));
        lineEdit_rotOffset->setGeometry(QRect(160, 210, 411, 23));
        lineEdit_tnsX = new QLineEdit(tabWedge);
        lineEdit_tnsX->setObjectName(QStringLiteral("lineEdit_tnsX"));
        lineEdit_tnsX->setGeometry(QRect(190, 180, 71, 23));
        lineEdit_tnsY = new QLineEdit(tabWedge);
        lineEdit_tnsY->setObjectName(QStringLiteral("lineEdit_tnsY"));
        lineEdit_tnsY->setGeometry(QRect(330, 180, 71, 23));
        label_tnsZ = new QLabel(tabWedge);
        label_tnsZ->setObjectName(QStringLiteral("label_tnsZ"));
        label_tnsZ->setGeometry(QRect(460, 180, 20, 21));
        label_tnsX = new QLabel(tabWedge);
        label_tnsX->setObjectName(QStringLiteral("label_tnsX"));
        label_tnsX->setGeometry(QRect(160, 180, 20, 21));
        label_tnsY = new QLabel(tabWedge);
        label_tnsY->setObjectName(QStringLiteral("label_tnsY"));
        label_tnsY->setGeometry(QRect(310, 180, 20, 21));
        lineEdit_tnsZ = new QLineEdit(tabWedge);
        lineEdit_tnsZ->setObjectName(QStringLiteral("lineEdit_tnsZ"));
        lineEdit_tnsZ->setGeometry(QRect(480, 180, 71, 23));
        tabWidget->addTab(tabWedge, QString());
        label_logo = new QLabel(centralWidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setGeometry(QRect(70, -10, 461, 161));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/raddoseLogo.png")));
        pushButton_run = new QPushButton(centralWidget);
        pushButton_run->setObjectName(QStringLiteral("pushButton_run"));
        pushButton_run->setGeometry(QRect(30, 850, 541, 23));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient63(0, 0, 0, 1);
        gradient63.setSpread(QGradient::PadSpread);
        gradient63.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient63.setColorAt(0, QColor(136, 136, 221, 255));
        gradient63.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient63.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient63.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient63.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush78(gradient63);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush78);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient64(0, 0, 0, 1);
        gradient64.setSpread(QGradient::PadSpread);
        gradient64.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient64.setColorAt(0, QColor(136, 136, 221, 255));
        gradient64.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient64.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient64.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient64.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush79(gradient64);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush79);
        QLinearGradient gradient65(0, 0, 0, 1);
        gradient65.setSpread(QGradient::PadSpread);
        gradient65.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient65.setColorAt(0, QColor(136, 136, 221, 255));
        gradient65.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient65.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient65.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient65.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush80(gradient65);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush80);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient66(0, 0, 0, 1);
        gradient66.setSpread(QGradient::PadSpread);
        gradient66.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient66.setColorAt(0, QColor(136, 136, 221, 255));
        gradient66.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient66.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient66.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient66.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush81(gradient66);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush81);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient67(0, 0, 0, 1);
        gradient67.setSpread(QGradient::PadSpread);
        gradient67.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient67.setColorAt(0, QColor(136, 136, 221, 255));
        gradient67.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient67.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient67.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient67.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush82(gradient67);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush82);
        QLinearGradient gradient68(0, 0, 0, 1);
        gradient68.setSpread(QGradient::PadSpread);
        gradient68.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient68.setColorAt(0, QColor(136, 136, 221, 255));
        gradient68.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient68.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient68.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient68.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush83(gradient68);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush83);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient69(0, 0, 0, 1);
        gradient69.setSpread(QGradient::PadSpread);
        gradient69.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient69.setColorAt(0, QColor(136, 136, 221, 255));
        gradient69.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient69.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient69.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient69.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush84(gradient69);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush84);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient70(0, 0, 0, 1);
        gradient70.setSpread(QGradient::PadSpread);
        gradient70.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient70.setColorAt(0, QColor(136, 136, 221, 255));
        gradient70.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient70.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient70.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient70.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush85(gradient70);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush85);
        QLinearGradient gradient71(0, 0, 0, 1);
        gradient71.setSpread(QGradient::PadSpread);
        gradient71.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient71.setColorAt(0, QColor(136, 136, 221, 255));
        gradient71.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient71.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient71.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient71.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush86(gradient71);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_run->setPalette(palette9);
        label_SubProgram = new QLabel(centralWidget);
        label_SubProgram->setObjectName(QStringLiteral("label_SubProgram"));
        label_SubProgram->setGeometry(QRect(30, 150, 76, 23));
        comboBox_subprogram = new QComboBox(centralWidget);
        comboBox_subprogram->setObjectName(QStringLiteral("comboBox_subprogram"));
        comboBox_subprogram->setGeometry(QRect(120, 150, 477, 23));
        label_photons = new QLabel(centralWidget);
        label_photons->setObjectName(QStringLiteral("label_photons"));
        label_photons->setGeometry(QRect(30, 190, 76, 23));
        lineEdit_photons = new QLineEdit(centralWidget);
        lineEdit_photons->setObjectName(QStringLiteral("lineEdit_photons"));
        lineEdit_photons->setGeometry(QRect(120, 190, 481, 23));
        label_runs = new QLabel(centralWidget);
        label_runs->setObjectName(QStringLiteral("label_runs"));
        label_runs->setGeometry(QRect(30, 220, 76, 23));
        lineEdit_runs = new QLineEdit(centralWidget);
        lineEdit_runs->setObjectName(QStringLiteral("lineEdit_runs"));
        lineEdit_runs->setGeometry(QRect(120, 220, 481, 23));
        pushButton_manualEdit = new QPushButton(centralWidget);
        pushButton_manualEdit->setObjectName(QStringLiteral("pushButton_manualEdit"));
        pushButton_manualEdit->setGeometry(QRect(30, 820, 541, 23));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient72(0, 0, 0, 1);
        gradient72.setSpread(QGradient::PadSpread);
        gradient72.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient72.setColorAt(0, QColor(136, 136, 221, 255));
        gradient72.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient72.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient72.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient72.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush87(gradient72);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush87);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient73(0, 0, 0, 1);
        gradient73.setSpread(QGradient::PadSpread);
        gradient73.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient73.setColorAt(0, QColor(136, 136, 221, 255));
        gradient73.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient73.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient73.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient73.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush88(gradient73);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush88);
        QLinearGradient gradient74(0, 0, 0, 1);
        gradient74.setSpread(QGradient::PadSpread);
        gradient74.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient74.setColorAt(0, QColor(136, 136, 221, 255));
        gradient74.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient74.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient74.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient74.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush89(gradient74);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush89);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient75(0, 0, 0, 1);
        gradient75.setSpread(QGradient::PadSpread);
        gradient75.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient75.setColorAt(0, QColor(136, 136, 221, 255));
        gradient75.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient75.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient75.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient75.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush90(gradient75);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush90);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient76(0, 0, 0, 1);
        gradient76.setSpread(QGradient::PadSpread);
        gradient76.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient76.setColorAt(0, QColor(136, 136, 221, 255));
        gradient76.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient76.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient76.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient76.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush91(gradient76);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush91);
        QLinearGradient gradient77(0, 0, 0, 1);
        gradient77.setSpread(QGradient::PadSpread);
        gradient77.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient77.setColorAt(0, QColor(136, 136, 221, 255));
        gradient77.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient77.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient77.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient77.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush92(gradient77);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush92);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient78(0, 0, 0, 1);
        gradient78.setSpread(QGradient::PadSpread);
        gradient78.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient78.setColorAt(0, QColor(136, 136, 221, 255));
        gradient78.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient78.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient78.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient78.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush93(gradient78);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush93);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient79(0, 0, 0, 1);
        gradient79.setSpread(QGradient::PadSpread);
        gradient79.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient79.setColorAt(0, QColor(136, 136, 221, 255));
        gradient79.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient79.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient79.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient79.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush94(gradient79);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush94);
        QLinearGradient gradient80(0, 0, 0, 1);
        gradient80.setSpread(QGradient::PadSpread);
        gradient80.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient80.setColorAt(0, QColor(136, 136, 221, 255));
        gradient80.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient80.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient80.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient80.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush95(gradient80);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush95);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_manualEdit->setPalette(palette10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 17));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionAbout);
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RADDOSE-3D", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionUser_guide->setText(QApplication::translate("MainWindow", "User guide", Q_NULLPTR));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Type->setToolTip(QApplication::translate("MainWindow", "The shape of the crystal", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Type->setText(QApplication::translate("MainWindow", "Crystal Type", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Cuboid", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Polyhedron", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Cylinder", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Spherical", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_Dims->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The size of the crystal in microns.</p><p>Z is the beam axis and Y the goniometer axis. The X axis is orhtogonal to both.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Dims->setText(QApplication::translate("MainWindow", "Dimensions", Q_NULLPTR));
        label_X->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_X->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_Y->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_Y->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_Z->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        lineEdit_Z->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_X_2->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
        label_Y_2->setText(QApplication::translate("MainWindow", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Modelfile->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The file containing the .obj wireframe model of a polyhedron crystal</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Modelfile->setText(QApplication::translate("MainWindow", "Model file", Q_NULLPTR));
        pushButton_browsemodel->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_ppm->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The resolution of the crystal representation</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_ppm->setText(QApplication::translate("MainWindow", "Pixels per micron", Q_NULLPTR));
        lineEdit_ppm->setText(QApplication::translate("MainWindow", "0.1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_AbsCoef->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>A keyword to describe how to input the sample for absorption coefficient calculation</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_AbsCoef->setText(QApplication::translate("MainWindow", "AbsCoefCalc", Q_NULLPTR));
        comboBox_AbsCoef->clear();
        comboBox_AbsCoef->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "RD3D", Q_NULLPTR)
         << QApplication::translate("MainWindow", "EXP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SEQUENCE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SAXS", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SAXSSEQ", Q_NULLPTR)
         << QApplication::translate("MainWindow", "SMALLMOLE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CIF", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_UnitCell->setToolTip(QApplication::translate("MainWindow", "The dimensions of the unit cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_UnitCell->setText(QApplication::translate("MainWindow", "Unit Cell", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Monomers->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of monomers in the unit cell</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Monomers->setText(QApplication::translate("MainWindow", "No. Monomers", Q_NULLPTR));
        label_Residues->setText(QApplication::translate("MainWindow", "No. Residues per monomer", Q_NULLPTR));
        lineEdit_Monomers->setText(QApplication::translate("MainWindow", "24", Q_NULLPTR));
        lineEdit_Residues->setText(QApplication::translate("MainWindow", "51", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_heavyProt->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The elemental symbol and number present per monomer of heavy atoms (above oxygen) present in the sample</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_heavyProt->setText(QApplication::translate("MainWindow", "Heavy atoms per monomer", Q_NULLPTR));
        lineEdit_a->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        lineEdit_b->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        lineEdit_c->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        label_c->setText(QApplication::translate("MainWindow", "c", Q_NULLPTR));
        label_b->setText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        label_a->setText(QApplication::translate("MainWindow", "a", Q_NULLPTR));
        lineEdit_alpha->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        label_gamma->setText(QApplication::translate("MainWindow", "\316\263", Q_NULLPTR));
        label_alpha->setText(QApplication::translate("MainWindow", "\316\261", Q_NULLPTR));
        lineEdit_beta->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        label_beta->setText(QApplication::translate("MainWindow", "\316\262", Q_NULLPTR));
        lineEdit_gamma->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        textEdit_heavyProt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Zn 0.333</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">S 6</p></body></html>", Q_NULLPTR));
        pushButton_heavyProt->setText(QApplication::translate("MainWindow", "Add Element", Q_NULLPTR));
        label_heavyEl->setText(QApplication::translate("MainWindow", "Element Symbol", Q_NULLPTR));
        label_heavyNum->setText(QApplication::translate("MainWindow", "Number", Q_NULLPTR));
        label_heavyTitle->setText(QApplication::translate("MainWindow", "Heavy atom list", Q_NULLPTR));
        textEdit_solventConc->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">P 425</p></body></html>", Q_NULLPTR));
        label_solventConc->setText(QApplication::translate("MainWindow", "Concentration", Q_NULLPTR));
        lineEdit_Elconc->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_Solvent->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The concentration in mM of heavy atoms (above oxygen) present in the sample</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Solvent->setText(QApplication::translate("MainWindow", "Solvent atom concentration", Q_NULLPTR));
        label_solventTitle->setText(QApplication::translate("MainWindow", "Solvent atom list", Q_NULLPTR));
        pushButton_solventConc->setText(QApplication::translate("MainWindow", "Add Element", Q_NULLPTR));
        label_solventEl->setText(QApplication::translate("MainWindow", "Element Symbol", Q_NULLPTR));
        lineEdit_Elsolvent->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_SolventFr->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The fraction of unit cell occupied by solvent</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_SolventFr->setText(QApplication::translate("MainWindow", "Solvent fraction", Q_NULLPTR));
        lineEdit_solventFr->setText(QApplication::translate("MainWindow", "0.64", Q_NULLPTR));
        label_Nucleotides->setText(QApplication::translate("MainWindow", "Nucleotides per monomer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_DNA->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of DNA nucleotides per monomer</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_DNA->setText(QApplication::translate("MainWindow", "DNA", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_RNA->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of RNA nucleotides per monomer</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_RNA->setText(QApplication::translate("MainWindow", "RNA", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_PDB->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The PDB code of the protein. Note, this requires an internet connection.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_PDB->setText(QApplication::translate("MainWindow", "PDB", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_fasta->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The path to the FASTA file specifying the sample sequence</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_fasta->setText(QApplication::translate("MainWindow", "FASTA file", Q_NULLPTR));
        pushButton_browseFasta->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_carb->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of carbohydrate residues per monomer</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_carb->setText(QApplication::translate("MainWindow", "Carbohydrate units per monomer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pConc->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>In SAXS, this is the concentration of protein in grams per litre</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pConc->setText(QApplication::translate("MainWindow", "Protein Conc", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_SmallMole->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Defines the list of atoms present in the unit cell per monomer for a small molecule crystal</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_SmallMole->setText(QApplication::translate("MainWindow", "Small molecule atoms", Q_NULLPTR));
        label_atomList->setText(QApplication::translate("MainWindow", "Atom list", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_CIF->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The file path to the cif file</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_CIF->setText(QApplication::translate("MainWindow", "CIF", Q_NULLPTR));
        pushButton_CIF->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        pushButton_crystalAdvanced->setText(QApplication::translate("MainWindow", "Advanced Inputs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabCrystal), QApplication::translate("MainWindow", "Crystal", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_beamType->setToolTip(QApplication::translate("MainWindow", "Defines the shape of the beam", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamType->setText(QApplication::translate("MainWindow", "Beam Type", Q_NULLPTR));
        comboBox_beamType->clear();
        comboBox_beamType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Gaussian", Q_NULLPTR)
         << QApplication::translate("MainWindow", "TopHat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Experimental", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_FWHM->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The X and Y of the FWHM of a Gaussian beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_FWHM->setText(QApplication::translate("MainWindow", "FWHM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Collimation->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The X and Y collimation of the beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Collimation->setText(QApplication::translate("MainWindow", "Collimation", Q_NULLPTR));
        label_collType->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_collDims->setText(QApplication::translate("MainWindow", "Dimensions", Q_NULLPTR));
        comboBox_collType->clear();
        comboBox_collType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rectangular", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Circular", Q_NULLPTR)
         << QApplication::translate("MainWindow", "None", Q_NULLPTR)
        );
        label_collX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_collY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_collX->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        lineEdit_collY->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_beamFile->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The file path to the .pgm file with the beam profile</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamFile->setText(QApplication::translate("MainWindow", "Beam file", Q_NULLPTR));
        pushButton_beamFile->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pxSize->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>X and Y specify the horizontal and vertical size of the pixels in micrometers in the .pgm file respectively.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pxSize->setText(QApplication::translate("MainWindow", "Pixel size", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_flux->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The flux of the beam in photons per second</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_flux->setText(QApplication::translate("MainWindow", "Flux", Q_NULLPTR));
        lineEdit_flux->setText(QApplication::translate("MainWindow", "2e12", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pulseEn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The energy of an XFEL pulse in mJ</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pulseEn->setText(QApplication::translate("MainWindow", "Pulse Energy", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_beamEn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The energy of the X-ray beam in keV</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamEn->setText(QApplication::translate("MainWindow", "Beam Energy", Q_NULLPTR));
        lineEdit_beamEn->setText(QApplication::translate("MainWindow", "12.1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_beamEnFWHM->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Teh energy spread of the beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamEnFWHM->setText(QApplication::translate("MainWindow", "Energy FWHM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_monochrome->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Whether the beam is monochramtic or pink/white</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_monochrome->setText(QApplication::translate("MainWindow", "Monochromatic beam?", Q_NULLPTR));
        comboBox_monochrome->clear();
        comboBox_monochrome->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Yes", Q_NULLPTR)
         << QApplication::translate("MainWindow", "No", Q_NULLPTR)
        );
        label_pxX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_pxY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_FWHMY->setText(QApplication::translate("MainWindow", "70", Q_NULLPTR));
        label_FWHMX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_FWHMX->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        label_FWHMY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabBeam), QApplication::translate("MainWindow", "Beam", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_startAngle->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Start rotation angle in degrees</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_startAngle->setText(QApplication::translate("MainWindow", "Start Angle", Q_NULLPTR));
        lineEdit_startAngle->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_endAngle->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Last rotation angle in degrees</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_endAngle->setText(QApplication::translate("MainWindow", "End Angle", Q_NULLPTR));
        lineEdit_endAngle->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_expTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The exposure time in seconds</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_expTime->setText(QApplication::translate("MainWindow", "Exposure time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pulseLength->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The length of the XFEL pulse in femtoseconds</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pulseLength->setText(QApplication::translate("MainWindow", "Pulse length", Q_NULLPTR));
        lineEdit_exposureTime->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_angleRes->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Specifies the angular step size used for wedge iterations in degrees</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_angleRes->setText(QApplication::translate("MainWindow", "Angular Resolution", Q_NULLPTR));
        lineEdit_angleRes->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_startOffset->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Offset translation in \316\274m applied to the crystal relative to the origin</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_startOffset->setText(QApplication::translate("MainWindow", "Starting offset", Q_NULLPTR));
        lineEdit_offsetX->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_offsetX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_offsetY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_offsetY->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_offsetZ->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        lineEdit_offsetZ->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_tns->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>translation of the goniometer during exposure in \316\274m/ \342\227\246 for helical scanning</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_tns->setText(QApplication::translate("MainWindow", "Translation per degree", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_rotOffset->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The offset in \316\274m along X (vertical in most set-ups) between the beam axis and the rotation axis</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_rotOffset->setText(QApplication::translate("MainWindow", "Rotation offset", Q_NULLPTR));
        lineEdit_rotOffset->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_tnsX->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_tnsY->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_tnsZ->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        label_tnsX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_tnsY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_tnsZ->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWedge), QApplication::translate("MainWindow", "Wedge", Q_NULLPTR));
        label_logo->setText(QString());
        pushButton_run->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_SubProgram->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Choose to run standard RADDOSE-3D or run the XFEL or Monte Carlo subprograms</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_SubProgram->setText(QApplication::translate("MainWindow", "Subprogram", Q_NULLPTR));
        comboBox_subprogram->clear();
        comboBox_subprogram->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Standard RADDOSE-3D", Q_NULLPTR)
         << QApplication::translate("MainWindow", "XFEL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "MonteCarlo", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_photons->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of photons to simulate</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_photons->setText(QApplication::translate("MainWindow", "Sim photons", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_runs->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of times to run the simulation</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_runs->setText(QApplication::translate("MainWindow", "Runs", Q_NULLPTR));
        pushButton_manualEdit->setText(QApplication::translate("MainWindow", "Manually edit input", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
