#include<iostream>
using namespace std;

class gfloor{
    public:

    int groom;
    gfloor(int a)
    {
        groom=a;
    }
};

class floor1:public gfloor{
    public:
    int room1;

    floor1(int a,int b):gfloor(a)
    {
        room1=b;
    }

    void printmsg()
    {
        cout<<"Floors in 1st floor is "<<endl;
        cout<<"created with "<< room1 << " rooms "<<endl;
        cout<<" and ground floor"<<endl;
        cout<<" is created with "<< groom <<" rooms"<<endl;
    }
};

int main()
{
    floor1 building(3,4);
    building.printmsg();
}