#include<bits/stdc++.h>
using namespace std;


class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"Vehicle constructor calling"<<endl;
    }

};

class Car:public Vehicle
{
    public:
    Car()
    {
        cout<<"Car constructor calling"<<endl;
    }
};

class Bicycle:public Vehicle
{
    public:
    Bicycle()
    {
        cout<<"Bicycle constructor calling"<<endl;
    }
    ~Bicycle()
    {
        cout<<"Bicycle destructor calling"<<endl;
    }

};

class Engine:public Car
{
    public:
    Engine()
    {
        cout<<"Engine constructor calling"<<endl;
    }
    ~Engine()
    {
        cout<<"Engine destructor calling"<<endl;
    }
};

class Frame:public Bicycle
{
   public:
    Frame()
    {
        cout<<"Frame constructor calling"<<endl;
    } 
    ~Frame()
    {
        cout<<"Frame destructor calling"<<endl;
    } 
};
int main()
{
    Vehicle v1;
    Car c1;
    Bicycle b1;
    Engine e1;
    Frame f1;
}