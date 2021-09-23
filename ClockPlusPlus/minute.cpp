#include <iostream>
#include <chrono>
#include <ctime>    
#include <string> 
#include <thread>
#include "Minute.h"  
using namespace std;

string SetMinute(string ClockChar, int Minutes)
{
	if (Minutes >= 55)
	{
		ClockChar[52] = *"M";
		ClockChar[76] = *"\\";
		ClockChar[100] = *"\\";
	}
	else if (Minutes >= 50)
	{
		ClockChar[73] = *"M";
		ClockChar[97] = *"\\";
		ClockChar[122] = *"\\";
	}

	else if (Minutes >= 45)
	{
		ClockChar[142] = *"M";
		ClockChar[143] = *"-";
		ClockChar[144] = *"-";
		ClockChar[145] = *"-";
	}
	else if (Minutes >= 40)
	{
		ClockChar[211] = *"M";
		ClockChar[189] = *"/";
		ClockChar[168] = *"/";
	}
	else if (Minutes >= 35)
	{
		ClockChar[236] = *"M";
		ClockChar[214] = *"/";
		ClockChar[192] = *"/";
	}
	else if (Minutes >= 30)
	{
		ClockChar[240] = *"M";
		ClockChar[217] = *"|";
		ClockChar[194] = *"|";
	}
	else if (Minutes >= 25)
	{
		ClockChar[244] = *"M";
		ClockChar[220] = *"\\";
		ClockChar[196] = *"\\";
	}
	else if (Minutes >= 20)
	{
		ClockChar[223] = *"M";
		ClockChar[199] = *"\\";
		ClockChar[174] = *"\\";
	}
	else if (Minutes >= 15)
	{
		ClockChar[154] = *"M";
		ClockChar[153] = *"-";
		ClockChar[152] = *"-";
		ClockChar[151] = *"-";
	}
	else if (Minutes >= 10)
	{
		ClockChar[85] = *"M";
		ClockChar[107] = *"/";
		ClockChar[128] = *"/";
	}
	else if (Minutes >= 5)
	{
		ClockChar[60] = *"M";
		ClockChar[82] = *"/";
		ClockChar[104] = *"/";
	}
	else if (Minutes >= 0)
	{
		ClockChar[56] = *"M";
		ClockChar[79] = *"|";
		ClockChar[102] = *"|";
	}

	return ClockChar;
}