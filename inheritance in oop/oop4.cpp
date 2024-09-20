// example problem of multilevel program;
#include<iostream>

using namespace std;

class student
{
    protected:
    int studentrollno;
    public:
    void getdata()
    {
        cout<<"enetr the rollno of student:"<<endl;
        cin>>studentrollno;
    }
    void showdata()
    {
        cout<<"rollno="<<studentrollno;
    }
};
class teacher:public student
{
    protected:
    int teacherrollno;
    public:
        void getdata()
        {
            student::getdata();
            cout<<"enetr the rollno of teacher :"<<endl;
            cin>>teacherrollno;
        }
        void showdata()
        {
            student::showdata();
            cout<<"name="<<teacherrollno;
        }
};
class staff:public teacher
{
    protected:
    int staffrollno;
    public:
    void getdata()
    {
        teacher::getdata();
        cout<<"enetr the rollno of staff:"<<endl;
        cin>>staffrollno;
        // student::getdata();
        // teacher::getdata();
    }
    void showdata()
    {
        teacher::showdata();
        cout<<"the sum of rollno:"<<(staffrollno+student::studentrollno+teacher::teacherrollno);
    }

};
int main()
{
    staff s;
    s. getdata();
    s.showdata();
    return 0;
}