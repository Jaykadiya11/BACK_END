#include<iostream.h>
#include<conio.h>
class bank
{
	int acno;
	char *cname;
	double balance;
	public:
		void openaccount();
		void deposit();
		void withdraw();
		void checkbalance();
		void showdetails();
};
void bank::openaccount()
{
	cout<<"\nenter account number : ";
	cin>>acno;
	cout<<"\nenter customer name: ";
	cin>>cname;
	cout<<"\nenter intial balance: ";
	cin>>balance;
}
void bank::showdetalis()
{
	cout<<"\naccount number : ",<<acno;
	cout<<"\ncustomer name  : ",<<cname;
	cout<<"\ninitial balance: ",<<balance;
}
void bank::deposite()
{
	double amount;
	cout<<"\nenter deposite amount : ";
	cin>>amount;
	if(amount>0)
	{
		balance=balance+amount;
	}
	else
	{
		cout<<"\invalid amount";
	}
}
void bank::withdraw()
{
	double amount;
	cout<<"\nenter withdrawal amount : ";
	cin>>amount;
	if(amount>0)
	{
		if(amount<=balance)
		{
			balance=balance-amount;
		}
		else
		{
			cout<<"\nwithdrawal amount is greater  than balance : ";
		}
	}
	else
	{
		cout<<"\ninvalid amount entered";
	}
}
void bank::check balance()
{
	cout<<"\ncurrent balance : "<<balance;
}
void main()
{
	Bank b;
	int choice,a;
	clrscr();
	cout<<"\n**********************************\n";
	b.openamount();
	do{
	cout<<"n1.deposit";
	cout<<"n2.withdraw";
	cout<<"n3.check balance";
	cout<<"n4.show detalis";
	cout<<"n5.exit";
	cout<<"\n**********************************\n";
	cout<<"\nenter your choice : ";
	cin>>choice;
	cout<<"\n**********************************\n"
	if(choice==1)
	{
		b.deposite();
		cout<<"\n**********************************\n"
	}
	else if (choice==2)
	{
		b.withdraw();
		cout<<"\n**********************************\n"
	}
	else if (choice==3)
	{
		b.check balance();
		cout<<"\n**********************************\n"
	}
	else if (choice==4)
	{
		b.showdetalis();
		cout<<"\n**********************************\n"
	}
	else if (choice==5)
	{
		cout<<"\nThank you for using sevices";
		cout<<"\n**********************************\n"
		break;
	}
	else
	{
		cout<<"\ninvalid choice please try again";
		cout<<"\n**********************************\n"
		cin>>a;
		}while(a!=2);
		getch();
}