#include<iostream>
#include<string>
using namespace std;
class complex{
public:
int real;
int img;
};
int main(){
complex c1,c2,c3;
cout<<"enter real no1."<<endl;
cin>>c1.real;
cout<<"enter img no1."<<endl;
cin>>c1.img;
cout<<"enter real no2."<<endl;
cin>>c2.real;
cout<<"enter img no2."<<endl;
cin>>c2.img;
cout<<"your compex no.addition:"<<endl;
c3.real=c1.real+c2.real;
c3.img=c1.img+c2.img;
cout<<c3.real<<"+"<<c3.img<<"i"<<endl;
cout<<"your compex no.substraction:"<<endl;
c3.real=c1.real-c2.real;
c3.img=c1.img-c2.img;
cout<<c3.real<<"+"<<c3.img<<"i"<<endl; 
return 0;
}
