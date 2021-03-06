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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QGridLayout *gridLayout;
    QLabel *label_logo;
    QLabel *label_SubProgram;
    QComboBox *comboBox_subprogram;
    QLabel *label_photons;
    QLineEdit *lineEdit_photons;
    QLabel *label_runs;
    QLineEdit *lineEdit_runs;
    QPushButton *pushButton_manualEdit;
    QPushButton *pushButton_run;
    QTabWidget *tabWidget;
    QWidget *tabCrystal;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_Type;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Dims;
    QLabel *label_X;
    QLineEdit *lineEdit_X;
    QLabel *label_Y;
    QLineEdit *lineEdit_Y;
    QLabel *label_Z;
    QLineEdit *lineEdit_Z;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Modelfile;
    QLineEdit *lineEdit_modelfile;
    QPushButton *pushButton_browsemodel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_ppm;
    QLineEdit *lineEdit_ppm;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_AbsCoef;
    QComboBox *comboBox_AbsCoef;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_PDB;
    QLineEdit *lineEdit_PDB;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_UnitCell;
    QLabel *label_a;
    QLineEdit *lineEdit_a;
    QLabel *label_b;
    QLineEdit *lineEdit_b;
    QLabel *label_c;
    QLineEdit *lineEdit_c;
    QLabel *label_alpha;
    QLineEdit *lineEdit_alpha;
    QLabel *label_beta;
    QLineEdit *lineEdit_beta;
    QLabel *label_gamma;
    QLineEdit *lineEdit_gamma;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_CIF;
    QLineEdit *lineEdit_CIF;
    QPushButton *pushButton_CIF;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_pConc;
    QLineEdit *lineEdit_pConc;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_Monomers;
    QLineEdit *lineEdit_Monomers;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_Residues;
    QLineEdit *lineEdit_Residues;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_fasta;
    QLineEdit *lineEdit_fasta;
    QPushButton *pushButton_browseFasta;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_heavyProt;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_3;
    QLineEdit *lineEdit_ElheavyProt;
    QLabel *label_heavyEl;
    QLineEdit *lineEdit_ElheavyProt_2;
    QLabel *label_heavyNum;
    QLabel *label_heavyProt2;
    QPushButton *pushButton_heavyProt;
    QLabel *label_heavyTitle;
    QTextEdit *textEdit_heavyProt;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_Solvent;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Solvent2;
    QFormLayout *formLayout_4;
    QLabel *label_solventEl;
    QLineEdit *lineEdit_Elsolvent;
    QLabel *label_solventConc;
    QLineEdit *lineEdit_Elconc;
    QPushButton *pushButton_solventConc;
    QLabel *label_solventTitle;
    QTextEdit *textEdit_solventConc;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_SolventFr;
    QLineEdit *lineEdit_solventFr;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_Nucleotides;
    QLabel *label_DNA;
    QLineEdit *lineEdit_DNA;
    QLabel *label_RNA;
    QLineEdit *lineEdit_RNA;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_carb;
    QLineEdit *lineEdit_carb;
    QPushButton *pushButton_crystalAdvanced;
    QWidget *tabBeam;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_beamType;
    QComboBox *comboBox_beamType;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_beamFile;
    QLineEdit *lineEdit_beamFile;
    QPushButton *pushButton_beamFile;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_FWHM;
    QLabel *label_FWHMX;
    QLineEdit *lineEdit_FWHMX;
    QLabel *label_FWHMY;
    QLineEdit *lineEdit_FWHMY;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_pxSize;
    QLabel *label_pxX;
    QLineEdit *lineEdit_pxSizeX;
    QLabel *label_pxY;
    QLineEdit *lineEdit_pxSizeY;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_Collimation;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_collType;
    QComboBox *comboBox_collType;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_collDims;
    QLabel *label_collX;
    QLineEdit *lineEdit_collX;
    QLabel *label_collY;
    QLineEdit *lineEdit_collY;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_pulseEn;
    QLineEdit *lineEdit_pulseEn;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_flux;
    QLineEdit *lineEdit_flux;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_beamEn;
    QLineEdit *lineEdit_beamEn;
    QFormLayout *formLayout_6;
    QLabel *label_monochrome;
    QComboBox *comboBox_monochrome;
    QLabel *label_beamEnFWHM;
    QLineEdit *lineEdit_beamEnFWHM;
    QWidget *tabWedge;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_startAngle;
    QLineEdit *lineEdit_startAngle;
    QLabel *label_endAngle;
    QLineEdit *lineEdit_endAngle;
    QFormLayout *formLayout_7;
    QLabel *label_expTime;
    QLineEdit *lineEdit_exposureTime;
    QLabel *label_angleRes;
    QLineEdit *lineEdit_angleRes;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_startOffset;
    QLabel *label_offsetX;
    QLineEdit *lineEdit_offsetX;
    QLabel *label_offsetY;
    QLineEdit *lineEdit_offsetY;
    QLabel *label_offsetZ;
    QLineEdit *lineEdit_offsetZ;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_tns;
    QLabel *label_tnsX;
    QLineEdit *lineEdit_tnsX;
    QLabel *label_tnsY;
    QLineEdit *lineEdit_tnsY;
    QLabel *label_tnsZ;
    QLineEdit *lineEdit_tnsZ;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_rotOffset;
    QLineEdit *lineEdit_rotOffset;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(616, 731);
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
"QScrollArea{\n"
"backgroun"
                        "d: #025;\n"
"}\n"
"\n"
"#scrollAreaWidgetContents_3{\n"
"background: #025;\n"
"}\n"
"\n"
"#scrollAreaWidgetContents_2{\n"
"background: #025;\n"
"}\n"
"\n"
"#scrollAreaWidgetContents{\n"
"background: #025;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
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
"QTabBar::tab:bott"
                        "om:!selected {\n"
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
"QTabBar::tab:left:o"
                        "nly-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}\n"
