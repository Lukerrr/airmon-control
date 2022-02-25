/********************************************************************************
** Form generated from reading UI file 'user_interfaceouUycv.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef USER_INTERFACEOUUYCV_H
#define USER_INTERFACEOUUYCV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QAction *actionaa;
    QAction *actionbb;
    QWidget *centralwidget;
    QGroupBox *droneStateBox;
    QLabel *droneStatePos;
    QLabel *droneStateRot;
    QLabel *droneStateData;
    QLabel *chargeLabel;
    QProgressBar *chargeBar;
    QPushButton *armBtn;
    QLabel *connStateLabel;
    QPushButton *startBtn;
    QPushButton *plannerBtn;
    QDoubleSpinBox *heightSpinBox;
    QLabel *heightLabel;
    QPushButton *sendPathBtn;
    QPushButton *adjustHeightBtn;
    QLabel *toleranceLabel;
    QDoubleSpinBox *toleranceSpinBox;
    QPushButton *adjustToleranceBtn;
    QLabel *pathSpacingLabel;
    QDoubleSpinBox *pathSpacingSpinBox;
    QPushButton *getAirSensBtn;
    QProgressBar *airSensDownloadBar;

    void setupUi(QMainWindow *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QString::fromUtf8("UserInterface"));
        UserInterface->setEnabled(true);
        UserInterface->resize(543, 207);
        UserInterface->setContextMenuPolicy(Qt::DefaultContextMenu);
        UserInterface->setDocumentMode(false);
        UserInterface->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionaa = new QAction(UserInterface);
        actionaa->setObjectName(QString::fromUtf8("actionaa"));
        actionbb = new QAction(UserInterface);
        actionbb->setObjectName(QString::fromUtf8("actionbb"));
        centralwidget = new QWidget(UserInterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        droneStateBox = new QGroupBox(centralwidget);
        droneStateBox->setObjectName(QString::fromUtf8("droneStateBox"));
        droneStateBox->setEnabled(true);
        droneStateBox->setGeometry(QRect(260, 10, 271, 171));
        droneStatePos = new QLabel(droneStateBox);
        droneStatePos->setObjectName(QString::fromUtf8("droneStatePos"));
        droneStatePos->setGeometry(QRect(10, 30, 251, 21));
        droneStateRot = new QLabel(droneStateBox);
        droneStateRot->setObjectName(QString::fromUtf8("droneStateRot"));
        droneStateRot->setGeometry(QRect(10, 50, 251, 21));
        droneStateData = new QLabel(droneStateBox);
        droneStateData->setObjectName(QString::fromUtf8("droneStateData"));
        droneStateData->setGeometry(QRect(10, 70, 251, 21));
        chargeLabel = new QLabel(droneStateBox);
        chargeLabel->setObjectName(QString::fromUtf8("chargeLabel"));
        chargeLabel->setEnabled(true);
        chargeLabel->setGeometry(QRect(10, 140, 111, 17));
        chargeBar = new QProgressBar(droneStateBox);
        chargeBar->setObjectName(QString::fromUtf8("chargeBar"));
        chargeBar->setEnabled(true);
        chargeBar->setGeometry(QRect(120, 137, 141, 23));
        chargeBar->setValue(0);
        armBtn = new QPushButton(centralwidget);
        armBtn->setObjectName(QString::fromUtf8("armBtn"));
        armBtn->setEnabled(true);
        armBtn->setGeometry(QRect(10, 10, 89, 25));
        connStateLabel = new QLabel(centralwidget);
        connStateLabel->setObjectName(QString::fromUtf8("connStateLabel"));
        connStateLabel->setGeometry(QRect(430, 185, 101, 17));
        connStateLabel->setLayoutDirection(Qt::LeftToRight);
        connStateLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        startBtn = new QPushButton(centralwidget);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setEnabled(false);
        startBtn->setGeometry(QRect(10, 70, 89, 25));
        plannerBtn = new QPushButton(centralwidget);
        plannerBtn->setObjectName(QString::fromUtf8("plannerBtn"));
        plannerBtn->setEnabled(true);
        plannerBtn->setGeometry(QRect(150, 10, 89, 25));
        heightSpinBox = new QDoubleSpinBox(centralwidget);
        heightSpinBox->setObjectName(QString::fromUtf8("heightSpinBox"));
        heightSpinBox->setGeometry(QRect(80, 101, 61, 18));
        heightSpinBox->setMinimum(0.500000000000000);
        heightSpinBox->setMaximum(8.000000000000000);
        heightSpinBox->setSingleStep(0.010000000000000);
        heightSpinBox->setValue(2.000000000000000);
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setGeometry(QRect(10, 102, 51, 17));
        sendPathBtn = new QPushButton(centralwidget);
        sendPathBtn->setObjectName(QString::fromUtf8("sendPathBtn"));
        sendPathBtn->setEnabled(false);
        sendPathBtn->setGeometry(QRect(10, 40, 89, 25));
        adjustHeightBtn = new QPushButton(centralwidget);
        adjustHeightBtn->setObjectName(QString::fromUtf8("adjustHeightBtn"));
        adjustHeightBtn->setEnabled(true);
        adjustHeightBtn->setGeometry(QRect(150, 100, 89, 20));
        toleranceLabel = new QLabel(centralwidget);
        toleranceLabel->setObjectName(QString::fromUtf8("toleranceLabel"));
        toleranceLabel->setGeometry(QRect(10, 122, 61, 17));
        toleranceSpinBox = new QDoubleSpinBox(centralwidget);
        toleranceSpinBox->setObjectName(QString::fromUtf8("toleranceSpinBox"));
        toleranceSpinBox->setGeometry(QRect(80, 121, 61, 18));
        toleranceSpinBox->setMinimum(0.010000000000000);
        toleranceSpinBox->setMaximum(15.000000000000000);
        toleranceSpinBox->setSingleStep(0.010000000000000);
        toleranceSpinBox->setValue(1.000000000000000);
        adjustToleranceBtn = new QPushButton(centralwidget);
        adjustToleranceBtn->setObjectName(QString::fromUtf8("adjustToleranceBtn"));
        adjustToleranceBtn->setEnabled(true);
        adjustToleranceBtn->setGeometry(QRect(150, 120, 89, 20));
        pathSpacingLabel = new QLabel(centralwidget);
        pathSpacingLabel->setObjectName(QString::fromUtf8("pathSpacingLabel"));
        pathSpacingLabel->setGeometry(QRect(10, 165, 71, 17));
        pathSpacingSpinBox = new QDoubleSpinBox(centralwidget);
        pathSpacingSpinBox->setObjectName(QString::fromUtf8("pathSpacingSpinBox"));
        pathSpacingSpinBox->setGeometry(QRect(80, 166, 61, 18));
        pathSpacingSpinBox->setDecimals(2);
        pathSpacingSpinBox->setMinimum(1.000000000000000);
        pathSpacingSpinBox->setMaximum(100.000000000000000);
        pathSpacingSpinBox->setSingleStep(0.010000000000000);
        pathSpacingSpinBox->setValue(5.000000000000000);
        getAirSensBtn = new QPushButton(centralwidget);
        getAirSensBtn->setObjectName(QString::fromUtf8("getAirSensBtn"));
        getAirSensBtn->setEnabled(true);
        getAirSensBtn->setGeometry(QRect(150, 40, 89, 25));
        airSensDownloadBar = new QProgressBar(centralwidget);
        airSensDownloadBar->setObjectName(QString::fromUtf8("airSensDownloadBar"));
        airSensDownloadBar->setEnabled(false);
        airSensDownloadBar->setGeometry(QRect(150, 70, 89, 23));
        airSensDownloadBar->setAutoFillBackground(true);
        airSensDownloadBar->setValue(0);
        airSensDownloadBar->setTextVisible(false);
        UserInterface->setCentralWidget(centralwidget);

        retranslateUi(UserInterface);

        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QMainWindow *UserInterface)
    {
        UserInterface->setWindowTitle(QApplication::translate("UserInterface", "AirMonitor", nullptr));
        actionaa->setText(QApplication::translate("UserInterface", "aa", nullptr));
        actionbb->setText(QApplication::translate("UserInterface", "bb", nullptr));
        droneStateBox->setTitle(QApplication::translate("UserInterface", "Vehicle data", nullptr));
        droneStatePos->setText(QApplication::translate("UserInterface", "Position: [0.0, 0.0, 0.0]", nullptr));
        droneStateRot->setText(QApplication::translate("UserInterface", "Rotation: [0.0, 0.0, 0.0]", nullptr));
        droneStateData->setText(QApplication::translate("UserInterface", "Air data size: 0 (0 B)", nullptr));
        chargeLabel->setText(QApplication::translate("UserInterface", "Battery charge:", nullptr));
        armBtn->setText(QApplication::translate("UserInterface", "Arm", nullptr));
        connStateLabel->setText(QApplication::translate("UserInterface", "Disconnected", nullptr));
        startBtn->setText(QApplication::translate("UserInterface", "Start", nullptr));
        plannerBtn->setText(QApplication::translate("UserInterface", "Planner", nullptr));
        heightLabel->setText(QApplication::translate("UserInterface", "Height:", nullptr));
        sendPathBtn->setText(QApplication::translate("UserInterface", "Send path", nullptr));
        adjustHeightBtn->setText(QApplication::translate("UserInterface", "Adjust", nullptr));
        toleranceLabel->setText(QApplication::translate("UserInterface", "Tolerance:", nullptr));
        adjustToleranceBtn->setText(QApplication::translate("UserInterface", "Adjust", nullptr));
        pathSpacingLabel->setText(QApplication::translate("UserInterface", "Path spacing:", nullptr));
        getAirSensBtn->setText(QApplication::translate("UserInterface", "Get data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // USER_INTERFACEOUUYCV_H
