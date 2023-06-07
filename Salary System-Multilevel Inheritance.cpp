//We use concept of multilevel inheritance here
//Header files
#include<bits/stdc++.h>
using namespace std;

//Base Class
class Person
{
private:
    int  contact;
protected:
    string designation;
    virtual float getSal() = 0;
public:
    string fullName;
    int  id;
    Person(string fullName,int  contact,string designation,int  id)
    {
        this->fullName = fullName;
        this->contact = contact;
        this->designation = designation;
        this->id = id;
    }
    ~Person()
    {

    }
};

//Derived Class
class Employee: public Person
{
private:
    float basicSal;
public:
    float bonus;
    float getSal()
    {
        return basicSal + bonus;
    }
    Employee(string name,int  id,int  contact, string desig,float bonus,float basicSal) : Person(name,contact,desig,id)
    {
        this->basicSal = basicSal;
        this->bonus = bonus;
    }
    ~Employee(){}
};

//Most Derived Class

class Operator: public Employee
{
private:
    float Rate;
    float hour;
public:
    Operator(string name,int  id,int  contact, string desig,float bonus,float basicSal,float Rate,float hour) : Employee(name,id,contact,desig,bonus,basicSal)
    {
        this->Rate = Rate;
        this->hour = hour;
    }
    float getSal()
    {
        return Employee::getSal() + Rate*hour;
    }
    ~Operator(){}

};

int main()
{
    Operator op("Jackson",65478,2008,"Managing Director",7000,45000,90,10) ;
    cout<<"Total salary for "<<op.fullName<<" is "<<endl;
    cout << op.getSal() << endl;
}

