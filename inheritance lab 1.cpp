//we inherit base class student in the derived class Level 4 grad student or 
//as named here as L4Student
 #include<bits/stdc++.h>
 using namespace std;

 class Student{
    int theory;
    int sessional;
    public:
    void setMarks(int t,int s)
    {
        theory=t;
        sessional=s;
    }

    int getTheory()
    {
        return theory;
    }

    int getSessional()
    {
        return sessional;
    }
 };


 class L4Student: private Student
 {
    private:
    int thesis;
    public:
     void delegate_setMarks(int b,int c)
    {
        setMarks(b,c);
    }

    int delegate_get()
    {
        return getTheory();
    }
     int delegate_get2()
    {
        return getSessional();
    }

    int total(int a,int b,int c)
    {
            setMarks(b,c);
            thesis=c;
            int sum;
            sum=int(a+b+c);
            return sum;
    }
    
    void  setThesis(int t)
    {
        thesis=t;
    }
    int getThesis()
    {
        return thesis;
    }


 };

 int main()
 {
    L4Student obj1;
    int a,b,c;
    cout<<"Enter thesis marks"<<endl;
    cin>>a;
    obj1.setThesis(a);
    cout<<"Enter sessional marks"<<endl;
    cin>>b;
    cout<<"Enter theory marks"<<endl;
    cin>>c;
    obj1.delegate_setMarks(b,c);
    obj1.total(a,b,c);
    cout<<"Thesis Marks "<<obj1.getThesis()<<endl;
    cout<<"Sessional marks "<<obj1.delegate_get2()<<endl;
    cout<<"Theory marks "<<obj1.delegate_get()<<endl;
    cout<<"Total marks: "<<obj1.total(a,b,c)<<endl;
    return 0;
 }