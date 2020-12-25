#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
   double balance,annualInterestRate;
  
   cout<<fixed<<setprecision(2);
  
   cout<<"Enter initial balance : ";
   cin>>balance;
   cout<<"\nEnter annual interest rate %: ";
   cin>>annualInterestRate;
  
   cout<<"\nInitial Balance : "<<balance;
  
   for(int i=1;i<=3;i++)
   {
       balance = balance + balance*annualInterestRate/100.00/12.0;
       cout<<"\nBalance after "<<i<<" month : "<<balance;
   }
  
  
   return 0;
}
