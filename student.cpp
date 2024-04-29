#include<iostream>
#include<iomanip>
using namespace std;
class student
{
 char name[10];
 int rollnumber;
 char div[10];
 float grade;

 public:

 void get_stu_details();
 void show_stu_details();
};

 void student :: get_stu_details()
 
{
 cout<<"Enter the name :";
 cin>>name;
 
 cout<<"Enter the roll number :";
 cin>>rollnumber;
 
 cout<<"Enter the Div :";
 cin>>div;
 
 cout<<"Enter the grade :";
 cin>>grade;
}

 void student :: show_stu_details()
 
{
 
 cout<<endl;
 cout<<" student information :"<<endl;
 cout<<"name :"<<name<<endl;
 cout<<"roll number :"<<rollnumber<<endl;
 cout<<"div :"<<div<<endl;
 cout<<"grade :"<<grade<<endl;
}

int main()
{
 student stu;
 
 stu.get_stu_details();
 stu.show_stu_details();
 
 return 0;
}










 
 
