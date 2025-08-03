#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class game
{
	public:
		void displaymenu()
		{
			cout<<"\nRock";
			cout<<"\nPaper";
			cout<<"\nScissor";
		}
};
void main()
{
	int uname,sname,u_score=0,s_score=0,i=1,u_choice,c_choice,round=0;
	int ans,j;
	chadr u_name[50];
	clrscr();

	game g;

	cout<<"\n*******************************\n";
	cout<<"\t\t NAME ";
	cout<<"\n\n*******************************\n\n";
	cout<<"\n enter your name:";
	cin>>u_name;

	cout<<"\n\n********************************\n\n";
	cout<<"\t\t ROUNDS ";
	cout<<"\n\n********************************\n\n";
	cout<<"\n"<<u_name<<"How Many Rounds TYou want to Play!:";
	cin>>round;

	cout<<"\n***********************************\n";
	cout<<"\t\t GAME ";
	cout<<"'\n**********************************\n";
	while(1)
	{
		do{
		if(round<1 || round >3)
		{
			cout<<"\nOnly 3 rounds you can plauy :";
		}
		else
		{
			cout<<"\nRound :"<<i++<<"/"<<round;
		}
		cout<<"\n\n"<<u_name<<" score = "<<u_score;
		cout<<"\n\n computer score="<<s_score<<"\n";
		g.displaymenu();
		cout<<"\nSelect your choice: ";
		cin>>u_choice;

		c_choice=(rand()%3)+1;
		cout<<"\ncomputer choice is: "<<c_choice;
		if(u_choice==1 && c_choice==2 || u_choice==2 && c_choice==3)
		{
		     cout<<"\n computer win!!";
		     s_score++;
		}
		else if(u_choice==1 && c_choice==1 || u_choice==2 ||
		c_choice==2 && u_choice==3 || c_choice==3)
		{
			cout<<"\n Draw!!";
		}
		else
		{
			cout<<"\n congratulation you win...!";
			u_score++;
		}
		cout<<"\n do you want continue..(yes==1 || No==2):";
		cin>>ans;
		}while(ans!=2);
		break;
	}
	getch();
}