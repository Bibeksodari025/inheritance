// consuctor and destructor involution in single inheritance;
#include<iostream>

using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base class consuctor invocked:"<<endl;
    }
    ~base()
    {
        cout<<"base class destructor is invoked:"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"derived class consuctor is invokd:"<<endl;
    }
    ~derived()
    {
        cout<<"derived class destructor is invoked:"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}