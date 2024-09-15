#include <QCoreApplication>
#include "nmea0183.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    NMEA::NMEA0183 tranzas("COM10");
    return a.exec();
}
