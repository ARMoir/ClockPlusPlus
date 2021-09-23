#include <iostream>
#include <chrono>
#include <ctime>    
#include <string> 
#include <thread>
#include "Face.h"
using namespace std;

string SetFace()
{

    string ClockString = 
"   ~-------------~    \n\
 ('..'11..12..1'..')  \n\
| :               : | \n\
| :10            2: | \n\
| :               : | \n\
| :               : | \n\
| :9      @      3: | \n\
| :               : | \n\
| :               : | \n\
| :8             4: | \n\
| :               : | \n\
 ('..'7...6...5'..')  \n\
   ~-------------~    \n\ ";

	return ClockString;
}

string CurrentTime(char* Format)
{
    time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    char buf[100] = { 0 };
    strftime(buf, sizeof(buf), Format, localtime(&now));

    return buf;
}