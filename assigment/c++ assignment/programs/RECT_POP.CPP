#include<iostream.h>
#include<conio.h>
float rectangle(float length,float width)
{
	  return length*width;
}
void main()
{
		float length,width,area;
		clrscr();
		cout<<"\nenter lenght of rectangle:";
		cin>>length;
		cout<<"\nenter width of rectamgle:";
		cin>>width;
	 area=rectangle(length,width);
	 cout<<"\n Area of rectangle is : "<<area;
	 getch();
}

