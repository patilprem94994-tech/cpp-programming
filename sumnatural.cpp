#include<iostream>
using namespace std;
int main(){
cout<<"First n natural numbers sum"<<endl;
cout<<"Enter your number:"<<endl;
int a;
int sum=0;
cin>>a;
for(int i=a;i>=1;i--){
sum+=i;
}
cout<<"sum:"<<sum;
return 0;
}