""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_logo = new QLabel(centralWidget);
        label_logo->setObjectName(QStringLiteral("label_logo"));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/raddoseLogo.png")));

        gridLayout->addWidget(label_logo, 0, 0, 1, 2);

        label_SubProgram = new QLabel(centralWidget);
        label_SubProgram->setObjectName(QStringLiteral("label_SubProgram"));

        gridLayout->addWidget(label_SubProgram, 1, 0, 1, 1);

        comboBox_subprogram = new QComboBox(centralWidget);
        comboBox_subprogram->setObjectName(QStringLiteral("comboBox_subprogram"));

        gridLayout->addWidget(comboBox_subprogram, 1, 1, 1, 1);

        label_photons = new QLabel(centralWidget);
        label_photons->setObjectName(QStringLiteral("label_photons"));

        gridLayout->addWidget(label_photons, 2, 0, 1, 1);

        lineEdit_photons = new QLineEdit(centralWidget);
        lineEdit_photons->setObjectName(QStringLiteral("lineEdit_photons"));

        gridLayout->addWidget(lineEdit_photons, 2, 1, 1, 1);

        label_runs = new QLabel(centralWidget);
        label_runs->setObjectName(QStringLiteral("label_runs"));

        gridLayout->addWidget(label_runs, 3, 0, 1, 1);

        lineEdit_runs = new QLineEdit(centralWidget);
        lineEdit_runs->setObjectName(QStringLiteral("lineEdit_runs"));

        gridLayout->addWidget(lineEdit_runs, 3, 1, 1, 1);

        pushButton_manualEdit = new QPushButton(centralWidget);
        pushButton_manualEdit->setObjectName(QStringLiteral("pushButton_manualEdit"));
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
        pushButton_manualEdit->setPalette(palette2);

        gridLayout->addWidget(pushButton_manualEdit, 5, 0, 1, 2);

        pushButton_run = new QPushButton(centralWidget);
        pushButton_run->setObjectName(QStringLiteral("pushButton_run"));
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
        pushButton_run->setPalette(palette3);

        gridLayout->addWidget(pushButton_run, 6, 0, 1, 2);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tabCrystal = new QWidget();
        tabCrystal->setObjectName(QStringLiteral("tabCrystal"));
        gridLayout_3 = new QGridLayout(tabCrystal);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scrollArea = new QScrollArea(tabCrystal);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        scrollArea->setPalette(palette4);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 564, 962));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        scrollAreaWidgetContents_2->setPalette(palette5);
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, -1, -1, 0);
        label_Type = new QLabel(scrollAreaWidgetContents_2);
        label_Type->setObjectName(QStringLiteral("label_Type"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_Type);

        comboBox = new QComboBox(scrollAreaWidgetContents_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        label_Dims = new QLabel(scrollAreaWidgetContents_2);
        label_Dims->setObjectName(QStringLiteral("label_Dims"));

        horizontalLayout_2->addWidget(label_Dims);

        label_X = new QLabel(scrollAreaWidgetContents_2);
        label_X->setObjectName(QStringLiteral("label_X"));

        horizontalLayout_2->addWidget(label_X);

        lineEdit_X = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_X->setObjectName(QStringLiteral("lineEdit_X"));

        horizontalLayout_2->addWidget(lineEdit_X);

        label_Y = new QLabel(scrollAreaWidgetContents_2);
        label_Y->setObjectName(QStringLiteral("label_Y"));

        horizontalLayout_2->addWidget(label_Y);

        lineEdit_Y = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Y->setObjectName(QStringLiteral("lineEdit_Y"));

        horizontalLayout_2->addWidget(lineEdit_Y);

        label_Z = new QLabel(scrollAreaWidgetContents_2);
        label_Z->setObjectName(QStringLiteral("label_Z"));

        horizontalLayout_2->addWidget(label_Z);

        lineEdit_Z = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Z->setObjectName(QStringLiteral("lineEdit_Z"));

        horizontalLayout_2->addWidget(lineEdit_Z);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_Modelfile = new QLabel(scrollAreaWidgetContents_2);
        label_Modelfile->setObjectName(QStringLiteral("label_Modelfile"));

        horizontalLayout_4->addWidget(label_Modelfile);

        lineEdit_modelfile = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_modelfile->setObjectName(QStringLiteral("lineEdit_modelfile"));

        horizontalLayout_4->addWidget(lineEdit_modelfile);

        pushButton_browsemodel = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_browsemodel->setObjectName(QStringLiteral("pushButton_browsemodel"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient18(0, 0, 0, 1);
        gradient18.setSpread(QGradient::PadSpread);
        gradient18.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient18.setColorAt(0, QColor(136, 136, 221, 255));
        gradient18.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient18.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient18.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient18.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush33(gradient18);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush33);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient19(0, 0, 0, 1);
        gradient19.setSpread(QGradient::PadSpread);
        gradient19.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient19.setColorAt(0, QColor(136, 136, 221, 255));
        gradient19.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient19.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient19.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient19.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush34(gradient19);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush34);
        QLinearGradient gradient20(0, 0, 0, 1);
        gradient20.setSpread(QGradient::PadSpread);
        gradient20.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient20.setColorAt(0, QColor(136, 136, 221, 255));
        gradient20.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient20.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient20.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient20.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush35(gradient20);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush35);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient21(0, 0, 0, 1);
        gradient21.setSpread(QGradient::PadSpread);
        gradient21.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient21.setColorAt(0, QColor(136, 136, 221, 255));
        gradient21.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient21.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient21.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient21.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush36(gradient21);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush36);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient22(0, 0, 0, 1);
        gradient22.setSpread(QGradient::PadSpread);
        gradient22.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient22.setColorAt(0, QColor(136, 136, 221, 255));
        gradient22.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient22.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient22.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient22.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush37(gradient22);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush37);
        QLinearGradient gradient23(0, 0, 0, 1);
        gradient23.setSpread(QGradient::PadSpread);
        gradient23.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient23.setColorAt(0, QColor(136, 136, 221, 255));
        gradient23.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient23.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient23.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient23.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush38(gradient23);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush38);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient24(0, 0, 0, 1);
        gradient24.setSpread(QGradient::PadSpread);
        gradient24.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient24.setColorAt(0, QColor(136, 136, 221, 255));
        gradient24.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient24.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient24.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient24.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush39(gradient24);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush39);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient25(0, 0, 0, 1);
        gradient25.setSpread(QGradient::PadSpread);
        gradient25.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient25.setColorAt(0, QColor(136, 136, 221, 255));
        gradient25.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient25.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient25.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient25.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush40(gradient25);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush40);
        QLinearGradient gradient26(0, 0, 0, 1);
        gradient26.setSpread(QGradient::PadSpread);
        gradient26.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient26.setColorAt(0, QColor(136, 136, 221, 255));
        gradient26.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient26.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient26.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient26.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush41(gradient26);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush41);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_browsemodel->setPalette(palette6);

        horizontalLayout_4->addWidget(pushButton_browsemodel);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        label_ppm = new QLabel(scrollAreaWidgetContents_2);
        label_ppm->setObjectName(QStringLiteral("label_ppm"));

        horizontalLayout_5->addWidget(label_ppm);

        lineEdit_ppm = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_ppm->setObjectName(QStringLiteral("lineEdit_ppm"));

        horizontalLayout_5->addWidget(lineEdit_ppm);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_AbsCoef = new QLabel(scrollAreaWidgetContents_2);
        label_AbsCoef->setObjectName(QStringLiteral("label_AbsCoef"));

        horizontalLayout_6->addWidget(label_AbsCoef);

        comboBox_AbsCoef = new QComboBox(scrollAreaWidgetContents_2);
        comboBox_AbsCoef->setObjectName(QStringLiteral("comboBox_AbsCoef"));

        horizontalLayout_6->addWidget(comboBox_AbsCoef);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 0);
        label_PDB = new QLabel(scrollAreaWidgetContents_2);
        label_PDB->setObjectName(QStringLiteral("label_PDB"));

        horizontalLayout_7->addWidget(label_PDB);

        lineEdit_PDB = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_PDB->setObjectName(QStringLiteral("lineEdit_PDB"));

        horizontalLayout_7->addWidget(lineEdit_PDB);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, -1, -1, 0);
        label_UnitCell = new QLabel(scrollAreaWidgetContents_2);
        label_UnitCell->setObjectName(QStringLiteral("label_UnitCell"));

        horizontalLayout_8->addWidget(label_UnitCell);

        label_a = new QLabel(scrollAreaWidgetContents_2);
        label_a->setObjectName(QStringLiteral("label_a"));

        horizontalLayout_8->addWidget(label_a);

        lineEdit_a = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_a->setObjectName(QStringLiteral("lineEdit_a"));

        horizontalLayout_8->addWidget(lineEdit_a);

        label_b = new QLabel(scrollAreaWidgetContents_2);
        label_b->setObjectName(QStringLiteral("label_b"));

        horizontalLayout_8->addWidget(label_b);

        lineEdit_b = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_b->setObjectName(QStringLiteral("lineEdit_b"));

        horizontalLayout_8->addWidget(lineEdit_b);

        label_c = new QLabel(scrollAreaWidgetContents_2);
        label_c->setObjectName(QStringLiteral("label_c"));

        horizontalLayout_8->addWidget(label_c);

        lineEdit_c = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_c->setObjectName(QStringLiteral("lineEdit_c"));

        horizontalLayout_8->addWidget(lineEdit_c);

        label_alpha = new QLabel(scrollAreaWidgetContents_2);
        label_alpha->setObjectName(QStringLiteral("label_alpha"));

        horizontalLayout_8->addWidget(label_alpha);

        lineEdit_alpha = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_alpha->setObjectName(QStringLiteral("lineEdit_alpha"));

        horizontalLayout_8->addWidget(lineEdit_alpha);

        label_beta = new QLabel(scrollAreaWidgetContents_2);
        label_beta->setObjectName(QStringLiteral("label_beta"));

        horizontalLayout_8->addWidget(label_beta);

        lineEdit_beta = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_beta->setObjectName(QStringLiteral("lineEdit_beta"));

        horizontalLayout_8->addWidget(lineEdit_beta);

        label_gamma = new QLabel(scrollAreaWidgetContents_2);
        label_gamma->setObjectName(QStringLiteral("label_gamma"));

        horizontalLayout_8->addWidget(label_gamma);

        lineEdit_gamma = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_gamma->setObjectName(QStringLiteral("lineEdit_gamma"));

        horizontalLayout_8->addWidget(lineEdit_gamma);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, -1, 0);
        label_CIF = new QLabel(scrollAreaWidgetContents_2);
        label_CIF->setObjectName(QStringLiteral("label_CIF"));

        horizontalLayout_9->addWidget(label_CIF);

        lineEdit_CIF = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_CIF->setObjectName(QStringLiteral("lineEdit_CIF"));

        horizontalLayout_9->addWidget(lineEdit_CIF);

        pushButton_CIF = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_CIF->setObjectName(QStringLiteral("pushButton_CIF"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient27(0, 0, 0, 1);
        gradient27.setSpread(QGradient::PadSpread);
        gradient27.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient27.setColorAt(0, QColor(136, 136, 221, 255));
        gradient27.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient27.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient27.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient27.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush42(gradient27);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush42);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient28(0, 0, 0, 1);
        gradient28.setSpread(QGradient::PadSpread);
        gradient28.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient28.setColorAt(0, QColor(136, 136, 221, 255));
        gradient28.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient28.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient28.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient28.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush43(gradient28);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush43);
        QLinearGradient gradient29(0, 0, 0, 1);
        gradient29.setSpread(QGradient::PadSpread);
        gradient29.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient29.setColorAt(0, QColor(136, 136, 221, 255));
        gradient29.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient29.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient29.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient29.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush44(gradient29);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush44);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient30(0, 0, 0, 1);
        gradient30.setSpread(QGradient::PadSpread);
        gradient30.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient30.setColorAt(0, QColor(136, 136, 221, 255));
        gradient30.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient30.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient30.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient30.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush45(gradient30);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush45);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient31(0, 0, 0, 1);
        gradient31.setSpread(QGradient::PadSpread);
        gradient31.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient31.setColorAt(0, QColor(136, 136, 221, 255));
        gradient31.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient31.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient31.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient31.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush46(gradient31);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush46);
        QLinearGradient gradient32(0, 0, 0, 1);
        gradient32.setSpread(QGradient::PadSpread);
        gradient32.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient32.setColorAt(0, QColor(136, 136, 221, 255));
        gradient32.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient32.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient32.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient32.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush47(gradient32);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush47);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient33(0, 0, 0, 1);
        gradient33.setSpread(QGradient::PadSpread);
        gradient33.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient33.setColorAt(0, QColor(136, 136, 221, 255));
        gradient33.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient33.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient33.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient33.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush48(gradient33);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush48);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient34(0, 0, 0, 1);
        gradient34.setSpread(QGradient::PadSpread);
        gradient34.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient34.setColorAt(0, QColor(136, 136, 221, 255));
        gradient34.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient34.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient34.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient34.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush49(gradient34);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush49);
        QLinearGradient gradient35(0, 0, 0, 1);
        gradient35.setSpread(QGradient::PadSpread);
        gradient35.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient35.setColorAt(0, QColor(136, 136, 221, 255));
        gradient35.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient35.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient35.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient35.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush50(gradient35);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush50);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_CIF->setPalette(palette7);

        horizontalLayout_9->addWidget(pushButton_CIF);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, -1, 0);
        label_pConc = new QLabel(scrollAreaWidgetContents_2);
        label_pConc->setObjectName(QStringLiteral("label_pConc"));

        horizontalLayout_10->addWidget(label_pConc);

        lineEdit_pConc = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_pConc->setObjectName(QStringLiteral("lineEdit_pConc"));

        horizontalLayout_10->addWidget(lineEdit_pConc);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, -1, -1, 0);
        label_Monomers = new QLabel(scrollAreaWidgetContents_2);
        label_Monomers->setObjectName(QStringLiteral("label_Monomers"));

        horizontalLayout_11->addWidget(label_Monomers);

        lineEdit_Monomers = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Monomers->setObjectName(QStringLiteral("lineEdit_Monomers"));

        horizontalLayout_11->addWidget(lineEdit_Monomers);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, -1, -1, 0);
        label_Residues = new QLabel(scrollAreaWidgetContents_2);
        label_Residues->setObjectName(QStringLiteral("label_Residues"));
