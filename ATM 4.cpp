#include <iostream>
using namespace std;

int main()

{

int password;

for (int i=0;i<3;i++)

{cout <<"enter password:\n";
cin>>password;

if (password==123456)
{cout<<"korek!!!\n";

double balance = 3230;
double withdraw, deposit;
int option;
cout<<"\n";
cout<<" ***MOGOL***\n";
cout<<"*** Automated Teller Machine***"<<endl;
cout<<"Choose a Transaction:\n";
cout<<"\n";
cout<<"[1] Inquire Balance \n"
<<"[2] Withdraw \n"
<<"[3] Deposit \n"
<<"[4] Quit \n"
<<"\n"
<<"Enter Option:";
cin>>option;

switch(option)
{
case 1:
cout<<"\n[[[BALANCE INQUIRY]]]\n";
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout<<"\n Your current balance is $"<<balance<<endl;
break;
case 2:
cout<<"\n[[[WITHDRAW]]]\n";
cout<<"Enter amount: $";
cin>>withdraw;

balance = balance - withdraw;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout<<"You withdrew $"<<withdraw<<endl;
cout<<"Your remaining balance is $"<<balance<<endl;
continue;
case 3:
cout<<"\n[[[DEPOSIT]]]\n";
cout<<"Enter amount: $";
cin>>deposit;

balance = balance + deposit;

cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

cout<<"You deposited $"<<deposit<<endl;
cout<<"Your new balance is $"<<balance<<endl;
continue;
case 4:
cout<<"\n***[[[EXIT MODE]]]***\n";

break;


default:
cout<<"\n That is an invalid option \n";
}

break;
}
else


cout<<"Pls try again!!!\n";
}

return 0;
}

