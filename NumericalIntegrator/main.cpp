#include "numericalintegrator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NumericalIntegrator w;
    w.show();

    return a.exec();
}
