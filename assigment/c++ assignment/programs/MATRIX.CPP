#include<iostream.h>
#include<conio.h>
void main()
{
	int m1[2][2],m2[2][2],sum[2][2],i,j;
	clrscr();
	cout<<"\nenter elements of m1:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			cout<<"enter["<<i<<"]["<<j<<"]";
			cin>m1[i][j];
	}
	cout<<"\n";
	cout<<"\nenter elements of m2:\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			cout<<"enter["<<i<<"]["<<j<<"]";
			cin>>m2[i][j];
		}
		cout<<"\n";
		}
		for(i=0;i<2;i++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
		}
		cout<<"\n";
		cout<<"\nmatrixofm1\n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<"\t "<<m1[i][j];
			}
			cout<<"\n";
		}
		cout<<"\nmatrix of m2\n";
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				cout<<"\t "<<m2[i][j];
			}
			cout<<"\n";
		}
		cout<<"\nsum of 2 matrix\n";
		for(i=0;i<2;i++)
		{
		for(j=0;j<2;j++)
		{
		    cout<<"\t "<<sum[i][j];
		}
		cout<,"\n";
		}
		getch();
}