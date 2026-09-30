#include<iostream>
using namespace std;
class binary{
private:
int a;
int b;
public:
binary(int x,int y){
a=x;
b=y;
}
int addition(){
return a+b;
}
int substraction(){
return a-b;
}
void display(){
cout<<"your first number:"<<a<<endl;
cout<<"your second number:"<<b<<endl;
cout<<"your number addition:"<<addition()<<endl;
cout<<"your number substraction:"<<substraction()<<endl;
}
};
int main(){
binary obj(10,20);
obj.display();
return 0;
}

