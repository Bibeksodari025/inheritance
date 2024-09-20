//constructor in drive class;
#include<iostream>


using namespace std;

class alpha
{
    protected:
    int x;
    public:
    alpha(int i)
    {
        x=i;
        cout<<"alpha is initialize:"<<endl;
    }
    void displayx()
    {
        cout<<"x="<<x;
    }
};
class beta
{
    protected:
    int y;
    public:
    beta(int j)
    {
        y=j;
        cout<<"beta is initialize:"<<endl;
    }
    void displayy()
    {
        cout<<"y="<<y;
    }
}; 
class gama:public alpha,public beta
{
    protected:
    float m;
    float n;
    public:
    gama(int a,int b,float c,float  d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<<"gamma is initialized:"<<endl;
    }
    void displaymn()
    {
        cout<<"m="<<m<<"ends"<<"n="<<n;
    }
};
int main()
{
    gama g(2,3,4,5);
    g.displayx();
    g.displayy();
    g.displaymn();
    return 0;
}