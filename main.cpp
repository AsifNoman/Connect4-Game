#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <windows.h>
#include "start.h"
using namespace std;

int main()
{
	// "Print" and "Start" class object initialize.
	Print  print;
	Start  start;

	// Game menu print.
	print.menu_print();
	// menu choice input function call.
	start.menu_choice();
}