#include<iostream>
using namespace std;
class Rectangle{
public:
float l;
float b;
public:
Rectangle(){
l=10;
b=20;
}
Rectangle(float a,float c){
l=a;
b=c;
}
Rectangle(const Rectangle &r){
l=r.l;
b=r.b;
}
void display(){
cout<<"length"<<l<<endl;
cout<<"breadth"<<b<<endl;
cout<<"area:"<<l*b<<endl;
}
};
int main(){
Rectangle r; 
r.display();
Rectangle r1(10,10);
r1.display();
Rectangle r2(r);
r2.display();
return 0;
}
