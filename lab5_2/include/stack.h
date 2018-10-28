#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;



template <class T>
class Spisok
{
    struct node
    {
        T elem;
        node *sled;
    };
private:
    node *stk;
    T klad; // ����� ��������� ��� ������������� ������� ���

public:
    Spisok ();
    virtual ~Spisok();
    /* T Set_Stack ()
     {
         return klad;
     }*/
    void VYVOD();
    // void W_S(T);
    //void YDALENIE ();
    //void OCHISTKA();
    void push(T el);
    T pop();
};

template <class T>
Spisok<T>::Spisok()
{
    //mstk= new node [3];
    stk=NULL;
}

template <class T>
Spisok<T>::~Spisok()
{
    delete stk ;

}

template <class T>
void Spisok<T>::push(T el)
{
    node *mstk;
    mstk = new (node);
    (*mstk).elem = el;
    (*mstk).sled = stk;
    stk = mstk;
    delete mstk;
}

template <class T>
void Spisok<T>::VYVOD ()
//����� ����������� �����, ��������� ���������� stk.
{
    node *t;

    cout<<"���������� �����: ";
    t = stk;
    while  (t!=NULL)
    {
        cout<<(*t).elem<<" ";
        t = (*t).sled;
    }
    cout<<endl;
    delete t;
}
/*
template <class T>
void Spisok<T>::W_S (T el)
//��������� �������� el � ���� stk.
{
    node *q;

    q = new (node);
    (*q).elem = el;
    (*q).sled = stk;
    stk = q;
}*/
/*
template <class T>
void Spisok<T>::YDALENIE ()
//�������� �������� �� �����, ��������� ���������� stk.
//�������� ��������������� ���� ���������� ��������
//���������� � �������� klad.
{
    node *q;

    if  (stk==NULL)
        cout<<"���� ����!\n";
    else
    {
        klad = (*stk).elem;
        q = stk;
        stk = (*stk).sled;
        delete q;
    }
}
*/
template <class T>
T Spisok<T>::pop ()
{
    node *q;

    try //���, ������� ����� �������� � ������, ������������� ���
    {
        if (stk==NULL)
        {
            throw 123; //������������ ����� ����� 123
        }
        klad = (*stk).elem;
        q = stk;
        stk = (*stk).sled;
        delete q;
        return klad;
    }
    catch(int err)//���� ���������� ����� 123
    {
        cout << "������ �" << err << " ���� ����!" << endl;
    }

    /*
    if  (stk==NULL)
        cout<<"���� ����!\n";
    else
    {
        klad = (*stk).elem;
        q = stk;
        stk = (*stk).sled;
        delete q;
    }
    return klad;
    */
}

/*
template <class T>
void Spisok<T>::OCHISTKA()
//������� ���������� ������ � "����".
{
    node *t,*q;

    t = stk;
    if (t!=NULL)
    {
        q=(*t).sled;
        while  (q!=NULL)
        {
            delete t;
            t = q;
            q =(*q).sled;
        }
        delete t;
    }
}
*/


#endif // STACK_H
