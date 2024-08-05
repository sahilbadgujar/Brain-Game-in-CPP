#include<iostream>
#include<time.h>
#include<graphics.h>
using namespace std;
class game
{
	int i,j;
	public:
		int flag=0;
		void graph1();
		void graph2();
		void graph3();
		void graph4();
		void graph5();
		
		int comb1();
		int comb2();
		int comb3();
		int comb4();
		int comb5();
		void print();
};
	
	void game :: graph1()
	{
		//triangle
		setcolor(GREEN);
		line(60,75,10,175);
		line(10,175,110,175);
		line(110,175,60,75);
		//squre
		setcolor(GREEN);
		rectangle(140,80,230,180);
		//rectangle
		setcolor(GREEN);
		rectangle(260,80,380,180);
		//circle
		setcolor(GREEN);
		circle(450,125,50);
		//diamond
		setcolor(GREEN);	
		line(570,75,520,125);
		line(520,125,570,175);
		line(570,175,620,125);
		line(620,125,570,75);
		delay(1500);
		cleardevice();	
	}
	
	int game ::comb1()
	{
		
		int triangle = 1;
		int squre = 2;
		int rect = 3;
		int c1 = 4;
		int diamond = 5;
		int ans1,ans2,ans3,ans4,ans5;
		
		cout<<"Guess the position of Triangle : ";
		cin>>ans1;
		if(ans1==1)
		{
			cout<<"\nyou successfully passed first stage\nGood....!!\n\n";
			cout<<"-------------------------------------------------------\n\n";
			cout<<"Guess the position of circle : ";
			cin>>ans2;
			if(ans2==4)
			{
				cout<<"\nyou successfully passed second stage\nBhery Good....!!\n\n";
				cout<<"-------------------------------------------------------\n\n";
				cout<<"Guess the position of Squre : ";
				cin>>ans3;	
				if(ans3==2)
				{
					cout<<"\nyou successfully passed third stage\nExellent....!!\n\n";
					cout<<"-------------------------------------------------------\n\n";
					cout<<"Guess the position of Diamond : ";
					cin>>ans4;	
					if(ans4==5)
					{
						cout<<"\nyou successfully passed fourth stage\nBrillient....!!\n\n";
						cout<<"-------------------------------------------------------\n\n";
						cout<<"Guess the position of rectangle : ";
						cin>>ans5;
						if(ans5==3)	
						{
							flag=1;
							return flag;
						}
						else
						{
							cout<<"\nOoohh Shit\nYour are almost there\nBut last answer was wrong\nYou Loose\nBetter Luck Next time..!!\n\n ";
						}
					}
					else
					{
						cout<<"\nWell played\nYour three answers are correct\nBut fourth was wrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
					}
				}
				else
				{
					cout<<"\nNice try\nYour two answers are correct\nBut third was wrong\nYou loose\nBetter Luck Next time..!!\n\n";
				}
			}
			else
			{
				cout<<"\nThats good one\nOnly one answer is correct\nThe second one is wrong\nYou loose\nBetter Luck Next time..!!\n\n";
			}
	}
		else
		{
			cout<<"\nWrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
		}
}

	void game ::graph2()
	{
		//diamond
		setcolor(GREEN);	
		line(60,75,10,125);
		line(10,125,60,175);
		line(60,175,110,125);
		line(110,125,60,75);
		//triangle
		setcolor(GREEN);
		line(160,75,110,175);
		line(110,175,210,175);
		line(210,175,160,75);
		//squre
		setcolor(GREEN);
		rectangle(230,80,330,180);
		//rectangle
		setcolor(GREEN);
		rectangle(350,80,490,180);
		//circle
		setcolor(GREEN);
		circle(560,125,50);
		delay(1500);
		cleardevice();	
	}
	int game :: comb2()
	{
	
		int triangle = 2;
		int squre = 3;
		int rect = 4;
		int c1 = 5;
		int diamond = 1;
		int ans1,ans2,ans3,ans4,ans5; 
		
		cout<<"Guess the position of Triangle : ";
		cin>>ans1;
		if(ans1==2)
		{
			cout<<"\nyou successfully passed first stage\nGood....!!\n\n";
			cout<<"-------------------------------------------------------\n\n";
			cout<<"Guess the position of circle : ";
			cin>>ans2;
			if(ans2==5)
			{
				cout<<"\nyou successfully passed second stage\nBhery Good....!!\n\n";
				cout<<"-------------------------------------------------------\n\n";
				cout<<"Guess the position of Squre : ";
				cin>>ans3;	
				if(ans3==3)
				{
					cout<<"\nyou successfully passed third stage\nExellent....!!\n\n";
					cout<<"-------------------------------------------------------\n\n";
					cout<<"Guess the position of Diamond : ";
					cin>>ans4;	
					if(ans4==1)
					{
						cout<<"\nyou successfully passed fourth stage\nBrillient....!!\n\n";
						cout<<"-------------------------------------------------------\n\n";
						cout<<"Guess the position of rectangle : ";
						cin>>ans5;
						if(ans5==4)	
						{
							flag=1;
							return flag;
						}
						else
						{
							cout<<"\nOoohh Shit\nYour are almost there\nBut last answer was wrong\nYou Loose\nBetter Luck Next time..!!\n\n ";
						}
					}
					else
					{
						cout<<"\nWell played\nYour three answers are correct\nBut fourth was wrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
					}
				}
				else
				{
					cout<<"\nNice try\nYour two answers are correct\nBut third was wrong\nYou loose\nBetter Luck Next time..!!\n\n";
				}
			}
			else
			{
				cout<<"\nThats good one\nOnly one answer is correct\nThe second one is wrong\nYou loose\nBetter Luck Next time..!!\n\n";
			}
		}
		else
		{
			cout<<"\nWrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
		}	
	}

	void game :: graph3()
	{
		//circle
		setcolor(GREEN);
		circle(60,125,50);
		//diamond
		setcolor(GREEN);	
		line(180,75,130,125);
		line(130,125,180,175);
		line(180,175,230,125);
		line(230,125,180,75);
		//triangle
		setcolor(GREEN);
		line(280,75,230,175);
		line(230,175,330,175);
		line(330,175,280,75);
		//squre
		setcolor(GREEN);
		rectangle(350,80,450,180);
		//rectangle
		setcolor(GREEN);
		rectangle(470,80,620,180);
		delay(1500);	
		cleardevice();
	}
	int game :: comb3()
	{
	
		int triangle = 3;
		int squre = 4;
		int rect = 5;
		int c1 = 1;
		int diamond = 2;
		int ans1,ans2,ans3,ans4,ans5; 
		
		cout<<"Guess the position of Triangle : ";
		cin>>ans1;
		if(ans1==3)
		{
			cout<<"\nyou successfully passed first stage\nGood....!!\n\n";
			cout<<"-------------------------------------------------------\n\n";
			cout<<"Guess the position of circle : ";
			cin>>ans2;
			if(ans2==1)
			{
				cout<<"\nyou successfully passed second stage\nBhery Good....!!\n\n";
				cout<<"-------------------------------------------------------\n\n";
				cout<<"Guess the position of Squre : ";
				cin>>ans3;	
				if(ans3==4)
				{
					cout<<"\nyou successfully passed third stage\nExellent....!!\n\n";
					cout<<"-------------------------------------------------------\n\n";
					cout<<"Guess the position of Diamond : ";
					cin>>ans4;	
					if(ans4==1)
					{
						cout<<"\nyou successfully passed fourth stage\nBrillient....!!\n\n";
						cout<<"-------------------------------------------------------\n\n";
						cout<<"Guess the position of rectangle : ";
						cin>>ans5;
						if(ans5==5)	
						{
							flag=1;
							return flag;
						}
						else
						{
							cout<<"\nOoohh Shit\nYour are almost there\nBut last answer was wrong\nYou Loose\nBetter Luck Next time..!!\n\n ";
						}
					}
					else
					{
						cout<<"\nWell played\nYour three answers are correct\nBut fourth was wrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
					}
				}
				else
				{
					cout<<"\nNice try\nYour two answers are correct\nBut third was wrong\nYou loose\nBetter Luck Next time..!!\n\n";
				}
			}
			else
			{
				cout<<"\nThats good one\nOnly one answer is correct\nThe second one is wrong\nYou loose\nBetter Luck Next time..!!\n\n";
			}
		}
		else
		{
			cout<<"\nWrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
		}	
	}

	void game :: graph4()
	{
		
		//rectangle
		setcolor(GREEN);
		rectangle(10,80,160,180);
		//circle
		setcolor(GREEN);
		circle(230,125,50);
		//diamond
		setcolor(GREEN);	
		line(350,75,300,125);
		line(300,125,350,175);
		line(350,175,400,125);
		line(400,125,350,75);
		//triangle
		setcolor(GREEN);
		line(450,75,400,175);
		line(400,175,500,175);
		line(500,175,450,75);
		//squre
		setcolor(GREEN);
		rectangle(520,80,620,180);
		delay(1500);
		cleardevice();	
	}
	int game :: comb4()
	{
	
		int triangle = 4;
		int squre = 5;
		int rect = 1;
		int c1 = 2;
		int diamond = 3;
		int ans1,ans2,ans3,ans4,ans5; 

		cout<<"Guess the position of Triangle : ";
		cin>>ans1;
		if(ans1==4)
		{
			cout<<"\nyou successfully passed first stage\nGood....!!\n\n";
			cout<<"-------------------------------------------------------\n\n";
			cout<<"Guess the position of circle : ";
			cin>>ans2;
			if(ans2==2)
			{
				cout<<"\nyou successfully passed second stage\nBhery Good....!!\n\n";
				cout<<"-------------------------------------------------------\n\n";
				cout<<"Guess the position of Squre : ";
				cin>>ans3;	
				if(ans3==5)
				{
					cout<<"\nyou successfully passed third stage\nExellent....!!\n\n";
					cout<<"-------------------------------------------------------\n\n";
					cout<<"Guess the position of Diamond : ";
					cin>>ans4;	
					if(ans4==3)
					{
						cout<<"\nyou successfully passed fourth stage\nBrillient....!!\n\n";
						cout<<"-------------------------------------------------------\n\n";
						cout<<"Guess the position of rectangle : ";
						cin>>ans5;
						if(ans5==1)	
						{
							flag=1;
							return flag;
						}
						else
						{
							cout<<"\nOoohh Shit\nYour are almost there\nBut last answer was wrong\nYou Loose\nBetter Luck Next time..!!\n\n ";
						}
					}
					else
					{
						cout<<"\nWell played\nYour three answers are correct\nBut fourth was wrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
					}
				}
				else
				{
					cout<<"\nNice try\nYour two answers are correct\nBut third was wrong\nYou loose\nBetter Luck Next time..!!\n\n";
				}
			}
			else
			{
				cout<<"\nThats good one\nOnly one answer is correct\nThe second one is wrong\nYou loose\nBetter Luck Next time..!!\n\n";
			}
		}
		else
		{
			cout<<"\nWrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
		}	
	}

	void game :: graph5()
	{
		//squre
		setcolor(GREEN);
		rectangle(10,80,110,180);
		//rectangle
		setcolor(GREEN);
		rectangle(130,80,280,180);
		//circle
		setcolor(GREEN);
		circle(350,125,50);
		//diamond
		setcolor(GREEN);	
		line(470,75,420,125);
		line(420,125,470,175);
		line(470,175,520,125);
		line(520,125,470,75);
		//triangle
		setcolor(GREEN);
		line(570,75,520,175);
		line(520,175,620,175);
		line(620,175,570,75);
		delay(1500);	
		cleardevice();
	}
	int game :: comb5()
	{
	
		int triangle = 5;
		int squre = 1;
		int rect = 2;
		int c1 = 3;
		int diamond = 4;
		int ans1,ans2,ans3,ans4,ans5; 

		cout<<"Guess the position of Triangle : ";
		cin>>ans1;
		if(ans1==5)
		{
			cout<<"\nyou successfully passed first stage\nGood....!!\n\n";
			cout<<"-------------------------------------------------------\n\n";
			cout<<"Guess the position of circle : ";
			cin>>ans2;
			if(ans2==3)
			{
				cout<<"\nyou successfully passed second stage\nBhery Good....!!\n\n";
				cout<<"-------------------------------------------------------\n\n";
				cout<<"Guess the position of Squre : ";
				cin>>ans3;	
				if(ans3==1)
				{
					cout<<"\nyou successfully passed third stage\nExellent....!!\n\n";
					cout<<"-------------------------------------------------------\n\n";
					cout<<"Guess the position of Diamond : ";
					cin>>ans4;	
					if(ans4==4)
					{
						cout<<"\nyou successfully passed fourth stage\nBrillient....!!\n\n";
						cout<<"-------------------------------------------------------\n\n";
						cout<<"Guess the position of rectangle : ";
						cin>>ans5;
						if(ans5==2)	
						{
							flag=1;
							return flag;
						}
						else
						{
							cout<<"\nOoohh Shit\nYour are almost there\nBut last answer was wrong\nYou Loose\nBetter Luck Next time..!!\n\n ";
						}
					}
					else
					{
						cout<<"\nWell played\nYour three answers are correct\nBut fourth was wrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
					}
				}
				else
				{
					cout<<"\nNice try\nYour two answers are correct\nBut third was wrong\nYou loose\nBetter Luck Next time..!!\n\n";
				}
			}
			else
			{
				cout<<"\nThats good one\nOnly one answer is correct\nThe second one is wrong\nYou loose\nBetter Luck Next time..!!\n\n";
			}
		}
		else
		{
			cout<<"\nWrong guess\nYou loose\nBetter Luck Next time..!!\n\n";
		}
	}
	void game ::print()
	{
		int d,m;
		d = DETECT;
		initgraph(&d,&m,NULL);
		for(i=30;i<=620;i++)
		{
			putpixel(i,30,RED);
			delay(5);
		}
		for(j=30;j<=180;j++)
		{
			putpixel(620,j,RED);
			delay(5);
		}
		setcolor(GREEN);//Y
		line(60,60,100,100);
		line(140,60,100,100);
		line(100,100,100,150);
		circle(180,100,40);//O

		line(242,60,242,122);
		arc(275,110,10,160,35);
		line(309,60,309,122);

		line(360,60,380,150);
		line(380,150,400,60);
		line(400,60,420,150);
		line(420,150,440,60);

		line(460,60,520,60);
		line(490,60,490,150);
		line(460,150,520,150);

		line(540,60,540,150);
		line(540,60,580,150);
		line(580,60,580,150);

		for(i=30;i<=180;i++)
		{
			putpixel(30,i,RED);
			delay(5);
		}
		for(j=30;j<=620;j++)
		{
			putpixel(j,180,RED);
			delay(5);
		}
		delay(2000);
	}


