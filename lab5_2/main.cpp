#include <iostream>
//#include <stdlib.h>
//#include <cstdlib>
//#include<malloc.h>
#include "stack.h"
#include <string>
#include "string.h"
// �������� ��������
using namespace std;

int main ()
{
    setlocale (0,"RUS");
    Spisok<int> A;
    int  el;
   // int t; //���������� ��������������� ���� �������� �����.
    A.push(128);
    A.push(90);
    A.push(56);
   // A.push(12);
  //  A.push(2);
  //  A.push(6);
    A.VYVOD ();
    cout<<"������� ����������� �������: ";
//    getline(cin,el);
    cin>>el;
    A.push(el);
    //A.W_S (el);
    A.VYVOD ();

    cout<<"������ ������� �� �����.\n";
    /*
    for (int i=0; i<5;i++)
    {
        cout<<A.pop()<<endl;
       // A.VYVOD ();
    }*/
    cout<<A.pop()<<endl;
    //A.YDALENIE ();
   // t=A.Set_Stack();
    //cout<<"�� ����� ���� ��������� �����... "<<t<<endl;
    A.VYVOD ();
   // A.OCHISTKA();
    return 0;
}
