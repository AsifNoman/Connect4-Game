// Board class.
#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <windows.h>
using namespace std;

class Board
{
public:
	  // Member data initialize.
	    int i;
		int arr[6][6];

    // Board structure function.
	void board()
	{
		cout<<"\n\n\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[5][0])<<"\t"<<char(179)<<"   "<<char(arr[5][1])<<"\t"<<char(179)<<"   "<<char(arr[5][2])<<"\t"<<char(179)<<"   "<<char(arr[5][3])<<"\t"<<char(179)<<"   "<<char(arr[5][4])<<"\t"<<char(179)<<"   "<<char(arr[5][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[4][0])<<"\t"<<char(179)<<"   "<<char(arr[4][1])<<"\t"<<char(179)<<"   "<<char(arr[4][2])<<"\t"<<char(179)<<"   "<<char(arr[4][3])<<"\t"<<char(179)<<"   "<<char(arr[4][4])<<"\t"<<char(179)<<"   "<<char(arr[4][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[3][0])<<"\t"<<char(179)<<"   "<<char(arr[3][1])<<"\t"<<char(179)<<"   "<<char(arr[3][2])<<"\t"<<char(179)<<"   "<<char(arr[3][3])<<"\t"<<char(179)<<"   "<<char(arr[3][4])<<"\t"<<char(179)<<"   "<<char(arr[3][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[2][0])<<"\t"<<char(179)<<"   "<<char(arr[2][1])<<"\t"<<char(179)<<"   "<<char(arr[2][2])<<"\t"<<char(179)<<"   "<<char(arr[2][3])<<"\t"<<char(179)<<"   "<<char(arr[2][4])<<"\t"<<char(179)<<"   "<<char(arr[2][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[1][0])<<"\t"<<char(179)<<"   "<<char(arr[1][1])<<"\t"<<char(179)<<"   "<<char(arr[1][2])<<"\t"<<char(179)<<"   "<<char(arr[1][3])<<"\t"<<char(179)<<"   "<<char(arr[1][4])<<"\t"<<char(179)<<"   "<<char(arr[1][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
		cout<<"\n\t\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179)<<"\t"<<char(179);
		cout<<"\n\t\t"<<char(179)<<"   "<<char(arr[0][0])<<"\t"<<char(179)<<"   "<<char(arr[0][1])<<"\t"<<char(179)<<"   "<<char(arr[0][2])<<"\t"<<char(179)<<"   "<<char(arr[0][3])<<"\t"<<char(179)<<"   "<<char(arr[0][4])<<"\t"<<char(179)<<"   "<<char(arr[0][5])<<"\t"<<char(179);

		cout<<"\n\t\t";
		for(i=0;i<49;i++)
		{
			cout<<char(196);
		}
	}
};