int main()
{
	int gd, gm;
	int i, a;
	game obj;
	char ch;
	int flag;
		cout<<endl;
		cout<<"\t------------------*******************-------------------\n";
		cout<<"\t|\t\t\t\t\t\t\t|\n";
		cout<<"\t|\tWelcome to BRAIN GAME!!!!\t\t\t|\n";
		cout<<"\t|\tFollow the instructions and play the game...\t|\n";
		cout<<"\t|\tNow u will see five diagrams for 1 sec only.\t|\n";
		cout<<"\t|\tMemorize their and answer the questions \t\t|\n";
		cout<<"\t|\t\t\t\t\t\t\t|\n";
		cout<<"\t------------------*******************-------------------\n"<<endl;
		cout<<"Are you ready???\n";
		cout<<"If yes enter y else enter n\n\n";
		cin>>ch;
		gd = DETECT;
		initgraph(&gd,&gm,NULL);
	if(ch=='y')
	{
		srand(time(0));
		for(i=1;i<2;i++)
		{
			a = (rand()%6)+1;
		}
		if(a==1)
		{
			obj.graph1();
			flag=obj.comb1();
			if(flag==1)
			{
				obj.print();
			}
		}
		else if(a==2)
		{
			obj.graph2();
			flag=obj.comb2();
			if(flag==1)
			{
				obj.print();
			}
		}
		else if(a==3)
		{
			obj.graph3();
			flag=obj.comb3();
			if(flag==1)
			{
				obj.print();
			}
		}
		else if(a==4)
		{
			obj.graph4();
			flag=obj.comb4();
			if(flag==1)
			{
				obj.print();
			}	
		}
		else
		{
			obj.graph5();
			flag=obj.comb5();
			if(flag==1)
			{
				obj.print();
			}
		}
	}
	else
	{
		cout<<"ERROR 404";
	}
	
	closegraph();
}	


