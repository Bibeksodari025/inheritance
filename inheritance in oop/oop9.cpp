//concept of hierarchical inheritance in oop;
#include<iostream>

using namespace std;

class employee
{
    protected:
    char name[10];
    float salary;
    public:
    void input()
    {
        cout<<"enter the name and salary of empoyee:"<<endl;
        cin>>name>>salary;
    }
    void display()
    {
        cout<<"name="<<name<<"ends"<<"salary="<<salary<<ends;
    }
};
class manager:public employee
{
    protected:
    char title[20];
    public:
    void input()
    {
        employee::input();
        cout<<"enter the title of a manager:"<<endl;
        cin>>title;
    }
    void display()
    {
        employee::display();
        cout<<"title of manager="<<title<<endl;
    }
};
class teacher : public employee
{
    protected:
    char faculty[10];
    public:
    void input()
    {
        employee::input();
        cout<<"enetr the faculty of teacher:"<<endl;
        cin>>faculty;
    }
    void display()
    {
        employee::display();
        cout<<"the faculty of teacher="<<faculty;
    }
};
int main()
{
manager m;
m.input();
cout<<"manager details:"<<endl;
m.display();
teacher t;
t.input();
cout<<"teacher details:"<<endl;
t.display();
return 0;
}

