#include<iostream>
#include<string>
using namespace std;
class Employee{
public:
string name;
int id;
float salary;
public:
Employee(){
name="Prem";
id=21;
salary=10000000;
}
Employee(string a,int b, float c){
name=a;
id=b;
salary=c;
}
Employee(const Employee &e){
name=e.name;
id=e.id;
salary=e.salary;
}
void display(){
cout<<"name:"<<name<<endl;
cout<<"id:"<<id<<endl;
cout<<"salary:"<<salary<<endl;
}
};
int main(){
Employee e;
e.display();
Employee e1("sham",123,10000);
e1.display();
Employee e2(e);
e2.display();
return 0;
}



