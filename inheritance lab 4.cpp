#include<bits/stdc++.h>
using namespace std;
class Person{
      public:
    string name;
    int age;

    Person(string p2,int age1)
    {
       name=p2;
       age=age1;
       cout<<"Person constructor called"<<endl;
    }
     void display()
    {
        
        cout<< name<<endl<< age <<endl;
    }
    ~Person()
    {
        cout<<"Person constructor called"<<endl;
    }
};

class Employee:public Person{
    public:
    int salary;

    Employee(string p2,int age1,int sal):Person(p2,age1)
    {
        salary=sal;
        cout<<"Employee constructor called"<<endl;
    }
     void display()
    {
        
        cout<< name<<endl<< age <<endl<<salary<<endl;
    }
    ~Employee()
    {
        cout<<"Employee constructor called"<<endl;
    }
};

class Manager:public Employee{
    public:
    string dept;

    Manager(string p2,int age1,int sal,string dept1):Employee(p2,age1,sal){
        dept=dept1;
        cout<<"Manager constructor called"<<endl;
    }

    void display()
    {
        
        cout<< name<<endl<< age <<endl<<salary<<endl<<dept<<endl;
    }
    ~Manager()
    {
        cout<<"Manager constructor called"<<endl;
    }
};



int main()
{
    Person p1("Fahian",23);
    Employee e1("Bob",35,50000);
    Manager m1("Jack",56,70000,"CSE");
    m1.display();
    e1.display();
    p1.display();
    return 0;
}