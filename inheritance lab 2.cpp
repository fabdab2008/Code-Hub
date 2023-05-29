//CLASS NOTE: as we build the floor G before floor 1 in a building,we are using the base class as floor G and  the derived class as floor 1
//thats why the groundfloor() is showing the constructed msg first and while destructing the upper floors are destroyed first
//we also work with the parameterized constrcutors 
//in base class,there is only the parameters of the base class
//in derived class,we put in all parameters from base and derived classes 



#include<bits/stdc++.h>
 using namespace std;

 class GroundFloor{
    
    public:
    GroundFloor()
    {
        cout<<"Ground floor has been constructed"<<endl;
    }
    GroundFloor(int g)
    {
        cout<<"Ground floor has been constructed with "<<g<<"rooms"<<endl;
    }
     ~GroundFloor()
    {
        cout<<"Ground floor has been destructed"<<endl;
    }
    
    
 };


 class FirstFloor: public GroundFloor
 {
    
    public:
    FirstFloor()
    {
        cout<<"First floor has been constructed"<<endl;
    }
    FirstFloor(int r,int g):GroundFloor(g)
    {
        cout<<"First floor has been constructed with "<<r<<"rooms"<<endl;
    }
     ~FirstFloor()
    {
        cout<<"First floor has been destructed"<<endl;
    }
 };

 int main()
 {
    FirstFloor f(3,1);
 }
     