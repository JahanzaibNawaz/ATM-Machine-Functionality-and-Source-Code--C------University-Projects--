#include<iostream>
#include<conio.h>
using namespace std;
void starline(void);
void starline2(void);
void starline3(void);
main()
{
 	  
     int password;
     char ch;
     int num;
        {
          cout<<"\n\n\t";
     	     starline();
     	     cout<<"\t* \t\t\t\t*\n";
     	     cout<<"\t*\t\t\t\t*\n";
     	     cout<<"\t* WELCOME To BANK\t\t*\n";
     	     cout<<"\t*\t\t\t\t*\n";
	         cout<<"\t* INSERT YOUR ATM CARD\t*\n";
	         cout<<"\t* PIN: 0000 \t*\n";
             cout <<"\t*\t\t\t\t*\n";
             cout<<"\t*\t\t\t\t*\n";
             cout<<"\t";
             starline();
	         cout<<"\t ENTER YOUR PIN : ";
               cin>>password;
         if (password==0000)
         {
	         system("cls");
	         cout<<"\n\n\t*";
	            starline2();
	                  cout<<"\t*\t\t\t\t\t\t\t*\n\t*\t\t\t\t\t\t\t* \n \t* \t\t ... CONGRATUlATION ...\t\t\t*  \n";
	                  cout<<" \t*\t\t\t\t\t\t\t*\n \t*\t ... You Are Logged into Your Account ...\t* \n ";
                 int balance = 10000000;
                 float withdraw, deposit;
                     int option; 
                     cout<<"\t*\t\t\t\t\t\t\t*\n";
                     cout<<"\t*\t\t\t\t\t\t\t*\n \t*  \t\t\t ATM Machine\t\t\t* \n\t*\t\t\t\t\t\t\t*";
                     cout<<endl;
                     cout<<"\t*\t Choose a Transaction...\t\t\t* \n\t*\t\t\t\t\t\t\t*";
                     cout<<"\n\t*\t\t\t\t\t\t\t*\n\t*\t01. BALANCE INQUIRY"<<"\t\t03. DEPOSIT\t* ";
		             cout<<"\n\t*\t\t\t\t\t\t\t*\n\t*\t02. WITHDRAW "<<"\t\t\t04. EXIT\t*";
		             cout<<"\n\t*\t\t\t\t\t\t\t*\n\t*";
		             starline2();
		             cout<<"\n\n\t    Select Your Option (1-4) : ";
                     cin>>ch;
                      system("cls");
		             switch(ch)
		        {
             	    case '1':
             	    	cout<<"\n\n\t\t";
             	    	starline3();
             	        cout<<"\t\t*\t\t\t\t\t     *\n\t\t*\t\t\t\t\t     *\n\t\t*\t\t\t\t\t     *\n\t\t*";
						 cout<<"  [ BALANCE INQUIRY ]\t\t\t     *\n\t\t*\t\t\t\t\t     *";
		                cout<<"\n \t \t*   Your Total Balance Is :"<<balance<<"\t     *";
		                cout<<"\n\t\t*\t\t\t\t\t     *\n\t\t";
     	                starline3();
						 break;
     	            case '2':
     	            	cout<<"\n\n\t";
             	    	starline3();
      	                cout<<"\n\n\n\t \t [ WITHDRAW ]\n";
      	                cout<<"\t \t \tEnter Amount : $";
     	                cin>>withdraw;
     	                balance -= withdraw;
    	                cout<<"\t You withdraw $"<<withdraw<<endl;
     	                cout<<"\t Your remaining balance is $"<<balance;
                        cout<<"\n\n\t\t";
             	    	starline3();
						break;
     	            case '3':
     	            	cout<<"\n\n\t\t";
             	    	starline3();
     	                cout<<"\n\n\n \t\t\t [ DEPOSIT ] \n";
    	                cout<<"\t \t\t Enter amount: $";
   	                    cin>>deposit;
		                balance = balance + deposit;
   	                    cout<<"\n\t \t\t You deposited $"<<deposit<<endl;
    	                cout<<"\n\n \t\t \t Your new balance is $"<<balance<<endl;
   	                    cout<<"\n\n\t\t";
             	    	starline3();
						break;
                    case '4':
    	        	    cout<<"\n\n\t\t";
             	    	starline3();
						cout<<"\n\n\n \t \t\t THANKS ";
		        	    cout<<"\n \t \t  For Visiting Our BANK. ";
                        cout<<"\n \n \t \t  \t   [ EXIT MODE ] \n";
      	                cout<<"\n\n\t\t";
             	    	starline3();
						break;
   	                default :
		  	            cout<<"\n\n\t\t";
             	    	starline3();
						 cout<<"\n \t \t That is an Invalid Option \n";
						 cout<<"\n\n\t\t";
             	    	starline3();
		        }
		    }
			else
	            cout<<"\n\n \t\t\t  Pls Try Again!!!\n";
	           
        }while(ch!='8');
    getch();
   }
void starline(void)
{
int a;                   
for(a=0;a<=32;a++)
cout<<"*";
cout<<endl;
}
void starline2(void)
{
int b;                   
for(b=0;b<=55;b++)
cout<<"*";
cout<<endl;
}
void starline3(void)
{
int b;                   
for(b=0;b<=45;b++)
cout<<"*";
cout<<endl;
}



