#include <iostream>
#include <stdlib.h>
//#include <math.h>
#include <conio.h>
#include "complex.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    double a=1,b=2;
    double  c=-3,d=-4;
  complex<double> c1(a,b);
  complex<double> c2(c,d);
   complex<double> rez;
//   complex<double> c1, c2,rez;

   // cout << "Введите комплексные числа: " << endl;
 //   c1.read();
 //   c2.read();
    cout << "Результаты: " << endl;
    cout << "Сложение: " << endl;
    rez.add(c1,c2);
    rez.print();
    cout << "Вычитание: " << endl;
    rez.sub(c1,c2);
    rez.print();
    cout << "Умножение: " << endl;
    rez.mul(c1,c2);
    rez.print();
    cout << "Деление: " << endl;
    rez.div(c1,c2);
    rez.print();

    return 0;

}
