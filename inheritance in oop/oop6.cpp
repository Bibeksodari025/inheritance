// example problem in multipath inheritance;
#include<iostream>


using namespace std;

class student
{
    protected:
    char name[10];
    int rollno;
    public:
    void getstudent()
    {
        cout<<"enetr the name and rollnumber of student:"<<endl;
        cin>>name>>rollno;
    }
    void showstudent()
    {
        cout<<"name="<<name<<"rollno="<<rollno;
    }
};
class test:virtual public student 
{
    protected:
    float sub1;
    float sub2;
    public:
    void gettest()
    {
        cout<<"enter the marks obtained in sub1 and sub2: "<<endl;
        cin>>sub1>>sub2;
    }
    void showtest()
    {
        cout<<"sub1="<<sub1<<"sub2="<<sub2;
    }
};
class sports:virtual public student
{
    protected:
    float score;
    public:
    void getsports()
    {
        cout<<"enter the value in score:"<<endl;
        cin>>score;
    }
    void showsports()
    {
        cout<<"value of score="<<score;
    }
};
class result:public test,public sports
{
    protected:
    float total;
    public:
    void showresult()
    {
        student::showstudent();
        test::showtest();
        sports::showsports();
        total=sub1+sub2+score;
        cout<<"total :"<<total;
    }
};
int main()
{
    result s;
    s.getstudent();
    s.gettest();
    s.getsports();
    s.showresult();
    return 0;
}