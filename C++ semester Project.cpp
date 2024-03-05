#include<iostream>
#include<conio.h>
using namespace std;
void loading();
void wel();
int main()
{
     loading();
      wel();
	  int bal=50000;
int p,c,q;
y:    cout<<"\tEnter your 4 digit pin:";
      cin>>p;
if(p==1234)
{
n:	  system("cls");
	  cout<<"\tWelcome to your Account ..."<<endl;
	  cout<< " \a " ;
	  cout<<endl;
m:	  cout<<"\t\tMAIN MENU"<<endl;
	  cout<<"1-Cash Inquirey \t";
	  cout<<"2-Cash Withdraw \t";
	  cout<<"3-Cash Deposit \n";
      cout<<"4-Cash Transfer \t";
	  cout<<"5-Cash Statment \t";
	  cout<<"6-Bill Payment"<<endl;
	  cout<<"7-Exit!!!\t"<<endl;
	  cout<<"\tEnter your choice from the main menu:";
	  cin>>c;
	  system("cls");
if(c==1)
{
char i,j;
	  system("cls");
	  cout<<"\tYour choice is Cash inquirey!"<<endl;
	  cout<<"\tDo you want to see your current balance? 'y' or 'n':";
	  cin>>i;
if(i=='y')
      cout<<"\tYour current balance is:"<<bal<<endl;
      cout<<"\tDo you want to go back?'y' or 'n':";
      cin>>j;
if(j=='y')
{
      goto n;
}
else
	  system("cls");
      cout<< " \a " ;
      cout<<"\tThanks for your visit customer!";
	  goto x;	
}
if(c==2)
{
int w;
char j;
	   system("cls");
	   cout<<"\tYour choice is Cash Withdraw!"<<endl;
	   cout<<"\tEnter how much you want to withdraw:";
	   cin>>w;
if(w>bal)
{
	  	system("cls");
	  	cout<< " \a " ;
	    cout<<"\tALERT!!!!!Your balance is to low..."<<endl;	
}
else
{
	    bal=bal-w;
	    cout<<"\tYour CURRENT  balance is:"<<bal<<endl;	
}
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>j;
if(j=='y')
	    goto n;
if(j=='n')
{
	    system("cls");
	    cout<< " \a " ;
	    cout<<"\tThanks for your visit customer!";
	    goto x;
}
}
if(c==3)
{
int w;
char j;
		system("cls");
	    cout<<"\tYour choice is Cash Deposit!"<<endl;
	    cout<<"\tEnter how much you want to deposit:";
	    cin>>w;
	    bal=bal+w;
	    system("cls");
	    cout<<"\tYour CURRENT  balance is:"<<bal<<endl;	
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>j;
if(j=='y')
	    goto n;
else
{
		system("cls");
		cout<< " \a " ;
	    cout<<"\tThanks for your visit customer!";
	    goto x;
}
}
if(c==4)
{
int l,h;
char p;
	    system("cls");
	    cout<<"\tYour choice is to transfer the money.."<<endl;
	    cout<<"\tEnter the account number to which you want to transfer the money:";
	    cin>>l;
	    cout<<"\tEnter how much money you want to transfer?";
	    cin>>h;
if(bal<h)
{
		system("cls");
		cout<< " \a " ;
	    cout<<"\tALERT!!!Your balance is low.."<<endl;
	
}
else
{
	    bal=bal-h;
	    system("cls");
		cout<<"\tYour current balance is:"<<bal<<endl;
}
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>p;
if(p=='y')
	    goto n;
else
{
	    system("cls");
	    cout<< " \a " ;
	    cout<<"\tThanks for your visit customer!";
	    goto x;
}
}
if(c==5)
{
	    system("cls");
	    char h;
        cout<<"\tYour Balance is:"<<bal<<endl;
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>h;
if(h=='y')
	    goto n;
if(h=='n')
{
	   system("cls");
	   cout<< " \a " ;
	   cout<<"\tThanks for your visit customer!";
	   goto x;
}
}
if(c==6)
{
int l;
	    system("cls");
	    cout<<"\tYour choice is to do Billing."<<endl;
	    cout<<"\tEnter what kind of billing you want to do?"<<endl;
	    cout<<"1-Mobile Billing."<<endl;
	    cout<<"2-Utility Billing."<<endl;
	    cout<<"\tEnter 1 or 2:";
	    cin>>l;
if(l==1)
{
int r,u,n;
char h;
		system("cls");
		cout<<"\tYour choice is MOBILE BILLING."<<endl;
		cout<<"\tSelect your Network:"<<endl;
		cout<<"1-zong \n 2-warid \n 3-telenor \n 4-ufone"<<endl;
		cout<<"\tEnter your choice:";
		cin>>r;
if(r==1 || r==2 || r==3 || r==4)
{
		system("cls");
		cout<<"\tEnter your Number:";
		cin>>n;
		cout<<"\tEnter the amount you want to pay:";
		cin>>u;
if(u>bal)
{
		system("cls");
		cout<< " \a " ;
		cout<<"\tALERT!!Your balance is low..";

}
else
{
		system("cls");
		cout<< " \a " ;
		cout<<"\tYou have paid your bill."<<endl;
}
		bal=bal-u;
		cout<<"\tYour current balance is:"<<bal<<endl;
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>h;
if(h=='y')
	    goto n;
else
{
	    system("cls");
	    cout<< " \a " ;
	    cout<<"\tThanks for your visit customer!";
	    goto x;
}
}
}
if(l==2)
{
int g;
		cout<<"\tSelect your bill mode:"<<endl;
		cout<<"1-Electricity Bill."<<endl;
		cout<<"2-Gas Bill."<<endl;
		cout<<"\tEnter 1 or 2:";
		cin>>g;
if(g==1)
{
int m,n,o;
char h;
		cout<<"\tYour choice is Electric Bill."<<endl;
		cout<<"\tSelect the Company!!"<<endl;
		cout<<"1-WAPDA \n 2-LESCO \n 3-FESCO"<<endl;
		cout<<"\tEnter your choice:";
		cin>>m;
if(m==1 || m==2 || m==3)
{
		cout<<"\tEnter yoour Reference # of the company:";
		cin>>n;
		cout<<"\tEnter your Bill cost:";
		cin>>o;
if(o>bal)
{
		system("cls");
		cout<< " \a " ;
		cout<<"\tALERT!!your balance is low.."<<endl;
		
}
else
		bal=bal-o;
		cout<<"\tyour current balance is:"<<bal<<endl;
	    cout<<"\tDo you want to go back?'y' or 'n':";
	    cin>>h;
if(h=='y')
	    goto n;
else
{
	    system("cls");
	    cout<< " \a " ;
	    cout<<"\tThanks for your visit customer!";
	    goto x;
}
}
}
if(g==2)
{
int y;
char h;
	   system("cls");
	   cout<<"\tYour choice is GAS Bill."<<endl;
	   cout<<"\tEnter amount you want to pay to National SUI GAS.";
	   cin>>y;
if(y>bal)
{
	   system("cls");
	   cout<< " \a " ;
	   cout<<"\tALERT!!your balance is low.."<<endl;
	   
}
else
{
	   bal=bal-y;
	   system("cls");
	   cout<<"\tYou have paid the bill."<<endl;
	   cout<<"\tyour current balance is:"<<bal<<endl;
}
	   cout<<"\tDo you want to go back?'y' or 'n':";
	   cin>>h;
if(h=='y')
	   goto n;
else
{
	   system("cls");
	   cout<< " \a " ;
	   cout<<"\tThanks for your visit customer!";
	   goto x;
}
}
}
}
if(c==7)
{
x:	exit(0);
    
}

else
{
	
   cout<<"Invalid Number..."<<endl;
    system("cls");
   cout<<"Renter your choice.."<<endl;
  
   goto m;
}
}

else
{
char i;
       system("cls");
       cout<< " \a " ;
       cout<<"\t\tAccess Denied.............!!!!"<<endl;	
       cout<<"\tDo you want to retry? 'y' or 'n':";
       cin>>i;
if( i=='y')
{
	   goto y;
	   system("cls");
}
if(i=='n')
{
	   system("cls");
	   cout<< " \a " ;
	   cout<<"\tThanks for your visit customer!";
	   goto x;
}
}

return 0;
}
void loading()
{
for(int i=0;i<100;i++)
{
	   cout<<"                          LOADING "<<i<<"%";
	   system("cls");
}
       cout<<endl;
}
void wel()
{
       system("cls");
       cout<<"  \t\t       ******************"<<endl;
	   cout<<"  \t\t       Welcome to my ATM Project                 "<<endl<<endl;
	   cout<<"  \t\t       ********************"<<endl;
            cout<<"\t\t Group Members:         "<<endl;
           cout<<"  Shammas\tZartashia\tWasiq\tSaad"<<endl;
}
