// constructor and destructor invoked in multilevel inheritance;
#include<iostream>

using namespace std;

class base1
{
    public:
    base1()
    {
        cout<<"constructor invoked in base1 class:"<<endl;
    }
    ~base1()
    {
        cout<<"destuructor invoked in base1 class:"<<endl;
    }
};
class derived1:public base1
{
    public:
    derived1()
    {
        cout<<"constructor invoked in derived1 class :"<<endl;
    }
    ~derived1()
    {
        cout<<"destructor invoked in derived1 class:"<<endl;
    }
};
class derived2:public derived1
{
    public:
    derived2()
    {
        cout<<"consuctor invokde in derived2 class:"<<endl;
    }
    ~derived2()
    {
        cout<<"destructor invoked in derived2 class:"<<endl;
    }
};
int main()
{
    derived2 d3;
    return 0;
}