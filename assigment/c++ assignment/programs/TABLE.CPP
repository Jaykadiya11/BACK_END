#include<iostream.h>
#include<conio.h>
void main()
{
     int i,num,ans;
     clrscr();
     cout<<"\nenter number for its multiplication table:";
     cin>>num;
     for(i=1;i<=10;i++)
     {
	 ans=num*i;
	 cout<<"\n"<<num<<"*"<<i<<"="<<ans;
     }
     getch();
}