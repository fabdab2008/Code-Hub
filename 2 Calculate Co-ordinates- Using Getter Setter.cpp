//ASSIGNMENT 2
//ID 202214302
#include<bits/stdc++.h>

using namespace std;

class lines
{
    float x;
    float y;

public:
    lines()
    {
        x=0;
        y=0;
    }

  void  setx(float a)
    {
        x=a;

    }
    void sety(float a)
    {
        y=a;

    }



    float calculate_length(lines a ,lines b )
    {
        float distance;

        distance=sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
        return distance;
    }
    ~lines()
    {

    }
};
int main()
{     lines m[1000];
       lines q[1000];
       lines p,n;

       float length1=0;
       float length2=0;
       float a,b;

       int n1,n2,i,j;
   cout<<"enter the no of co ordinate of line 1:";
   cin>>n1;
   cout<<"enter the co ordinates of line 1:"<<endl;

   for(i=0;i<n1;i++)
   {
       cin>>a;
       m[i].setx(a);
       cin>>b;
       m[i].sety(b);

       if(i>=1)
       {
           length1=length1+p.calculate_length(m[i],m[i-1]) ;

       }

   }

   cout<<"enter the no of co ordinate of line 2:";
   cin>>n2;
   cout<<"enter the co ordinates of line 2:"<<endl;

   for(i=0;i<n2;i++)
   {
       cin>>a;
       q[i].setx(a);
       cin>>b;
       q[i].sety(b);

       if(i>=1)
       {
           length2=length2+p.calculate_length(q[i],q[i-1]) ;

       }

   }

   cout<<"Length of line 1:"<<length1<<endl;
      cout<<"Length of line 2:"<<length2<<endl;
      if(length1<length2)
      {
          cout<<"line 1 is smaller than line2";
      }
      else
      {
          cout<<"line 1 is bigger than line 2";
      }




}
