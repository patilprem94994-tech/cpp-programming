#include<iostream>
using namespace std;
class unary{
private:
int n;
public:
unary(int x){
n=x;
}
/* void operator++(){
++n;
}
void operator++(int){
n++;
} */
void preopr(){
++n;
}
void postopr(){
n++;
}
void decopr(){
n--;
}
void display(){
cout<<"your number :"<<n<<endl;
}
};

int main(){
unary obj(10);
obj.display();
/*obj++;
obj.display();
obj++;
obj.display();*/
obj.postopr();
obj.display();
obj.preopr();
obj.display();
obj.decopr();
obj.display();
return 0;
}


