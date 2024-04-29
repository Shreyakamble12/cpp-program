#include<iostream>
#include<string>
using namespace std;

struct employee
{
 string name;
 int age;
 float salary;
 string mobilenumber;
 string idnumber;
};
int main()
{
 employee emp;
 cout<<"Enter name :";
 cin>>emp.name;
 
 cout<<"enter age :";
 cin>>emp.age;
 
 cout<<"enter salary :";
 cin>>emp.salary;
 
 cout<<"enter mobile number :";
 cin>>emp.mobilenumber;
 
 cout<<"enter id number :";
 cin>>emp.idnumber;
 
 cout<<" employee information :"<<endl;
 cout<<"name :"<<emp.name<<endl;
 cout<<"age :"<<emp.age<<endl;
 cout<<"salary :"<<emp.salary<<endl;
 cout<<"mobile number :"<<emp.mobilenumber<<endl;
 cout<<"id number :"<<emp.idnumber<<endl;
 
 return 0;
}
 



