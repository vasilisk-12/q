#include <QCoreApplication>
#include <QtCore>
#include <iostream>

#include "halib.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QLibrary ha_lib("halib.dll");
    ha_lib.load();

    if( !ha_lib.isLoaded() )
        {
            std::cout <<  "Cannot load library.";
            return 0;
        }

    typedef int (*Exported_function)(int,int);
    Exported_function f = (Exported_function)ha_lib.resolve("sumInts");

    std::cout << f(1,2) << std::endl;
    return a.exec();
}
