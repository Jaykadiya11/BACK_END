#include<iostream.h>
#include<conio.h>
int x=100; //its global variable
void showglobal()
{
    cout<<"\nits global varible :"<<x;
}
void showlocal()
{
    int y=50; //its local varible
    cout<<"\n its local varible :"<<y;

}
void main()
{
      clrscr();
      showglobal();
      showlocal();
      getch();
}

