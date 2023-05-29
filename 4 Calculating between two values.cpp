#include<bits/stdc++.h>
using namespace std;
class Calculator
{

    int v1;
    int v2;
    public:
        Calculator()/// default constructor
        {
           cout<<" default constructor"<<endl;
            v1=25;
            v2=24;
        }
         Calculator(int a,int b)///parameterized constructor
         {
            cout<<"parameterized constructor "<<endl;
             v1=a;
             v2=b;
         }
        void setvalues(int y,int x)
        {
            v1=y;
            v2=x;
        }

    void setv1(int p)
    {
        v1=p;

    }
     void setv2(int q)
    {
        v2=q;

    }
    int getv1()
    {
        return v1;
    }
     int getv2()
    {
        return v2;
    }
    int addition()
    {
        return v1+v2;
    }
    int mul()
    {
        return v1*v2;
    }
    float div()
    {
        return (float(v1)/v2);
    }
    ~Calculator()
    {
        cout<<"destructor calling"<<endl;

    }


};
int main()
{
    Calculator c1;
//    int p,q;
//    cin>>p;
//    cin>>q;
//   c1.setv1(p);
//    c1.setv2(q);
//      c1.setvalues(10,20);
//    cout<<c1.addition()<<endl;
//    cout<<c1.mul()<<endl;
//    cout<<c1.div()<<endl;
    cout<<c1.getv2()<<endl;
    cout<<c1.getv1()<<endl;
    Calculator c2(5,10);
    cout<<c2.getv1()<<endl;
    cout<<c2.getv2()<<endl;







}

