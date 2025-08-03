#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
       return  a-b;
}
int mul(int a,int b)
{
       return  a*b;
}
int div(int a,int b)
{
       return  a/b;
}

void main()
{
	int a,b,choice,ans;
	clrscr();
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);

	printf("\n MENU ");
	printf("\n1.Addition");
	printf("\n2.subtraction");
	printf("\n3.multiplication");
	printf("\n4.division");
	printf("\nEnter Choice :");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			ans=add(a,b);
			printf("Addition is :%d",ans);
			break;
		case 2:
			ans=sub(a,b);
			printf("subtraction is :%d",ans);
			break;
		case 3:
			ans=mul(a,b);
			printf("multiplication is :%d",ans);
			break;
		case 4:
			ans=div(a,b);
			printf("division is :%d",ans);
			break;
		default:
			printf("INvalid choice");
			break;
	}
	getch();
}
