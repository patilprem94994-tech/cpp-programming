#include<iostream>
using namespace std;
class savingAccount
{
private:
string accountName;
int accountNumber;
double balance, interestRate;
public:
savingAccount(string name, int number,double bal,double rate)
{
accountName = name;
accountNumber = number;
balance = bal;
interestRate = rate;
}
void deposit(double amount)
{
balance = balance + amount;
cout<<"amount deposited successfully.\n";
}
void withdarw(double amount)
{
if(amount <= balance)
{
  balance = balance - amount;
  cout<<"amount withdrawn successfully.\n";
}
else
{
cout<<"insufficient balance.\n";
}
}
void calculateinterest()
{
 double interest = balance * interestRate/100;
 balance = balance + interest;
 cout<<"interest added: "<<interest<<endl;
 }
 void display()
 {
 cout<<"\n---saving account details---\n";
 cout<<"account name: "<<accountName<<endl;
 cout<<"account number: "<<accountNumber<<endl;
 cout<<"balance: "<<balance<<endl;
 cout<<"interest rate: "<<interestRate<<endl;
 }
 };
 int main()
 {
 savingAccount account("Smital",1000,10000,5);
 account.display();
 account.deposit(2000);
 account.withdarw(1500);
 account.calculateinterest();
 account.display();
 return 0;
 }
