#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "print.h"
using namespace std;

class Start:public Print
{
private:
	// memeber data initialize.
	int decision;

public:
	// Game menu choice input function.
	void menu_choice()
	{
		//choice input.
		cin>>decision;
		// human vs human opinion print function call.
		if(decision==1)
			   // players move function call.
				player_turn();
		else if(decision==2)
               cout<<"\n\nNot Available Right Now\n\n";
        else
              cout<<"\n\nInvalid Input\n\n";
	}

	// player's move function.
	void player_turn()
	{
		// name input function call.
		name_input();

		for(j=0;j<37;j++)
		{
			player=j%2+1;

			// Player 1 move.
			if(player==1)
			{
				name=nam1;
				player='X';
			}
			// player 2 move.
			else
			{
				name=nam2;
				player='O';
			}

			// players move print function call.
			playerTurn_print();
		}
	}
};
