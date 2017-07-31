// Print class
#include <iostream>
#include <cstdio>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include "human.h" 
using namespace std;

class Print:public human
{

public:
	// Member data initialize.
	string name,nam1,nam2;
	int j,player,selection;

	// Game menu function print.
	void menu_print()
	{
		system("cls");
		printf("\n                   *****%c%c%c%c  Connect Four  %c%c%c%c*****  \n",6,6,1,1,1,1,6,6);
		Sleep(800);
		cout<<"\n\n>>Whom do you want to play against:";
		Sleep(800);
		cout<<"\n\n\t1.Against Human.";
		Sleep(800);
		cout<<"\n\n\t2.Against Computer.";
		Sleep(800);
		cout<<"\n\n>>Selection:";
	}
	
	// player name input function.
	void name_input()
	{
		cout<<"\n\nPlayer1 name:";
		cin>>nam1;
		Sleep(800);
		cout<<"\nPlayer2 name:";
		cin>>nam2;
		Sleep(800);
	}

	// // players move print function.
	void playerTurn_print()
	{
			system("cls");
			printf("\n                        *****%c%c%c%c  Connect Four  %c%c%c%c*****   ",6,6,1,1,6,6,1,1);
			// board function call.
			board();
			cout<<"\n\n"<<"Mr."<<name;
			cout<<"\n\tSelect a Column(1-6) >>";
			//column selection input.
			cin>>selection;
			// player input logic function call.
			playerInput_logic(selection,player);

			if(Winner(player))
			{
				cout<<"\n\n Mr. "<<name<<" has won\n\n";
				getch();
				exit(0);
			}
	}
};