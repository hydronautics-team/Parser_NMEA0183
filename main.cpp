#include <QCoreApplication>
#include "nmea0183.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    NMEA::NMEA0183 tranzas("ttyACM0");
//    std::cout << "Press Enter to exit..." << std::endl;
//    std::cin.get();
    return a.exec();
}
