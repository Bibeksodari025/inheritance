// example problem of hybrid inheritance;
#include<iostream>

using namespace std;

class student
{
    protected:
    int rollno;
    char name[10];
    public:
    void get_student()
    {
        cout<<"enter the name and rollno: "<<endl;
        cin>>name>>rollno;
    }
    void showdata_student()
    {
        cout<<"name="<<name<<"rollno="<<rollno;
    }
};
class sports
{
    protected:
    float score;
    public:
    void get_score()
    {
        cout<<"ënter the score in sports: "<<endl;
        cin>>score;
    }
    void showdata_score()
    {
        cout<<"score="<<score;
    }
};
class test:public student 
{
    protected:
    float sub1;
    float sub2;
    public:
    void get_test()
    {
        cout<<"enter the marks obtained in sun1 and sub2:"<<endl;
        cin>>sub1>>sub2;
    }
    void show_put()
    {
        cout<<"sub1="<<sub1<<endl;
        cout<<"sub2="<<sub2<<endl;
    }
};
class result:public test,public sports
{
    protected:
    float total;
    public:
    void show_result()
    {
        student::showdata_student();
        sports::showdata_score();
        test::show_put();
        total=sub1+sub2+score;
        cout<<"total ="<<total;
    }
};
int main()
{
    result r;
    r.student::get_student();
    r.sports::get_score();
    r.test::get_test();
    r.show_result();
    return 0;
}