/********************************************************************************
** Form generated from reading UI file 'numericalintegrator.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMERICALINTEGRATOR_H
#define UI_NUMERICALINTEGRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumericalIntegrator
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *NumericalIntegrator)
    {
        if (NumericalIntegrator->objectName().isEmpty())
            NumericalIntegrator->setObjectName(QStringLiteral("NumericalIntegrator"));
        NumericalIntegrator->resize(434, 78);
        centralWidget = new QWidget(NumericalIntegrator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(46, 7, 261, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(9, 11, 31, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(374, 10, 21, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(316, 10, 21, 17));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(332, 7, 30, 27));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(392, 7, 30, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(324, 40, 97, 26));
        NumericalIntegrator->setCentralWidget(centralWidget);

        retranslateUi(NumericalIntegrator);

        QMetaObject::connectSlotsByName(NumericalIntegrator);
    } // setupUi

    void retranslateUi(QMainWindow *NumericalIntegrator)
    {
        NumericalIntegrator->setWindowTitle(QApplication::translate("NumericalIntegrator", "NumericalIntegrator", 0));
        label->setText(QApplication::translate("NumericalIntegrator", "f(x)=", 0));
        label_2->setText(QApplication::translate("NumericalIntegrator", "b=", 0));
        label_3->setText(QApplication::translate("NumericalIntegrator", "<html><head/><body><p>a=</p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("NumericalIntegrator", "Integrate!", 0));
    } // retranslateUi

};

namespace Ui {
    class NumericalIntegrator: public Ui_NumericalIntegrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICALINTEGRATOR_H
