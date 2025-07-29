#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *s1,*s2;
	int x;
	clrscr();
	cout<<"\n thid program checks that given string is palindrome or not \n";
	cout<<"\nenter string:";
	cin>>s1;
	strcpy(s2,s1);
	strrev(s1);
	x=strcmp(s1,s2);
	if(x==0)
	{
		cout<<"\nstring is palindrome ";
	}
	else
	{
		cout<<"\nstring is not palindrome";
	}
	getch();
}
