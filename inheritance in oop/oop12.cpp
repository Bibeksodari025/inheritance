// example program pointer to derived class;


#include<iostream>

using namespace std;

class base
{
    public:
    int m;
    void display()
    {
        cout<<"the value of m="<<m<<endl;
    }
};
class derived:public base
{
    public:
    int d;
    void display()
    {
        cout<<"the value of m ="<<m<<endl;
        cout<<"the value of d="<<d<<endl;
    }
};
int main()
{
    base *bptr;
    base b1;
    bptr=&b1;
    bptr->m=10;
    bptr->display();
    derived *dptr;
    derived d1;
    dptr=&d1;
    dptr->d=100;
    dptr->display();
    return 0;
}