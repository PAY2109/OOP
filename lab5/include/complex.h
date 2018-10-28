#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

template <class T>
class complex
{
public:
    complex();
    complex(T a,T bi);
    virtual ~complex();
    complex(const complex& other);
    void add(complex& com1, complex& com2);
    void sub(complex& com1, complex& com2);
    void mul(complex& com1, complex& com2);
    void div(complex& com1, complex& com2);
    void read();
    void print();

protected:

private:
    T real;	// Действительная часть
    T image;	// Мнимая часть
};

template <class T>
complex<T>::complex()
{
    real=0;
    image=0;
    //ctor
}
template <class T>
complex<T>::complex(const T a,const T bi)
{
    real=a;
    image=bi;
    //ctor
}

template <class T>
complex<T>::~complex()
{
    //dtor
}
template <class T>
void complex<T>::read()
{
    std::cout << "Введите действительную часть: ";
    std::cin >> real;
    std::cout << "Введите мнимую часть: ";
    std::cin >> image;

}
template <class T>
void complex<T>::print()
{
    if (image < 0)
        std::cout << real << "+" <<"(" << image << ")""i \n";
    else
        std::cout << real << "+" << image << "i \n";

}
template <class T>
void complex<T>::add(complex& com1, complex& com2)
{
    real=com1.real+com2.real;
    image=com1.image+com2.image;

}
template <class T>
void complex<T>::sub(complex& com1, complex& com2)
{
    real=com1.real-com2.real;
    image=com1.image-com2.image;

}
template <class T>
void complex<T>::mul(complex& com1, complex& com2)
{
    real=com1.real*com2.real-com1.image*com2.image;
    image=com1.real*com2.image+com1.image*com2.real;

}
template <class T>
void complex<T>::div(complex& com1, complex& com2)
{
    T divider=0;
    divider=com2.real*com2.real+com2.image*com2.image;
    if(divider==0)
        std::cout<<"ERROR! DIVISION BY ZERO"<<std::endl;
    real=(com1.real*com2.real+com1.image*com2.image)/divider;
    image=(com1.image*com2.real-com1.real*com2.image)/divider;
}
template <class T>
complex<T>::complex(const complex& other)
{
    real=other.real;
    image=other.image;
    //copy ctor
}

#endif // COMPLEX_H
