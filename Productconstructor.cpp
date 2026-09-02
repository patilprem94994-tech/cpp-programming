#include<iostream>
#include<string>
using namespace std;

class Product{
public:
    string name;
    int q;
    float price;
public:
    Product(){
        name="biscuite";
        q=2;
        price=10;
    }
    Product(string a,int b, float c){
        name=a;
        q=b;
        price=c;
    }
    Product(const Product &e){
        name=e.name;
        q=e.q;
        price=e.price;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"Quantity:"<<q<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"Total bill:"<<price*q;
    }
};

int main(){
    Product e;
    e.display();
    Product e1("kajukatli packet",10,1000);
    e1.display();
    Product e2(e);
    e2.display();
    return 0;
}
