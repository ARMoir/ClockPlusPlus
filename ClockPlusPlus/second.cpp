#include <iostream>
#include <chrono>
#include <ctime>    
#include <string> 
#include <thread>
#include "Second.h"  
using namespace std;

string SetSecond(string ClockChar, int Seconds, int Minute)
{
	if (Seconds % 2 == 0)
	{
		if (Minute == 0)
		{
			ClockChar[148] = *"*";
		}
		else if (Minute == 1)
		{
			ClockChar[37] = *"*";
		}
		else if (Minute == 2)
		{
			ClockChar[86] = *"*";
		}
		else if (Minute == 3)
		{
			ClockChar[155] = *"*";
		}
		else if (Minute == 4)
		{
			ClockChar[224] = *"*";
		}
		else if (Minute == 5)
		{
			ClockChar[267] = *"*";
		}
		else if (Minute == 6)
		{
			ClockChar[263] = *"*";
		}
		else if (Minute == 7)
		{
			ClockChar[259] = *"*";
		}
		else if (Minute == 8)
		{
			ClockChar[210] = *"*";
		}
		else if (Minute == 9)
		{
			ClockChar[141] = *"*";
		}
	}

	return ClockChar;
}