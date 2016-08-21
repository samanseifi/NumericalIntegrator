#include "numericalintegrator.h"
#include "ui_numericalintegrator.h"
#include <iostream>
#include <python2.7/Python.h>
#include <stdio.h>
#include <fstream>

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


double NumericalIntegrator::Evaluate_Function(QString functionStr, QString a)
{
    /* replace the power operator to python syntax (i.e. 2^3 becomes 2**3) */
    functionStr.replace("^", "**");
    functionStr = functionStr.toLower(); // uppercases to lowercases!

    functionStr.replace("exp", "eyp");
    functionStr.replace("x", a);
    functionStr.replace("eyp", "exp");
    QByteArray ba = functionStr.toLatin1();
    const char *funcName = ba.data();


    /* Storing the value to a file in Python! */
    Py_Initialize();
    char line[100] = "d = eval('";
    strcat(line, funcName);
    char end[100] = "')";
    PyRun_SimpleString("from math import * \n"); // math functions are now applicable: cos, sin, exp etc.
    PyRun_SimpleString("text_file = open('output.txt', 'w') ");
    PyRun_SimpleString( strcat( line, end));
    PyRun_SimpleString("text_file.write('%s' % d)");
    PyRun_SimpleString("text_file.close()");
    Py_Finalize();

    /* Now reading it in C++ */
    std::ifstream file;
    file.open("output.txt");
    float evaluated;
    file >> evaluated;
    file.close();

    return evaluated;
}

void NumericalIntegrator::on_pushButton_2_clicked()
{
    QString functionStr = ui->lineEdit->text();

    double sum;
    double a = ui->lineEdit_2->text().toDouble();
    double b = ui->lineEdit_3->text().toDouble();
    const double n = 100.0;

    for (int k = 1; k < n; k++)
    {
        double f_k = a + k*(b-a)/n;
        QString x_k = QString::number(f_k);
        sum = sum + Evaluate_Function(functionStr, x_k);
    }

    std::cout << ((b-a)/n)*(Evaluate_Function(functionStr, ui->lineEdit_2->text())/2.0 + sum + Evaluate_Function(functionStr, ui->lineEdit_3->text())/2.0) << std::endl;


}
