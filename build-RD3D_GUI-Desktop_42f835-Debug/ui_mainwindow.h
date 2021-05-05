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
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        centralWidget->setPalette(palette1);
        centralWidget->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background: #002147;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px #002147;\n"
"    background: #002147;\n"
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
"QTab"
                        "Bar::tab:selected {\n"
"    background: #002147;\n"
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
"    border-bottom-color: none;\n"
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
"QTabBar::tab:left, QTabBar::tab:right "
                        "{\n"
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
        formLayoutWidget->setGeometry(QRect(10, 0, 561, 31));
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
        QBrush brush9(QColor(85, 0, 255, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush10(QColor(170, 127, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(127, 63, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(42, 0, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(56, 0, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        pushButton_heavyProt->setGeometry(QRect(350, 230, 80, 71));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        pushButton_solventConc->setGeometry(QRect(350, 310, 80, 71));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette5.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette6.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_CIF->setPalette(palette6);
        pushButton_crystalAdvanced = new QPushButton(tabCrystal);
        pushButton_crystalAdvanced->setObjectName(QStringLiteral("pushButton_crystalAdvanced"));
        pushButton_crystalAdvanced->setGeometry(QRect(200, 500, 161, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette8.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette9.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
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
        palette10.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_manualEdit->setPalette(palette10);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 20));
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
