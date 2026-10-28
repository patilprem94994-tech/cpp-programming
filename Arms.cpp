#include<iostream>
using namespace std;
int main()
{
int n,i,temp,rem,sum;
cout<<"enter the limit";
cin>>n;
for(i=1; i<=n;i++)
{
temp = i;
sum = 0;
}
while (temp!=0)
{
rem = temp % 10;
sum= sum + (rem*rem*rem);
temp=temp/10;
}
if(sum ==i)
cout<<i<<"";
return 0;

}
