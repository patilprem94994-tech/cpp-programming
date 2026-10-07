#include <iostream>
using namespace std;
class shape{
public:
virtual void area(){
cout<<"area of shape";
}
};
class square:public shape{
private:
int sides;
public:
void area()override{
cout<<"enter any side:";
cin>>sides;
int a=sides*sides;
cout<<"area of square:"<<a<<endl;
cout<<"-----------------------------------------------------"<<endl;
}
};
class rectangle:public shape{
private:
int sides;
int bl;
public:
void area()override{
cout<<"enter length:";
cin>>sides;
cout<<"enter bredth:";
cin>>bl;
int a=sides*bl;
cout<<"area of rectangle:"<<a<<endl;
}
};
int main(){
square s;
rectangle r;
shape *ptr;
ptr=&s;
ptr->area();
shape *ptr1;
ptr1=&r;
ptr1->area();
return 0;
}


