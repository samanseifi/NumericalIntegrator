#ifndef NUMERICALINTEGRATOR_H
#define NUMERICALINTEGRATOR_H

#include <QMainWindow>
#include <python2.7/Python.h>

namespace Ui {
class NumericalIntegrator;
}

class NumericalIntegrator : public QMainWindow
{
    Q_OBJECT

public:
    explicit NumericalIntegrator(QWidget *parent = 0);
    ~NumericalIntegrator();

private slots:
    void on_pushButton_clicked();
    double Evaluate_Function(QString functionStr, QString a);


    void on_pushButton_2_clicked();

private:
    Ui::NumericalIntegrator *ui;

};

#endif // NUMERICALINTEGRATOR_H
