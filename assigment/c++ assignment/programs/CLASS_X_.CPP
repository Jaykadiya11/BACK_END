#include<iostream.h>
#include<conio.h>
class X;
class Y
{
	int y;
	public:
	void getY()
	{
		cout<<"enter  Y : ";
	}
	friend void max(X x1,Y y1);
};
class X
{
	int x;
	public:
	void getX()
	{
		cout<<"\nenter X : ";
		cin>>x;
	}
	friend void max(X x1,Y y1);
};
void max(X x1,Y y1)
{
	if(x1. x>y1.y)
	{
		cout<<"\nX is max";
	}
	else
	{
		cout<<"\nY is max";
	}
}
void main()
{
	clrscr();
	X x1;
	Y y1;
	x1.getX();
	y1.getY();
	max(X x1,Y y1);

	getch();
}
