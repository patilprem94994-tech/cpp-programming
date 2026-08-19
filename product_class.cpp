#include<iostream>
#include<string>
using namespace std;
class Product{
public:
string proid;
string proname;
float proq;
float price;
public:
void accept(){
cout<<"enter product id:"<<endl;
cin>>proid;
cout<<"enter product name:"<<endl;
cin>>proname;
cout<<"enter product price:"<<endl;
cin>>price;
cout<<"enter product quantity."<<endl;
cin>>proq;
}
void display(){
cout<<"product details"<<endl;
cout<<"id:"<<proid<<endl;
cout<<"name."<<proname<<endl;
cout<<"price:"<<price<<endl;
cout<<"quanyity:"<<proq<<endl;
cout<<"total bill amount:"<<proq*price<<endl;
}
public:
void process(){
accept();
display();
}
};
int main(){
Product p;
p.process();
return 0;
}
