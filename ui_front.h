/********************************************************************************
** Form generated from reading UI file 'front.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRONT_H
#define UI_FRONT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "CustomGraphics.h"
#include "CustomSpinner.h"

QT_BEGIN_NAMESPACE

class Ui_Main
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *gText;
    QLabel *label_4;
    QDoubleSpinBox *zoomSpin;
    QLabel *label;
    QPushButton *savButton;
    QProgressBar *progressBar;
    QPushButton *genButton;
    QLabel *label_3;
    CustomGraphics *graphicsView;
    QLabel *label_2;
    QSpinBox *iterSpin;
    QSlider *fiSlider;
    QLabel *label_5;
    QDoubleSpinBox *rSpin;
    QLabel *infoLabel;
    QPlainTextEdit *fText;
    QHBoxLayout *horizontalLayout;
    CustomSpinner *colorSpin;
    QSpinBox *shiftSpin;
    QPushButton *resetButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main)
    {
        if (Main->objectName().isEmpty())
            Main->setObjectName(QString::fromUtf8("Main"));
        Main->resize(944, 697);
        centralwidget = new QWidget(Main);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gText = new QPlainTextEdit(centralwidget);
        gText->setObjectName(QString::fromUtf8("gText"));

        gridLayout->addWidget(gText, 14, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        zoomSpin = new QDoubleSpinBox(centralwidget);
        zoomSpin->setObjectName(QString::fromUtf8("zoomSpin"));
        zoomSpin->setDecimals(4);
        zoomSpin->setMinimum(0.0001);
        zoomSpin->setMaximum(100000);
        zoomSpin->setSingleStep(0.1);
        zoomSpin->setValue(1);

        gridLayout->addWidget(zoomSpin, 7, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        savButton = new QPushButton(centralwidget);
        savButton->setObjectName(QString::fromUtf8("savButton"));

        gridLayout->addWidget(savButton, 0, 0, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(100);

        gridLayout->addWidget(progressBar, 16, 0, 1, 1);

        genButton = new QPushButton(centralwidget);
        genButton->setObjectName(QString::fromUtf8("genButton"));

        gridLayout->addWidget(genButton, 1, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        graphicsView = new CustomGraphics(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::OpenHandCursor)));

        gridLayout->addWidget(graphicsView, 0, 1, 17, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        iterSpin = new QSpinBox(centralwidget);
        iterSpin->setObjectName(QString::fromUtf8("iterSpin"));
        iterSpin->setMinimum(1);
        iterSpin->setMaximum(1000000);
        iterSpin->setSingleStep(10);
        iterSpin->setValue(100);

        gridLayout->addWidget(iterSpin, 3, 0, 1, 1);

        fiSlider = new QSlider(centralwidget);
        fiSlider->setObjectName(QString::fromUtf8("fiSlider"));
        fiSlider->setMaximum(1000);
        fiSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(fiSlider, 10, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 11, 0, 1, 1);

        rSpin = new QDoubleSpinBox(centralwidget);
        rSpin->setObjectName(QString::fromUtf8("rSpin"));
        rSpin->setDecimals(4);
        rSpin->setMaximum(100);
        rSpin->setSingleStep(0.1);

        gridLayout->addWidget(rSpin, 12, 0, 1, 1);

        infoLabel = new QLabel(centralwidget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        gridLayout->addWidget(infoLabel, 15, 0, 1, 1);

        fText = new QPlainTextEdit(centralwidget);
        fText->setObjectName(QString::fromUtf8("fText"));
        fText->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(fText, 13, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        colorSpin = new CustomSpinner(centralwidget);
        colorSpin->setObjectName(QString::fromUtf8("colorSpin"));
        colorSpin->setMaximum(16777215);
        colorSpin->setSingleStep(1);
        colorSpin->setValue(16777215);

        horizontalLayout->addWidget(colorSpin);

        shiftSpin = new QSpinBox(centralwidget);
        shiftSpin->setObjectName(QString::fromUtf8("shiftSpin"));
        shiftSpin->setMinimum(1);
        shiftSpin->setMaximum(6);
        shiftSpin->setValue(1);

        horizontalLayout->addWidget(shiftSpin);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));

        gridLayout->addWidget(resetButton, 8, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 6);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Main->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 944, 25));
        Main->setMenuBar(menubar);
        statusbar = new QStatusBar(Main);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Main->setStatusBar(statusbar);
        QWidget::setTabOrder(savButton, genButton);
        QWidget::setTabOrder(genButton, iterSpin);
        QWidget::setTabOrder(iterSpin, colorSpin);
        QWidget::setTabOrder(colorSpin, shiftSpin);
        QWidget::setTabOrder(shiftSpin, zoomSpin);
        QWidget::setTabOrder(zoomSpin, fiSlider);
        QWidget::setTabOrder(fiSlider, rSpin);
        QWidget::setTabOrder(rSpin, fText);
        QWidget::setTabOrder(fText, gText);
        QWidget::setTabOrder(gText, graphicsView);

        retranslateUi(Main);

        QMetaObject::connectSlotsByName(Main);
    } // setupUi

    void retranslateUi(QMainWindow *Main)
    {
        Main->setWindowTitle(QApplication::translate("Main", "Fractal Gen", 0, QApplication::UnicodeUTF8));
        gText->setPlainText(QApplication::translate("Main", "1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Main", "Constant FI:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Main", "Colormap:", 0, QApplication::UnicodeUTF8));
        savButton->setText(QApplication::translate("Main", "Save", 0, QApplication::UnicodeUTF8));
        genButton->setText(QApplication::translate("Main", "Generate", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Main", "Zoom:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Main", "Iterations:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Main", "Constant R:", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("Main", "Click generate", 0, QApplication::UnicodeUTF8));
        fText->setPlainText(QApplication::translate("Main", "1z^2", 0, QApplication::UnicodeUTF8));
        colorSpin->setPrefix(QApplication::translate("Main", "0x", 0, QApplication::UnicodeUTF8));
        resetButton->setText(QApplication::translate("Main", "Reset position", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Main: public Ui_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRONT_H
