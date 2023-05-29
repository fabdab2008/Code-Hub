#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id,ran,salary;
public:
   //constructor
    employee()
    {
        cout<<"default constructor calling"<<endl;
        id=0;
        ran=0;
        salary=0;
    }
    //parameterized constructor
    employee(int a,int b,int c)
    {
         cout<<"parameterized constructor calling"<<endl;
         id=a;
        ran=b;
        salary=c;
    }
    void setv(int a,int b,int c)
    {
      id=a;
        ran=b;
        salary=c;
    }
    int getid()
    {
        return id;
    }
   employee compare(employee e1,employee e2)
    {
        if(e1.salary>e2.salary)
        {
            return e1;
        }
        else
        {
            return e2;
        }
    }

};

int main()
{
  employee e[5];
  employee x,y;
  x=x.compare(e[0],e[1]);
  cout<<x.getid()<<endl;
  for(int i=0;i<5;i++)
    {
      int p,q,r;
      cin>>p>>q>>r;
      e[i].setv(p,q,r);
    }
    for(int i=0;i<5;i++)
    {
      cout<<e[i].getid()<<endl;
    }
}
