// Human vs Human palying class.
#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "winner.h"
using namespace std;

class human:public winner
{
private:
	//  Member data initialize.
	int r;

public:
	//  player input logic function .
	void playerInput_logic(int selection,int player)
	{
		if(selection>0 && selection<7)
		{
			for(r=0;r<6;r++)
			{
				if(arr[r][selection-1]!='X' && arr[r][selection-1]!='O')
			    {
					break;
				}
			}
				 arr[r][selection-1]=player;
		}
	}
};