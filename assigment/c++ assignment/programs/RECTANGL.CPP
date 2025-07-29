#include<iostream.h>
#include<conio.h>
class rectangle
{
      float length,width;
      public:
	 void getvalue()
	 {
		cout<<"\nenter lenght of rectangle:";
		cin>>length;
		cout<<"\nenter width of rectamgle:";
		cin>>width;
	 }
	 float areaofrect()
	 {
	      return length*width;
	 }
};
void main()
{
	rectangle rect;
	float area;
	clrscr();
	rect.getvalue();
	area=rect.areaofrect();
	cout<<"\nArea of rectangle is : "<<area;
	getch();
}

