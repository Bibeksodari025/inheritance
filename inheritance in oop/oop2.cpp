//the concept of multiple inheritance in oop

#include<iostream>


using namespace std;

class student
{
    protected:
    char name[10];
    int rollno;
    public:
    void getdata()
    {
        cout<<"enter the name and rollno:"<<endl;
        cin>>name>>rollno;
    }
    void showdata()
    {
        cout<<"name="<<name<<endl;
        cout<<"rollno="<<rollno<<endl;
    }
};
class employee
{
    protected:
    char employeename[10];
    int employnumber;
    public:
    void getdata()
    {
        cout<<"enetr the employee name and employee number:"<<endl;
        cin>>employeename>>employnumber;
    }
    void showdata()
    {
        cout<<"employeename="<<employeename<<endl;
        cout<<"employnumber="<<employnumber<<endl;
    }
};
class officer:public student,public employee
{
    int officernumber;
    char officername[10];
    public:
    void getdata()
    {
        cout<<"enetr the officernumber and officername:"<<endl;
        cin>>officernumber>>officername;
        student::getdata();
        employee::getdata();
    }
    void showdata()
    {
        cout<<"officernumber="<<officernumber<<endl;
        cout<<"officername="<<officername<<endl;
        student::showdata();
        employee::showdata();
    }
};
int main()
{
    officer o;
    o.getdata();
    o.showdata();
    return 0;
}
