//Calculating grades assignment
//ID 202214302
#include<bits/stdc++.h>
using namespace std;
class student
{
 public:
    int id;
    int cc;
    int att;
    float ct1, ct2, ct3,ct,mid,f1,f2,attmarks,perf,total;
    void input()
    {
        cout<<" Input Student Id,Course Code,Number of classes present(out of 42) serially: "<<endl;
        cin>> id >> cc >> att ;
        cout<<" Enter marks of three CTs serially:(out of 20,will be converted to 30) "<<endl;
        cin>> ct1 >> ct2 >> ct3;
        cout<< "Enter marks of Midterm:(out of 30) " <<endl;
        cin>> mid;
        cout<< "Enter marks of SecA and SecB:(out of 90 each) "<<endl;
        cin>> f1  >> f2 ;
        cout<<"Student ID  "<<id<<" obtained: "<<endl;
    }


    void calc_att()
    {
        attmarks=att/42*15;
        cout<<"Attendance: " <<attmarks<<endl;
    }

    void calc_perf()
    {
        perf=(((mid/30)*15)-(42-att));
        if(perf<=0)
        {
            cout<<"Performance: 0"<<endl;
        }
        else
            {cout<<"Performance: "<<perf<<endl;}
    }
    void calc_best2CT()
    {
        ct1=((ct1/20)*30);
        ct2=((ct2/20)*30);
        ct3=((ct3/20)*30);
        float sum=ct1+ct2+ct3;
        float mini;
        {if((ct1<ct2)&&(ct1<ct3)){mini=ct1;}
        else if((ct2<ct1)&&(ct2<ct3)){mini=ct2;}
        else {mini=ct3;}}
        ct=(sum-mini);
        cout<<"CT marks(considering best 2 CTs): "<<ct<<endl;
    }

    void calc_grade()
    {
        total=(attmarks+perf+ct+mid+f1+f2);

        cout<<"Total Marks(Out of 300):  "<<total<<endl;
        if(total>=240) {cout<<"Obtained grade is A"<<endl;}
        else if (total>=200) {cout<<"Obtained grade is B"<<endl;}
        else if (total>=160) {cout<<"Obtained grade is C"<<endl;}
        else if (total>=120) {cout<<"Obtained grade is D"<<endl;}
        else if (total<120) {cout<<"Obtained grade is F"<<endl;}
        else {cout<<"Obtained grade is E"<<endl;}

    }

};

int main()
{
    student s;
    s.input();
    s.calc_att();
    s.calc_perf();
    s.calc_best2CT();
    s.calc_grade();

};
