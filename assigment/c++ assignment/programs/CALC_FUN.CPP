#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
void main()
{
	int a,b,ans;
	char opr;
	clrscr();
	cout<<"\nenter first num:";
	cin>>a;
	cout<<"\nenter operation sign:";
	cin>>opr;
	cout<<"\nenter second num:";
	cin>>y;
	switch(opr)
	{
		case '+':
		       cout<<"\naddtion is:"add(a,b);
		       break;
		case'-'
			cout<<"\n subtraction is:"<<sub(a,b);
			break;
		case'*'
			cout<<"\n multiplication is :"<<sub(a,b);
			break;
		case'\'
			cout<<"\n division is :"<<sub(a,b);
			break;
		deafault:
			cout<<"\n invalid option";
			break;
	}
	getch();
}