#ifndef QT_NO_TOOLTIP
        label_Residues->setToolTip(QStringLiteral("<html><head/><body><p>The number of amino acid residues per monomer</p></body></html>"));
#endif // QT_NO_TOOLTIP

        horizontalLayout_12->addWidget(label_Residues);

        lineEdit_Residues = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Residues->setObjectName(QStringLiteral("lineEdit_Residues"));

        horizontalLayout_12->addWidget(lineEdit_Residues);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, -1, -1, 10);
        label_fasta = new QLabel(scrollAreaWidgetContents_2);
        label_fasta->setObjectName(QStringLiteral("label_fasta"));

        horizontalLayout_13->addWidget(label_fasta);

        lineEdit_fasta = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_fasta->setObjectName(QStringLiteral("lineEdit_fasta"));

        horizontalLayout_13->addWidget(lineEdit_fasta);

        pushButton_browseFasta = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_browseFasta->setObjectName(QStringLiteral("pushButton_browseFasta"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient36(0, 0, 0, 1);
        gradient36.setSpread(QGradient::PadSpread);
        gradient36.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient36.setColorAt(0, QColor(136, 136, 221, 255));
        gradient36.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient36.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient36.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient36.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush51(gradient36);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush51);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient37(0, 0, 0, 1);
        gradient37.setSpread(QGradient::PadSpread);
        gradient37.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient37.setColorAt(0, QColor(136, 136, 221, 255));
        gradient37.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient37.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient37.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient37.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush52(gradient37);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush52);
        QLinearGradient gradient38(0, 0, 0, 1);
        gradient38.setSpread(QGradient::PadSpread);
        gradient38.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient38.setColorAt(0, QColor(136, 136, 221, 255));
        gradient38.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient38.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient38.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient38.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush53(gradient38);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush53);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient39(0, 0, 0, 1);
        gradient39.setSpread(QGradient::PadSpread);
        gradient39.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient39.setColorAt(0, QColor(136, 136, 221, 255));
        gradient39.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient39.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient39.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient39.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush54(gradient39);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush54);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient40(0, 0, 0, 1);
        gradient40.setSpread(QGradient::PadSpread);
        gradient40.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient40.setColorAt(0, QColor(136, 136, 221, 255));
        gradient40.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient40.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient40.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient40.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush55(gradient40);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush55);
        QLinearGradient gradient41(0, 0, 0, 1);
        gradient41.setSpread(QGradient::PadSpread);
        gradient41.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient41.setColorAt(0, QColor(136, 136, 221, 255));
        gradient41.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient41.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient41.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient41.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush56(gradient41);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush56);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient42(0, 0, 0, 1);
        gradient42.setSpread(QGradient::PadSpread);
        gradient42.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient42.setColorAt(0, QColor(136, 136, 221, 255));
        gradient42.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient42.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient42.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient42.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush57(gradient42);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush57);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient43(0, 0, 0, 1);
        gradient43.setSpread(QGradient::PadSpread);
        gradient43.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient43.setColorAt(0, QColor(136, 136, 221, 255));
        gradient43.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient43.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient43.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient43.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush58(gradient43);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush58);
        QLinearGradient gradient44(0, 0, 0, 1);
        gradient44.setSpread(QGradient::PadSpread);
        gradient44.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient44.setColorAt(0, QColor(136, 136, 221, 255));
        gradient44.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient44.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient44.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient44.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush59(gradient44);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush59);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_browseFasta->setPalette(palette8);

        horizontalLayout_13->addWidget(pushButton_browseFasta);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(-1, -1, -1, 10);
        label_heavyProt = new QLabel(scrollAreaWidgetContents_2);
        label_heavyProt->setObjectName(QStringLiteral("label_heavyProt"));

        horizontalLayout_14->addWidget(label_heavyProt);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        lineEdit_ElheavyProt = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_ElheavyProt->setObjectName(QStringLiteral("lineEdit_ElheavyProt"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_ElheavyProt);

        label_heavyEl = new QLabel(scrollAreaWidgetContents_2);
        label_heavyEl->setObjectName(QStringLiteral("label_heavyEl"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_heavyEl);

        lineEdit_ElheavyProt_2 = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_ElheavyProt_2->setObjectName(QStringLiteral("lineEdit_ElheavyProt_2"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_ElheavyProt_2);

        label_heavyNum = new QLabel(scrollAreaWidgetContents_2);
        label_heavyNum->setObjectName(QStringLiteral("label_heavyNum"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_heavyNum);

        label_heavyProt2 = new QLabel(scrollAreaWidgetContents_2);
        label_heavyProt2->setObjectName(QStringLiteral("label_heavyProt2"));
        QFont font;
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_heavyProt2->setFont(font);
        label_heavyProt2->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, label_heavyProt2);


        verticalLayout_3->addLayout(formLayout_3);

        pushButton_heavyProt = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_heavyProt->setObjectName(QStringLiteral("pushButton_heavyProt"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient45(0, 0, 0, 1);
        gradient45.setSpread(QGradient::PadSpread);
        gradient45.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient45.setColorAt(0, QColor(136, 136, 221, 255));
        gradient45.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient45.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient45.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient45.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush60(gradient45);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush60);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient46(0, 0, 0, 1);
        gradient46.setSpread(QGradient::PadSpread);
        gradient46.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient46.setColorAt(0, QColor(136, 136, 221, 255));
        gradient46.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient46.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient46.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient46.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush61(gradient46);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush61);
        QLinearGradient gradient47(0, 0, 0, 1);
        gradient47.setSpread(QGradient::PadSpread);
        gradient47.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient47.setColorAt(0, QColor(136, 136, 221, 255));
        gradient47.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient47.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient47.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient47.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush62(gradient47);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush62);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient48(0, 0, 0, 1);
        gradient48.setSpread(QGradient::PadSpread);
        gradient48.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient48.setColorAt(0, QColor(136, 136, 221, 255));
        gradient48.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient48.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient48.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient48.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush63(gradient48);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush63);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient49(0, 0, 0, 1);
        gradient49.setSpread(QGradient::PadSpread);
        gradient49.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient49.setColorAt(0, QColor(136, 136, 221, 255));
        gradient49.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient49.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient49.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient49.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush64(gradient49);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush64);
        QLinearGradient gradient50(0, 0, 0, 1);
        gradient50.setSpread(QGradient::PadSpread);
        gradient50.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient50.setColorAt(0, QColor(136, 136, 221, 255));
        gradient50.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient50.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient50.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient50.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush65(gradient50);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush65);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient51(0, 0, 0, 1);
        gradient51.setSpread(QGradient::PadSpread);
        gradient51.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient51.setColorAt(0, QColor(136, 136, 221, 255));
        gradient51.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient51.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient51.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient51.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush66(gradient51);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush66);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient52(0, 0, 0, 1);
        gradient52.setSpread(QGradient::PadSpread);
        gradient52.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient52.setColorAt(0, QColor(136, 136, 221, 255));
        gradient52.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient52.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient52.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient52.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush67(gradient52);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush67);
        QLinearGradient gradient53(0, 0, 0, 1);
        gradient53.setSpread(QGradient::PadSpread);
        gradient53.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient53.setColorAt(0, QColor(136, 136, 221, 255));
        gradient53.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient53.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient53.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient53.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush68(gradient53);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush68);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_heavyProt->setPalette(palette9);

        verticalLayout_3->addWidget(pushButton_heavyProt);

        label_heavyTitle = new QLabel(scrollAreaWidgetContents_2);
        label_heavyTitle->setObjectName(QStringLiteral("label_heavyTitle"));
        label_heavyTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_heavyTitle);

        textEdit_heavyProt = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit_heavyProt->setObjectName(QStringLiteral("textEdit_heavyProt"));

        verticalLayout_3->addWidget(textEdit_heavyProt);


        horizontalLayout_14->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, -1, -1, 10);
        label_Solvent = new QLabel(scrollAreaWidgetContents_2);
        label_Solvent->setObjectName(QStringLiteral("label_Solvent"));

        horizontalLayout_16->addWidget(label_Solvent);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_Solvent2 = new QLabel(scrollAreaWidgetContents_2);
        label_Solvent2->setObjectName(QStringLiteral("label_Solvent2"));
        QFont font1;
        font1.setUnderline(true);
        label_Solvent2->setFont(font1);
        label_Solvent2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_Solvent2);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_solventEl = new QLabel(scrollAreaWidgetContents_2);
        label_solventEl->setObjectName(QStringLiteral("label_solventEl"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_solventEl);

        lineEdit_Elsolvent = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Elsolvent->setObjectName(QStringLiteral("lineEdit_Elsolvent"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_Elsolvent);

        label_solventConc = new QLabel(scrollAreaWidgetContents_2);
        label_solventConc->setObjectName(QStringLiteral("label_solventConc"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_solventConc);

        lineEdit_Elconc = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_Elconc->setObjectName(QStringLiteral("lineEdit_Elconc"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_Elconc);


        verticalLayout_4->addLayout(formLayout_4);

        pushButton_solventConc = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_solventConc->setObjectName(QStringLiteral("pushButton_solventConc"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient54(0, 0, 0, 1);
        gradient54.setSpread(QGradient::PadSpread);
        gradient54.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient54.setColorAt(0, QColor(136, 136, 221, 255));
        gradient54.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient54.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient54.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient54.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush69(gradient54);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush69);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient55(0, 0, 0, 1);
        gradient55.setSpread(QGradient::PadSpread);
        gradient55.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient55.setColorAt(0, QColor(136, 136, 221, 255));
        gradient55.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient55.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient55.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient55.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush70(gradient55);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush70);
        QLinearGradient gradient56(0, 0, 0, 1);
        gradient56.setSpread(QGradient::PadSpread);
        gradient56.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient56.setColorAt(0, QColor(136, 136, 221, 255));
        gradient56.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient56.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient56.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient56.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush71(gradient56);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush71);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient57(0, 0, 0, 1);
        gradient57.setSpread(QGradient::PadSpread);
        gradient57.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient57.setColorAt(0, QColor(136, 136, 221, 255));
        gradient57.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient57.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient57.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient57.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush72(gradient57);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush72);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient58(0, 0, 0, 1);
        gradient58.setSpread(QGradient::PadSpread);
        gradient58.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient58.setColorAt(0, QColor(136, 136, 221, 255));
        gradient58.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient58.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient58.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient58.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush73(gradient58);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush73);
        QLinearGradient gradient59(0, 0, 0, 1);
        gradient59.setSpread(QGradient::PadSpread);
        gradient59.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient59.setColorAt(0, QColor(136, 136, 221, 255));
        gradient59.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient59.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient59.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient59.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush74(gradient59);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush74);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient60(0, 0, 0, 1);
        gradient60.setSpread(QGradient::PadSpread);
        gradient60.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient60.setColorAt(0, QColor(136, 136, 221, 255));
        gradient60.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient60.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient60.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient60.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush75(gradient60);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush75);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient61(0, 0, 0, 1);
        gradient61.setSpread(QGradient::PadSpread);
        gradient61.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient61.setColorAt(0, QColor(136, 136, 221, 255));
        gradient61.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient61.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient61.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient61.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush76(gradient61);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush76);
        QLinearGradient gradient62(0, 0, 0, 1);
        gradient62.setSpread(QGradient::PadSpread);
        gradient62.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient62.setColorAt(0, QColor(136, 136, 221, 255));
        gradient62.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient62.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient62.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient62.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush77(gradient62);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush77);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_solventConc->setPalette(palette10);

        verticalLayout_4->addWidget(pushButton_solventConc);

        label_solventTitle = new QLabel(scrollAreaWidgetContents_2);
        label_solventTitle->setObjectName(QStringLiteral("label_solventTitle"));
        label_solventTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_solventTitle);

        textEdit_solventConc = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit_solventConc->setObjectName(QStringLiteral("textEdit_solventConc"));

        verticalLayout_4->addWidget(textEdit_solventConc);


        horizontalLayout_16->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(-1, -1, -1, 0);
        label_SolventFr = new QLabel(scrollAreaWidgetContents_2);
        label_SolventFr->setObjectName(QStringLiteral("label_SolventFr"));

        horizontalLayout_17->addWidget(label_SolventFr);

        lineEdit_solventFr = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_solventFr->setObjectName(QStringLiteral("lineEdit_solventFr"));

        horizontalLayout_17->addWidget(lineEdit_solventFr);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(-1, -1, -1, 0);
        label_Nucleotides = new QLabel(scrollAreaWidgetContents_2);
        label_Nucleotides->setObjectName(QStringLiteral("label_Nucleotides"));

        horizontalLayout_18->addWidget(label_Nucleotides);

        label_DNA = new QLabel(scrollAreaWidgetContents_2);
        label_DNA->setObjectName(QStringLiteral("label_DNA"));

        horizontalLayout_18->addWidget(label_DNA);

        lineEdit_DNA = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_DNA->setObjectName(QStringLiteral("lineEdit_DNA"));

        horizontalLayout_18->addWidget(lineEdit_DNA);

        label_RNA = new QLabel(scrollAreaWidgetContents_2);
        label_RNA->setObjectName(QStringLiteral("label_RNA"));

        horizontalLayout_18->addWidget(label_RNA);

        lineEdit_RNA = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_RNA->setObjectName(QStringLiteral("lineEdit_RNA"));

        horizontalLayout_18->addWidget(lineEdit_RNA);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(-1, -1, -1, 10);
        label_carb = new QLabel(scrollAreaWidgetContents_2);
        label_carb->setObjectName(QStringLiteral("label_carb"));

        horizontalLayout_19->addWidget(label_carb);

        lineEdit_carb = new QLineEdit(scrollAreaWidgetContents_2);
        lineEdit_carb->setObjectName(QStringLiteral("lineEdit_carb"));

        horizontalLayout_19->addWidget(lineEdit_carb);


        verticalLayout->addLayout(horizontalLayout_19);

        pushButton_crystalAdvanced = new QPushButton(scrollAreaWidgetContents_2);
        pushButton_crystalAdvanced->setObjectName(QStringLiteral("pushButton_crystalAdvanced"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient63(0, 0, 0, 1);
        gradient63.setSpread(QGradient::PadSpread);
        gradient63.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient63.setColorAt(0, QColor(136, 136, 221, 255));
        gradient63.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient63.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient63.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient63.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush78(gradient63);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush78);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient64(0, 0, 0, 1);
        gradient64.setSpread(QGradient::PadSpread);
        gradient64.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient64.setColorAt(0, QColor(136, 136, 221, 255));
        gradient64.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient64.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient64.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient64.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush79(gradient64);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush79);
        QLinearGradient gradient65(0, 0, 0, 1);
        gradient65.setSpread(QGradient::PadSpread);
        gradient65.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient65.setColorAt(0, QColor(136, 136, 221, 255));
        gradient65.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient65.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient65.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient65.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush80(gradient65);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush80);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient66(0, 0, 0, 1);
        gradient66.setSpread(QGradient::PadSpread);
        gradient66.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient66.setColorAt(0, QColor(136, 136, 221, 255));
        gradient66.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient66.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient66.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient66.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush81(gradient66);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush81);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient67(0, 0, 0, 1);
        gradient67.setSpread(QGradient::PadSpread);
        gradient67.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient67.setColorAt(0, QColor(136, 136, 221, 255));
        gradient67.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient67.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient67.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient67.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush82(gradient67);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush82);
        QLinearGradient gradient68(0, 0, 0, 1);
        gradient68.setSpread(QGradient::PadSpread);
        gradient68.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient68.setColorAt(0, QColor(136, 136, 221, 255));
        gradient68.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient68.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient68.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient68.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush83(gradient68);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush83);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient69(0, 0, 0, 1);
        gradient69.setSpread(QGradient::PadSpread);
        gradient69.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient69.setColorAt(0, QColor(136, 136, 221, 255));
        gradient69.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient69.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient69.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient69.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush84(gradient69);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush84);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient70(0, 0, 0, 1);
        gradient70.setSpread(QGradient::PadSpread);
        gradient70.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient70.setColorAt(0, QColor(136, 136, 221, 255));
        gradient70.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient70.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient70.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient70.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush85(gradient70);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush85);
        QLinearGradient gradient71(0, 0, 0, 1);
        gradient71.setSpread(QGradient::PadSpread);
        gradient71.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient71.setColorAt(0, QColor(136, 136, 221, 255));
        gradient71.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient71.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient71.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient71.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush86(gradient71);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush86);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_crystalAdvanced->setPalette(palette11);

        verticalLayout->addWidget(pushButton_crystalAdvanced);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(scrollArea, 0, 0, 1, 1);

        tabWidget->addTab(tabCrystal, QString());
        tabBeam = new QWidget();
        tabBeam->setObjectName(QStringLiteral("tabBeam"));
        gridLayout_2 = new QGridLayout(tabBeam);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scrollArea_2 = new QScrollArea(tabBeam);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 564, 343));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label_beamType = new QLabel(scrollAreaWidgetContents);
        label_beamType->setObjectName(QStringLiteral("label_beamType"));

        horizontalLayout->addWidget(label_beamType);

        comboBox_beamType = new QComboBox(scrollAreaWidgetContents);
        comboBox_beamType->setObjectName(QStringLiteral("comboBox_beamType"));

        horizontalLayout->addWidget(comboBox_beamType);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 0);
        label_beamFile = new QLabel(scrollAreaWidgetContents);
        label_beamFile->setObjectName(QStringLiteral("label_beamFile"));

        horizontalLayout_3->addWidget(label_beamFile);

        lineEdit_beamFile = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_beamFile->setObjectName(QStringLiteral("lineEdit_beamFile"));

        horizontalLayout_3->addWidget(lineEdit_beamFile);

        pushButton_beamFile = new QPushButton(scrollAreaWidgetContents);
        pushButton_beamFile->setObjectName(QStringLiteral("pushButton_beamFile"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QLinearGradient gradient72(0, 0, 0, 1);
        gradient72.setSpread(QGradient::PadSpread);
        gradient72.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient72.setColorAt(0, QColor(136, 136, 221, 255));
        gradient72.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient72.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient72.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient72.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush87(gradient72);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush87);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush11);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush13);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QLinearGradient gradient73(0, 0, 0, 1);
        gradient73.setSpread(QGradient::PadSpread);
        gradient73.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient73.setColorAt(0, QColor(136, 136, 221, 255));
        gradient73.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient73.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient73.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient73.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush88(gradient73);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush88);
        QLinearGradient gradient74(0, 0, 0, 1);
        gradient74.setSpread(QGradient::PadSpread);
        gradient74.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient74.setColorAt(0, QColor(136, 136, 221, 255));
        gradient74.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient74.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient74.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient74.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush89(gradient74);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush89);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush11);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        QLinearGradient gradient75(0, 0, 0, 1);
        gradient75.setSpread(QGradient::PadSpread);
        gradient75.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient75.setColorAt(0, QColor(136, 136, 221, 255));
        gradient75.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient75.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient75.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient75.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush90(gradient75);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush90);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        QLinearGradient gradient76(0, 0, 0, 1);
        gradient76.setSpread(QGradient::PadSpread);
        gradient76.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient76.setColorAt(0, QColor(136, 136, 221, 255));
        gradient76.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient76.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient76.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient76.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush91(gradient76);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush91);
        QLinearGradient gradient77(0, 0, 0, 1);
        gradient77.setSpread(QGradient::PadSpread);
        gradient77.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient77.setColorAt(0, QColor(136, 136, 221, 255));
        gradient77.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient77.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient77.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient77.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush92(gradient77);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush92);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush11);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        QLinearGradient gradient78(0, 0, 0, 1);
        gradient78.setSpread(QGradient::PadSpread);
        gradient78.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient78.setColorAt(0, QColor(136, 136, 221, 255));
        gradient78.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient78.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient78.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient78.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush93(gradient78);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush93);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        QLinearGradient gradient79(0, 0, 0, 1);
        gradient79.setSpread(QGradient::PadSpread);
        gradient79.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient79.setColorAt(0, QColor(136, 136, 221, 255));
        gradient79.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient79.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient79.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient79.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush94(gradient79);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush94);
        QLinearGradient gradient80(0, 0, 0, 1);
        gradient80.setSpread(QGradient::PadSpread);
        gradient80.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient80.setColorAt(0, QColor(136, 136, 221, 255));
        gradient80.setColorAt(0.1, QColor(153, 153, 238, 255));
        gradient80.setColorAt(0.49, QColor(119, 119, 204, 255));
        gradient80.setColorAt(0.5, QColor(102, 102, 187, 255));
        gradient80.setColorAt(1, QColor(119, 119, 204, 255));
        QBrush brush95(gradient80);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush95);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush23);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
        pushButton_beamFile->setPalette(palette12);

        horizontalLayout_3->addWidget(pushButton_beamFile);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(-1, -1, -1, 0);
        label_FWHM = new QLabel(scrollAreaWidgetContents);
        label_FWHM->setObjectName(QStringLiteral("label_FWHM"));

        horizontalLayout_15->addWidget(label_FWHM);

        label_FWHMX = new QLabel(scrollAreaWidgetContents);
        label_FWHMX->setObjectName(QStringLiteral("label_FWHMX"));

        horizontalLayout_15->addWidget(label_FWHMX);

        lineEdit_FWHMX = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_FWHMX->setObjectName(QStringLiteral("lineEdit_FWHMX"));

        horizontalLayout_15->addWidget(lineEdit_FWHMX);

        label_FWHMY = new QLabel(scrollAreaWidgetContents);
        label_FWHMY->setObjectName(QStringLiteral("label_FWHMY"));

        horizontalLayout_15->addWidget(label_FWHMY);

        lineEdit_FWHMY = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_FWHMY->setObjectName(QStringLiteral("lineEdit_FWHMY"));

        horizontalLayout_15->addWidget(lineEdit_FWHMY);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(-1, -1, -1, 0);
        label_pxSize = new QLabel(scrollAreaWidgetContents);
        label_pxSize->setObjectName(QStringLiteral("label_pxSize"));

        horizontalLayout_24->addWidget(label_pxSize);

        label_pxX = new QLabel(scrollAreaWidgetContents);
        label_pxX->setObjectName(QStringLiteral("label_pxX"));

        horizontalLayout_24->addWidget(label_pxX);

        lineEdit_pxSizeX = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_pxSizeX->setObjectName(QStringLiteral("lineEdit_pxSizeX"));

        horizontalLayout_24->addWidget(lineEdit_pxSizeX);

        label_pxY = new QLabel(scrollAreaWidgetContents);
        label_pxY->setObjectName(QStringLiteral("label_pxY"));

        horizontalLayout_24->addWidget(label_pxY);

        lineEdit_pxSizeY = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_pxSizeY->setObjectName(QStringLiteral("lineEdit_pxSizeY"));

        horizontalLayout_24->addWidget(lineEdit_pxSizeY);


        verticalLayout_2->addLayout(horizontalLayout_24);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, -1, -1, 0);
        label_Collimation = new QLabel(scrollAreaWidgetContents);
        label_Collimation->setObjectName(QStringLiteral("label_Collimation"));

        horizontalLayout_20->addWidget(label_Collimation);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(-1, -1, -1, 0);
        label_collType = new QLabel(scrollAreaWidgetContents);
        label_collType->setObjectName(QStringLiteral("label_collType"));

        horizontalLayout_22->addWidget(label_collType);

        comboBox_collType = new QComboBox(scrollAreaWidgetContents);
        comboBox_collType->setObjectName(QStringLiteral("comboBox_collType"));

        horizontalLayout_22->addWidget(comboBox_collType);


        verticalLayout_5->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(-1, -1, -1, 0);
        label_collDims = new QLabel(scrollAreaWidgetContents);
        label_collDims->setObjectName(QStringLiteral("label_collDims"));

        horizontalLayout_23->addWidget(label_collDims);

        label_collX = new QLabel(scrollAreaWidgetContents);
        label_collX->setObjectName(QStringLiteral("label_collX"));

        horizontalLayout_23->addWidget(label_collX);

        lineEdit_collX = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_collX->setObjectName(QStringLiteral("lineEdit_collX"));

        horizontalLayout_23->addWidget(lineEdit_collX);

        label_collY = new QLabel(scrollAreaWidgetContents);
        label_collY->setObjectName(QStringLiteral("label_collY"));

        horizontalLayout_23->addWidget(label_collY);

        lineEdit_collY = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_collY->setObjectName(QStringLiteral("lineEdit_collY"));

        horizontalLayout_23->addWidget(lineEdit_collY);


        verticalLayout_5->addLayout(horizontalLayout_23);


        horizontalLayout_20->addLayout(verticalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_20);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(-1, -1, -1, 0);
        label_pulseEn = new QLabel(scrollAreaWidgetContents);
        label_pulseEn->setObjectName(QStringLiteral("label_pulseEn"));

        horizontalLayout_25->addWidget(label_pulseEn);

        lineEdit_pulseEn = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_pulseEn->setObjectName(QStringLiteral("lineEdit_pulseEn"));

        horizontalLayout_25->addWidget(lineEdit_pulseEn);


        verticalLayout_2->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(-1, -1, -1, 0);
        label_flux = new QLabel(scrollAreaWidgetContents);
        label_flux->setObjectName(QStringLiteral("label_flux"));

        horizontalLayout_26->addWidget(label_flux);

        lineEdit_flux = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_flux->setObjectName(QStringLiteral("lineEdit_flux"));

        horizontalLayout_26->addWidget(lineEdit_flux);


        verticalLayout_2->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(-1, -1, -1, 0);
        label_beamEn = new QLabel(scrollAreaWidgetContents);
        label_beamEn->setObjectName(QStringLiteral("label_beamEn"));

        horizontalLayout_27->addWidget(label_beamEn);

        lineEdit_beamEn = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_beamEn->setObjectName(QStringLiteral("lineEdit_beamEn"));

        horizontalLayout_27->addWidget(lineEdit_beamEn);


        verticalLayout_2->addLayout(horizontalLayout_27);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setContentsMargins(-1, -1, -1, 0);
        label_monochrome = new QLabel(scrollAreaWidgetContents);
        label_monochrome->setObjectName(QStringLiteral("label_monochrome"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_monochrome);

        comboBox_monochrome = new QComboBox(scrollAreaWidgetContents);
        comboBox_monochrome->setObjectName(QStringLiteral("comboBox_monochrome"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, comboBox_monochrome);

        label_beamEnFWHM = new QLabel(scrollAreaWidgetContents);
        label_beamEnFWHM->setObjectName(QStringLiteral("label_beamEnFWHM"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_beamEnFWHM);

        lineEdit_beamEnFWHM = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_beamEnFWHM->setObjectName(QStringLiteral("lineEdit_beamEnFWHM"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, lineEdit_beamEnFWHM);


        verticalLayout_2->addLayout(formLayout_6);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea_2, 0, 0, 1, 1);

        tabWidget->addTab(tabBeam, QString());
        tabWedge = new QWidget();
        tabWedge->setObjectName(QStringLiteral("tabWedge"));
        gridLayout_4 = new QGridLayout(tabWedge);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        scrollArea_3 = new QScrollArea(tabWedge);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 578, 314));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(-1, -1, -1, 0);
        label_startAngle = new QLabel(scrollAreaWidgetContents_3);
        label_startAngle->setObjectName(QStringLiteral("label_startAngle"));

        horizontalLayout_28->addWidget(label_startAngle);

        lineEdit_startAngle = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_startAngle->setObjectName(QStringLiteral("lineEdit_startAngle"));

        horizontalLayout_28->addWidget(lineEdit_startAngle);

        label_endAngle = new QLabel(scrollAreaWidgetContents_3);
        label_endAngle->setObjectName(QStringLiteral("label_endAngle"));

        horizontalLayout_28->addWidget(label_endAngle);

        lineEdit_endAngle = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_endAngle->setObjectName(QStringLiteral("lineEdit_endAngle"));

        horizontalLayout_28->addWidget(lineEdit_endAngle);


        verticalLayout_6->addLayout(horizontalLayout_28);

        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        formLayout_7->setContentsMargins(-1, -1, -1, 0);
        label_expTime = new QLabel(scrollAreaWidgetContents_3);
        label_expTime->setObjectName(QStringLiteral("label_expTime"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_expTime);

        lineEdit_exposureTime = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_exposureTime->setObjectName(QStringLiteral("lineEdit_exposureTime"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, lineEdit_exposureTime);

        label_angleRes = new QLabel(scrollAreaWidgetContents_3);
        label_angleRes->setObjectName(QStringLiteral("label_angleRes"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_angleRes);

        lineEdit_angleRes = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_angleRes->setObjectName(QStringLiteral("lineEdit_angleRes"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, lineEdit_angleRes);


        verticalLayout_6->addLayout(formLayout_7);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        horizontalLayout_29->setContentsMargins(-1, -1, -1, 0);
        label_startOffset = new QLabel(scrollAreaWidgetContents_3);
        label_startOffset->setObjectName(QStringLiteral("label_startOffset"));

        horizontalLayout_29->addWidget(label_startOffset);

        label_offsetX = new QLabel(scrollAreaWidgetContents_3);
        label_offsetX->setObjectName(QStringLiteral("label_offsetX"));

        horizontalLayout_29->addWidget(label_offsetX);

        lineEdit_offsetX = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_offsetX->setObjectName(QStringLiteral("lineEdit_offsetX"));

        horizontalLayout_29->addWidget(lineEdit_offsetX);

        label_offsetY = new QLabel(scrollAreaWidgetContents_3);
        label_offsetY->setObjectName(QStringLiteral("label_offsetY"));

        horizontalLayout_29->addWidget(label_offsetY);

        lineEdit_offsetY = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_offsetY->setObjectName(QStringLiteral("lineEdit_offsetY"));

        horizontalLayout_29->addWidget(lineEdit_offsetY);

        label_offsetZ = new QLabel(scrollAreaWidgetContents_3);
        label_offsetZ->setObjectName(QStringLiteral("label_offsetZ"));

        horizontalLayout_29->addWidget(label_offsetZ);

        lineEdit_offsetZ = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_offsetZ->setObjectName(QStringLiteral("lineEdit_offsetZ"));

        horizontalLayout_29->addWidget(lineEdit_offsetZ);


        verticalLayout_6->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(-1, -1, -1, 0);
        label_tns = new QLabel(scrollAreaWidgetContents_3);
        label_tns->setObjectName(QStringLiteral("label_tns"));

        horizontalLayout_30->addWidget(label_tns);

        label_tnsX = new QLabel(scrollAreaWidgetContents_3);
        label_tnsX->setObjectName(QStringLiteral("label_tnsX"));

        horizontalLayout_30->addWidget(label_tnsX);

        lineEdit_tnsX = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_tnsX->setObjectName(QStringLiteral("lineEdit_tnsX"));

        horizontalLayout_30->addWidget(lineEdit_tnsX);

        label_tnsY = new QLabel(scrollAreaWidgetContents_3);
        label_tnsY->setObjectName(QStringLiteral("label_tnsY"));

        horizontalLayout_30->addWidget(label_tnsY);

        lineEdit_tnsY = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_tnsY->setObjectName(QStringLiteral("lineEdit_tnsY"));

        horizontalLayout_30->addWidget(lineEdit_tnsY);

        label_tnsZ = new QLabel(scrollAreaWidgetContents_3);
        label_tnsZ->setObjectName(QStringLiteral("label_tnsZ"));

        horizontalLayout_30->addWidget(label_tnsZ);

        lineEdit_tnsZ = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_tnsZ->setObjectName(QStringLiteral("lineEdit_tnsZ"));

        horizontalLayout_30->addWidget(lineEdit_tnsZ);


        verticalLayout_6->addLayout(horizontalLayout_30);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        label_rotOffset = new QLabel(scrollAreaWidgetContents_3);
        label_rotOffset->setObjectName(QStringLiteral("label_rotOffset"));

        horizontalLayout_32->addWidget(label_rotOffset);

        lineEdit_rotOffset = new QLineEdit(scrollAreaWidgetContents_3);
        lineEdit_rotOffset->setObjectName(QStringLiteral("lineEdit_rotOffset"));

        horizontalLayout_32->addWidget(lineEdit_rotOffset);


        verticalLayout_6->addLayout(horizontalLayout_32);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_4->addWidget(scrollArea_3, 1, 1, 1, 1);

        tabWidget->addTab(tabWedge, QString());

        gridLayout->addWidget(tabWidget, 4, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 616, 17));
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
        label_logo->setText(QString());
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
        pushButton_run->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
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
        label_PDB->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The PDB code of the protein. Note, this requires an internet connection.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_PDB->setText(QApplication::translate("MainWindow", "PDB", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_UnitCell->setToolTip(QApplication::translate("MainWindow", "The dimensions of the unit cell", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_UnitCell->setText(QApplication::translate("MainWindow", "Unit Cell", Q_NULLPTR));
        label_a->setText(QApplication::translate("MainWindow", "a", Q_NULLPTR));
        lineEdit_a->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        label_b->setText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        lineEdit_b->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        label_c->setText(QApplication::translate("MainWindow", "c", Q_NULLPTR));
        lineEdit_c->setText(QApplication::translate("MainWindow", "78.02", Q_NULLPTR));
        label_alpha->setText(QApplication::translate("MainWindow", "\316\261", Q_NULLPTR));
        lineEdit_alpha->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        label_beta->setText(QApplication::translate("MainWindow", "\316\262", Q_NULLPTR));
        lineEdit_beta->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        label_gamma->setText(QApplication::translate("MainWindow", "\316\263", Q_NULLPTR));
        lineEdit_gamma->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_CIF->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The file path to the cif file</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_CIF->setText(QApplication::translate("MainWindow", "CIF", Q_NULLPTR));
        pushButton_CIF->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pConc->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>In SAXS, this is the concentration of protein in grams per litre</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pConc->setText(QApplication::translate("MainWindow", "Protein Conc (mg/ml)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Monomers->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of monomers in the unit cell</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Monomers->setText(QApplication::translate("MainWindow", "No. Monomers", Q_NULLPTR));
        lineEdit_Monomers->setText(QApplication::translate("MainWindow", "24", Q_NULLPTR));
        label_Residues->setText(QApplication::translate("MainWindow", "No. Residues per monomer", Q_NULLPTR));
        lineEdit_Residues->setText(QApplication::translate("MainWindow", "51", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_fasta->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The path to the FASTA file specifying the sample sequence</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_fasta->setText(QApplication::translate("MainWindow", "FASTA file", Q_NULLPTR));
        pushButton_browseFasta->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_heavyProt->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The elemental symbol and number present per monomer of heavy atoms (above oxygen) present in the sample</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_heavyProt->setText(QApplication::translate("MainWindow", "Heavy atoms per monomer", Q_NULLPTR));
        label_heavyEl->setText(QApplication::translate("MainWindow", "Element Symbol", Q_NULLPTR));
        label_heavyNum->setText(QApplication::translate("MainWindow", "Number", Q_NULLPTR));
        label_heavyProt2->setText(QApplication::translate("MainWindow", "Heavy atoms per monomer", Q_NULLPTR));
        pushButton_heavyProt->setText(QApplication::translate("MainWindow", "Add Element", Q_NULLPTR));
        label_heavyTitle->setText(QApplication::translate("MainWindow", "Heavy atom list", Q_NULLPTR));
        textEdit_heavyProt->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Zn 0.333</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">S 6</p></body></html>", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Solvent->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The concentration in mM of heavy atoms (above oxygen) present in the sample</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Solvent->setText(QApplication::translate("MainWindow", "Solvent atom concentration", Q_NULLPTR));
        label_Solvent2->setText(QApplication::translate("MainWindow", "Solvent atom concentration", Q_NULLPTR));
        label_solventEl->setText(QApplication::translate("MainWindow", "Element Symbol", Q_NULLPTR));
        lineEdit_Elsolvent->setText(QString());
        label_solventConc->setText(QApplication::translate("MainWindow", "Concentration (mM)", Q_NULLPTR));
        lineEdit_Elconc->setText(QString());
        pushButton_solventConc->setText(QApplication::translate("MainWindow", "Add Element", Q_NULLPTR));
        label_solventTitle->setText(QApplication::translate("MainWindow", "Solvent atom list", Q_NULLPTR));
        textEdit_solventConc->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">P 425</p></body></html>", Q_NULLPTR));
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
        label_carb->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The number of carbohydrate residues per monomer</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_carb->setText(QApplication::translate("MainWindow", "Carbohydrate units per monomer", Q_NULLPTR));
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
        label_beamFile->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The file path to the .pgm file with the beam profile</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamFile->setText(QApplication::translate("MainWindow", "Beam file", Q_NULLPTR));
        pushButton_beamFile->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_FWHM->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The X and Y of the FWHM of a Gaussian beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_FWHM->setText(QApplication::translate("MainWindow", "FWHM", Q_NULLPTR));
        label_FWHMX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_FWHMX->setText(QApplication::translate("MainWindow", "20", Q_NULLPTR));
        label_FWHMY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_FWHMY->setText(QApplication::translate("MainWindow", "70", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pxSize->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>X and Y specify the horizontal and vertical size of the pixels in micrometers in the .pgm file respectively.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pxSize->setText(QApplication::translate("MainWindow", "Pixel size", Q_NULLPTR));
        label_pxX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_pxY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_Collimation->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The X and Y collimation of the beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_Collimation->setText(QApplication::translate("MainWindow", "Collimation", Q_NULLPTR));
        label_collType->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        comboBox_collType->clear();
        comboBox_collType->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Rectangular", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Circular", Q_NULLPTR)
         << QApplication::translate("MainWindow", "None", Q_NULLPTR)
        );
        label_collDims->setText(QApplication::translate("MainWindow", "Dimensions", Q_NULLPTR));
        label_collX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_collX->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        label_collY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_collY->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_pulseEn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The energy of an XFEL pulse in mJ</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_pulseEn->setText(QApplication::translate("MainWindow", "Pulse Energy (mJ)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_flux->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The flux of the beam in photons per second</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_flux->setText(QApplication::translate("MainWindow", "Flux (photons/s)", Q_NULLPTR));
        lineEdit_flux->setText(QApplication::translate("MainWindow", "2e12", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_beamEn->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The energy of the X-ray beam in keV</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamEn->setText(QApplication::translate("MainWindow", "Beam Energy (keV)", Q_NULLPTR));
        lineEdit_beamEn->setText(QApplication::translate("MainWindow", "12.1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_monochrome->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Whether the beam is monochramtic or pink/white</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_monochrome->setText(QApplication::translate("MainWindow", "Monochromatic beam?", Q_NULLPTR));
        comboBox_monochrome->clear();
        comboBox_monochrome->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Yes", Q_NULLPTR)
         << QApplication::translate("MainWindow", "No", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        label_beamEnFWHM->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Teh energy spread of the beam</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_beamEnFWHM->setText(QApplication::translate("MainWindow", "Energy FWHM (keV)", Q_NULLPTR));
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
        label_expTime->setText(QApplication::translate("MainWindow", "Exposure time (s)", Q_NULLPTR));
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
        label_offsetX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_offsetX->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_offsetY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_offsetY->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_offsetZ->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        lineEdit_offsetZ->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_tns->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>translation of the goniometer during exposure in \316\274m/ \342\227\246 for helical scanning</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_tns->setText(QApplication::translate("MainWindow", "Translation per degree", Q_NULLPTR));
        label_tnsX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        lineEdit_tnsX->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_tnsY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        lineEdit_tnsY->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_tnsZ->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        lineEdit_tnsZ->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_rotOffset->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>The offset in \316\274m along X (vertical in most set-ups) between the beam axis and the rotation axis</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_rotOffset->setText(QApplication::translate("MainWindow", "Rotation offset", Q_NULLPTR));
        lineEdit_rotOffset->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabWedge), QApplication::translate("MainWindow", "Wedge", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
