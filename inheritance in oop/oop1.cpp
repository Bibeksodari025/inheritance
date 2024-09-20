//the concept of single inheritance in oop
#include<iostream>

using namespace std;

class student
{
    protected:
    int rollno;
    char name[20];
    float salary;
    public:
    void getdata()
    {
        cout<<"enter the name ,rollno and salary:"<<endl;
        cin>>name>>rollno>>salary;
    }
    void showdata()
    {
        cout<<"name="<<name<<endl  <<"rollno="<<rollno <<endl <<"salary="<<salary<<endl;
    }
};
class leader:public student
{
    // char name[10];
    // int rollno;
    // float salary;
    // public:
    // void getdata()
    // {
    //     cout<<"enetr the name ,rollno and salary:"<<endl;
    //     cin>>name>>rollno>>salary;
    // }
    // void showdata()
    // {
    //     cout<<"name="<<name<<endl  <<"rollno="<<rollno <<endl  <<"salary="<<salary<<endl;
    // }
};
int main()
{
    leader l;
    l.student::getdata();
    l.student::showdata();
    l.getdata();
    l.showdata();
    return 0;
}
