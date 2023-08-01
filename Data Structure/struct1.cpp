#include<bits/stdc++.h>
using namespace std;

struct Student{
    char name[20];
    int age;
    double cgpa;
};

struct Address{
    char address[40];
    int road_no;
};
struct DateOfBirth{
    int day;
    string month;
    int year;
};

int main(){
    Student s;
    cout<<"Enter Name = ";
    //cin>>s.name;
    cin.getline(s.name,20);


    s.age= 20;
    s.cgpa=3.86;
    Address a;
    cout<<"Enter Address = "; cin.getline(a.address,40);

    a.road_no=12;

    DateOfBirth d;
    d.day=11;
    d.month="Dec";
    d.year=1999;

    cout<<s.name<<endl<<s.age<<endl<<s.cgpa<<endl;
    cout<<a.address<<endl<<a.road_no<<endl;
    cout<<d.day<<endl<<d.month<<endl<<d.year<<endl;
    return 0;
}
