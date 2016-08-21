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
    QPushButton *pushButton;

    void setupUi(QMainWindow *NumericalIntegrator)
    {
        if (NumericalIntegrator->objectName().isEmpty())
            NumericalIntegrator->setObjectName(QStringLiteral("NumericalIntegrator"));
        NumericalIntegrator->resize(400, 106);
        centralWidget = new QWidget(NumericalIntegrator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 10, 261, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 60, 97, 26));
        NumericalIntegrator->setCentralWidget(centralWidget);

        retranslateUi(NumericalIntegrator);

        QMetaObject::connectSlotsByName(NumericalIntegrator);
    } // setupUi

    void retranslateUi(QMainWindow *NumericalIntegrator)
    {
        NumericalIntegrator->setWindowTitle(QApplication::translate("NumericalIntegrator", "NumericalIntegrator", 0));
        pushButton->setText(QApplication::translate("NumericalIntegrator", "Evaluate", 0));
    } // retranslateUi

};

namespace Ui {
    class NumericalIntegrator: public Ui_NumericalIntegrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICALINTEGRATOR_H
