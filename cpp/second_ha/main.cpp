#include <QCoreApplication>
#include <iostream>
#include "ha.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int a , b ; //описание вещественных переменных
    cout<<" a = " ;
    cin>>a ; // прогр. останавливается и ждет ввода с клавиатуры
    cout<<" b = " ;
    cin>>b ;

    Ha sumInts;

    cout << " result = " << sumInts <<endl ;
    return a.exec();
}
