/********************************************************************************
** Form generated from reading UI file 'qtest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTEST_H
#define UI_QTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <my_label.h>

QT_BEGIN_NAMESPACE

class Ui_QtestClass
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QWidget *centralWidget;
    my_label *picture;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *mylabel;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QRadioButton *angle1;
    QRadioButton *angle2;
    QGroupBox *groupBox_2;
    QRadioButton *turnleft;
    QRadioButton *turnright;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_3;
    QRadioButton *updown;
    QRadioButton *leftright;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_4;
    QRadioButton *square;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *xlabel;
    QLabel *ylabel;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtestClass)
    {
        if (QtestClass->objectName().isEmpty())
            QtestClass->setObjectName(QStringLiteral("QtestClass"));
        QtestClass->resize(875, 605);
        action_Open = new QAction(QtestClass);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_Save = new QAction(QtestClass);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        centralWidget = new QWidget(QtestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        picture = new my_label(centralWidget);
        picture->setObjectName(QStringLiteral("picture"));
        picture->setGeometry(QRect(150, 10, 700, 500));
        picture->setCursor(QCursor(Qt::CrossCursor));
        picture->setMouseTracking(true);
        picture->setFrameShape(QFrame::Box);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 111, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mylabel = new QLabel(verticalLayoutWidget);
        mylabel->setObjectName(QStringLiteral("mylabel"));

        verticalLayout->addWidget(mylabel, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        angle1 = new QRadioButton(groupBox);
        angle1->setObjectName(QStringLiteral("angle1"));
        angle1->setGeometry(QRect(0, 20, 31, 16));
        angle2 = new QRadioButton(groupBox);
        angle2->setObjectName(QStringLiteral("angle2"));
        angle2->setGeometry(QRect(50, 20, 41, 16));

        horizontalLayout->addWidget(groupBox);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        turnleft = new QRadioButton(groupBox_2);
        turnleft->setObjectName(QStringLiteral("turnleft"));
        turnleft->setGeometry(QRect(0, 20, 41, 16));
        turnright = new QRadioButton(groupBox_2);
        turnright->setObjectName(QStringLiteral("turnright"));
        turnright->setGeometry(QRect(50, 20, 51, 16));

        verticalLayout->addWidget(groupBox_2);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        groupBox_3 = new QGroupBox(verticalLayoutWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        updown = new QRadioButton(groupBox_3);
        updown->setObjectName(QStringLiteral("updown"));
        updown->setGeometry(QRect(0, 20, 51, 16));
        leftright = new QRadioButton(groupBox_3);
        leftright->setObjectName(QStringLiteral("leftright"));
        leftright->setGeometry(QRect(50, 20, 51, 16));

        verticalLayout->addWidget(groupBox_3);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        groupBox_4 = new QGroupBox(verticalLayoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        square = new QRadioButton(groupBox_4);
        square->setObjectName(QStringLiteral("square"));
        square->setGeometry(QRect(0, 20, 41, 16));

        verticalLayout->addWidget(groupBox_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(660, 520, 121, 20));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        xlabel = new QLabel(horizontalLayoutWidget_5);
        xlabel->setObjectName(QStringLiteral("xlabel"));

        horizontalLayout_5->addWidget(xlabel);

        ylabel = new QLabel(horizontalLayoutWidget_5);
        ylabel->setObjectName(QStringLiteral("ylabel"));

        horizontalLayout_5->addWidget(ylabel);

        QtestClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        QtestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtestClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtestClass->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);

        retranslateUi(QtestClass);
        QObject::connect(action_Open, SIGNAL(triggered()), QtestClass, SLOT(on_Qtest_fileopen()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), QtestClass, SLOT(on_Qtest_reverseoperation()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), QtestClass, SLOT(on_Qtest_turnoperation()));
        QObject::connect(action_Save, SIGNAL(triggered()), QtestClass, SLOT(on_Qtest_filesave()));

        QMetaObject::connectSlotsByName(QtestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtestClass)
    {
        QtestClass->setWindowTitle(QApplication::translate("QtestClass", "Qtest", 0));
        action_Open->setText(QApplication::translate("QtestClass", "&Open", 0));
        action_Save->setText(QApplication::translate("QtestClass", "&Save", 0));
        picture->setText(QString());
        mylabel->setText(QApplication::translate("QtestClass", "\345\267\245\345\205\267\347\256\261", 0));
        groupBox->setTitle(QApplication::translate("QtestClass", "\346\227\213\350\275\254\350\247\222\345\272\246", 0));
        angle1->setText(QApplication::translate("QtestClass", "90", 0));
        angle2->setText(QApplication::translate("QtestClass", "180", 0));
        groupBox_2->setTitle(QApplication::translate("QtestClass", "\346\227\213\350\275\254\346\226\271\345\220\221", 0));
        turnleft->setText(QApplication::translate("QtestClass", "\345\267\246", 0));
        turnright->setText(QApplication::translate("QtestClass", "\345\217\263", 0));
        pushButton_2->setText(QApplication::translate("QtestClass", "\347\202\271\346\210\221\346\227\213\350\275\254", 0));
        groupBox_3->setTitle(QApplication::translate("QtestClass", "\347\277\273\350\275\254\346\226\271\345\220\221", 0));
        updown->setText(QApplication::translate("QtestClass", "\344\270\212\344\270\213", 0));
        leftright->setText(QApplication::translate("QtestClass", "\345\267\246\345\217\263", 0));
        pushButton_3->setText(QApplication::translate("QtestClass", "\347\202\271\346\210\221\347\277\273\350\275\254", 0));
        groupBox_4->setTitle(QApplication::translate("QtestClass", "\350\243\201\345\211\252\345\275\242\347\212\266", 0));
        square->setText(QApplication::translate("QtestClass", "\346\226\271\345\275\242", 0));
        pushButton->setText(QApplication::translate("QtestClass", "\347\202\271\346\210\221\350\243\201\345\211\252", 0));
        xlabel->setText(QApplication::translate("QtestClass", "X", 0));
        ylabel->setText(QApplication::translate("QtestClass", "Y", 0));
        menu_File->setTitle(QApplication::translate("QtestClass", "&File", 0));
        menuHelp->setTitle(QApplication::translate("QtestClass", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class QtestClass: public Ui_QtestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTEST_H
