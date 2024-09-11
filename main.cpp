#include <QCoreApplication>
#include "nmea0183.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    NMEA0183 tranzas("COM11");
    return a.exec();
}
