// ambiguity and its resolution in multiple inheritancs;
#include<iostream>

using namespace std;

class animal
{
    protected :
    char name[10];
    public:
    void getdatax()
    {
        cout<<"enetr the name of animal:"<<endl;
        cin>>name;
    }
    void displayx()
    {
        cout<<"name="<<name<<endl;
    }
};
class human
{
    protected:
    int height;
    public:
    void getdatax()
    {
        cout<<"enter the height of human:";
        cin>>height;
    }
    void displayx()
    {
        cout<<"height="<<height;
    }
};
class cow:public animal,public human
{
    protected:
    int number;
    public:
    void getdata()
    {
        animal::getdatax();
        human::getdatax();
        cout<<"enter the number of cows:";
        cin>>number;
    }
    void display()
    {
        animal::displayx();
        human::displayx();
        cout<<"sum="<<(number+animal::name + human::height);
    }
};
int main()
{
    cow c;
    // c.animal::getdatax();
    // c.human::getdatax();
    c.getdata();
    // c.animal::displayx();
    // c.human::displayx();
    c.display();
    return 0;
}