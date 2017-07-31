// Winning logic.
#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "board.h"
using namespace std;

class winner:public Board
{
public:
	// member data initialize.
	int row,col;

	// winning logic function.
	bool Winner(int p)
	{
		int player;
		player=p;

		if(horizontal(player))
			            return true;
		else if(vertical(player))
			            return true;
		else if(diagonal(player))
			            return true;
		else
			return false;
	}

	// check horizontaly(-) function.
	bool horizontal(int player)
	{
			if ( (arr[0][0]==player && arr[0][1]==player && arr[0][2]==player && arr[0][3]==player) ||
			     (arr[1][0]==player && arr[1][1]==player && arr[1][2]==player && arr[1][3]==player) ||
				 (arr[2][0]==player && arr[2][1]==player && arr[2][2]==player && arr[2][3]==player) ||
				 (arr[3][0]==player && arr[3][1]==player && arr[3][2]==player && arr[3][3]==player) ||
				 (arr[4][0]==player && arr[4][1]==player && arr[4][2]==player && arr[4][3]==player) ||
				 (arr[5][0]==player && arr[5][1]==player && arr[5][2]==player && arr[5][3]==player)
			   )
			{
				return player;
			}

	   else if ( (arr[0][5]==player && arr[0][4]==player && arr[0][3]==player && arr[0][2]==player) ||
			     (arr[1][5]==player && arr[1][4]==player && arr[1][3]==player && arr[1][2]==player) ||
				 (arr[2][5]==player && arr[2][4]==player && arr[2][3]==player && arr[2][2]==player) ||
				 (arr[3][5]==player && arr[3][4]==player && arr[3][3]==player && arr[3][2]==player) ||
				 (arr[4][5]==player && arr[4][4]==player && arr[4][3]==player && arr[4][2]==player) ||
				 (arr[5][5]==player && arr[5][4]==player && arr[5][3]==player && arr[5][2]==player)
			   )
			{
				return player;
			}

			else
				return 0;
	}

	// check vertically(|) function.
	bool vertical(int player)
	{
			if ( (arr[0][0]==player && arr[1][0]==player && arr[2][0]==player && arr[3][0]==player) ||
			     (arr[0][1]==player && arr[1][1]==player && arr[2][1]==player && arr[3][1]==player) ||
				 (arr[0][2]==player && arr[1][2]==player && arr[2][2]==player && arr[3][2]==player) ||
				 (arr[0][3]==player && arr[1][3]==player && arr[2][3]==player && arr[3][3]==player) ||
				 (arr[0][4]==player && arr[1][4]==player && arr[2][4]==player && arr[3][4]==player) ||
				 (arr[0][5]==player && arr[1][5]==player && arr[2][5]==player && arr[3][5]==player)
			   )
			{
				return player;
			}

	   else if ( (arr[5][0]==player && arr[4][0]==player && arr[3][0]==player && arr[2][0]==player) ||
			     (arr[5][1]==player && arr[4][1]==player && arr[3][1]==player && arr[2][1]==player) ||
				 (arr[5][2]==player && arr[4][2]==player && arr[3][2]==player && arr[2][2]==player) ||
				 (arr[5][3]==player && arr[4][3]==player && arr[3][3]==player && arr[2][3]==player) ||
				 (arr[5][4]==player && arr[4][4]==player && arr[3][4]==player && arr[2][4]==player) ||
				 (arr[5][5]==player && arr[4][5]==player && arr[3][5]==player && arr[2][5]==player)
			   )
			{
				return player;
			}

			else
				return 0;
	}

	// check diagonaly(/ && \) function.
	bool diagonal(int player)
	{
			if ( (arr[0][0]==player && arr[1][1]==player && arr[2][2]==player && arr[3][3]==player) ||
			     (arr[1][0]==player && arr[2][1]==player && arr[3][2]==player && arr[4][3]==player) ||
				 (arr[2][0]==player && arr[3][1]==player && arr[4][2]==player && arr[5][3]==player) ||
				 (arr[0][1]==player && arr[1][2]==player && arr[2][3]==player && arr[3][4]==player) ||
				 (arr[0][2]==player && arr[1][3]==player && arr[2][4]==player && arr[3][5]==player) 
			   )
			{
				return player;
			}

	   else if ( (arr[0][3]==player && arr[1][2]==player && arr[2][1]==player && arr[3][0]==player) ||
			     (arr[0][4]==player && arr[1][3]==player && arr[2][2]==player && arr[3][1]==player) ||
				 (arr[0][5]==player && arr[1][4]==player && arr[2][3]==player && arr[3][2]==player) ||
				 (arr[1][5]==player && arr[2][4]==player && arr[3][3]==player && arr[4][2]==player) ||
				 (arr[2][5]==player && arr[3][4]==player && arr[4][3]==player && arr[5][2]==player) 
			   )
			{
				return player;
			}

			else
				return 0;
	}

};