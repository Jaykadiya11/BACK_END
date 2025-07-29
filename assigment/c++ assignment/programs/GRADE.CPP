#include<iostream.h>
#include<conio.h>
void main()
{
     char *sname;
     int rno,marks;
     clrscr();
     cout<<"enter student details: ";
     cout<<"\nenter student name: ";
     cin>>sname;
     cout<<"\nenteer student roll no: ";
     cin>>rno;
     cout<<"\nenter student marks: ";
     cin>>marks;
     cout<<"\ndetails of student :\n";
     cout<<"\nname of student is : "<<sname;
     cout<<"\nroll no of student is : "<<rno;
     cout<<"\nmarks of student is : "<<marks;
     if(marks>=90)
     {
	cout<<"\ngrade A *";
     }
     else if(marks>=70)
     {
	cout<<"\ngrade B *";
     }
     else if(marks>=60)
     {
	 cout<<"\ngrade C *";
     }
     else if(marks>=40)
     {
	 cout<<"\n*pass *";
     }
     else
     {
	 cout<<"\n*fail *";
     }
     getch();
}