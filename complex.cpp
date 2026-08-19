#include<iostream>
#include<string>
using namespace std;
class complex{
public:
int r1;
int r2;
int r;
int i1;
int i2;
int i;
public:
void input(){
cout<<"enter real no1."<<endl;
cin>>r1;
cout<<"enter imaginary no1."<<endl;
cin>>i1;
cout<<"enter real no2."<<endl;
cin>>r2;
cout<<"enter imaginary no2."<<endl;
cin>>i2;
}
void add(){
r=r1+r2;
i=i1+i2;
}
void display1(){
cout<<"your addition of two complex numbers"<<endl;
cout<<r<<"+"<<i<<"i";
}
void sub(){
r=r1-r2;
i=i1-i2;
}
void display2(){
cout<<"your substraction of two complex numbers"<<endl;
cout<<r<<"+"<<i<<"i";
}
};
int main(){
complex c1;
c1.input();
c1.add();
c1.display1();
c1.sub();
c1.display2();
return 0;
}

