#include "numericalintegrator.h"
#include "ui_numericalintegrator.h"
#include <iostream>
#include <python2.7/Python.h>
#include <stdio.h>

NumericalIntegrator::NumericalIntegrator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NumericalIntegrator)
{
    ui->setupUi(this);
}

NumericalIntegrator::~NumericalIntegrator()
{
    delete ui;
}

void NumericalIntegrator::on_pushButton_clicked()
{
    QString functionStr = ui->lineEdit->text();

    /* replace the power operator to python syntax (i.e. 2^3 becomes 2**3) */
    const QString before = "^";
    const QString after = "**";
    functionStr.replace(before, after);
    functionStr = functionStr.toLower(); // uppercases to lowercases!
    QByteArray ba = functionStr.toLatin1();
    const char *funcName = ba.data();


    Evaluate_Function(funcName);


}

void NumericalIntegrator::Evaluate_Function(const char* funcName)
{

    /* Starting using Python interpreter! */
    Py_Initialize();

    char line[100] = "print eval('";
    strcat(line, funcName);
    char end[100] = "')";
    PyRun_SimpleString("from math import * \n"); // math functions are now applicable: cos, sin, exp etc.
    PyRun_SimpleString( strcat( line, end));

    Py_Finalize();
}
