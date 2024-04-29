#include<iostream>
using namespace std;
class circle
{
protected:
  float r;
  float ca,c;
public:
  void getcircle()
  {
  cout<<"Enter the radius of circle : ";
  cin>>r;
  }
  void showcircle()
  {
  c=2*3.14*r;
  ca=3.14*r*r;
  cout<<"r\t c\t ca "<<endl;
  cout<<r<<"\t"<<c<<"\t"<<ca<<"\t"<<endl;
  }
};

class triangle : public circle
{
protected:
  float b,h,ta;
  
public:
  void gettriangle()
  {
  cout<<"Enter the Base and Height : ";
  cin>>b>>h;
  }
  void showtriangle()
  {
  ta=0.5*b*h;
  cout<<"b \t h \t ta "<<endl;
  cout<<b<<"\t"<<h<<"\t"<<ta<<"\t"<<endl;
  }
};

class geometry : public triangle
{
public:
void get()
{
 gettriangle();
  getcircle();
}
public:
void show()
{
 
 showtriangle();
 showcircle();
}  
};

int main()
{
geometry geo;
geo.get();
geo.show();
}
