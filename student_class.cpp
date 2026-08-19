#include<iostream>
#include<string>
using namespace std;
class Student{
private:
string name;
int roll;
float marks;
public:
void input(){
cout<<"Enter your name"<<endl;
cin>>name;
cout<<"Enter your roll no."<<endl;
cin>>roll;
cout<<"Enter your marks:"<<endl;
cin>>marks;
}
void display(){
cout<<"name:"<<name<<endl;
cout<<"roll no."<<roll<<endl;
cout<<"marks:"<<marks<<endl;
}
};
int main(){
Student s;
s.input();
s.display();
return 0;
}

