#include<iostream.h>
#include<conio.h>
void main()
{
	int age;
	char sname[20];
	clrscr();
	cout<<"\nenter student details:";
	cout<<"\nenter student name:";
	cin>>sname;
	cout<<"\nenter student age: ";
	cin>>age;
	cout<<"\nhello! "<<sname<<"you are "<<age<<"yeras old";
	getch();
}