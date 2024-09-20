//constructor and destructor invoked in mulpile inheritance;
#include<iostream>

using namespace std;

class base1
{
    public:
    base1()
    {
        cout<<"base 1 constructor is invoked:"<<endl;
    }
    ~base1()
    {
        cout<<"base1 destructor is invoked:"<<endl;
    }
};
class base2
{
    public:
    base2()
    {
        cout<<"base2 class constructor is invoked:"<<endl;
    }
    ~base2()
    {
        cout<<"base2 class destructor is invoked:"<<endl;
    }
};
class derived:public base1,public base2
{
    public:
    derived()
    {
        cout<<"derived class constructor is invoked:"<<endl;
    }
    ~derived()
    {
        cout<<"derived class destructor is invokes:"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}