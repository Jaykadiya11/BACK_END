#include<iostream.h>
#include<conio.h>
class rectangle
{
    private:
	float length;
	float width;
    public:
	  void input()
	  {
	      cout<<"enter length: ";
	      cin>>length;
	      cout<<"\enter width: ";
	      cin>>width;
	  }
	  float calculater area()
	  {
		return length*width;
	  }
	  void diplayarea()
	  {
		cout<<"area of recrangle is":;
		cin>>calculaterarea;
	  }
    };

void main()

{
	int age;
	float length,width,area;

	cout<<"hello world !";
	cout<<"\nenter your name ";
	cout<<"\nenter your age ";
	cin>> age;
	cout<<"\nenter length: ";
	cin>>length;
	cout<<"\enter width: ";
	cin>>width;
	area=length*width;

	Rectangle rect;
	rect.input();
	rect.displayarea();
	getch();


}