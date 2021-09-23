#include <iostream>
#include <chrono>
#include <ctime>    
#include <string> 
#include <thread>
#include "Face.h"
using namespace std;

string SetFace()
{

    string ClockString = R"(
   ~-------------~    
 ('..'11..12..1'..')  
| :               : | 
| :10            2: | 
| :               : | 
| :               : | 
| :9      @      3: | 
| :               : | 
| :               : | 
| :8             4: | 
| :               : | 
 ('..'7...6...5'..')  
   ~-------------~   )";

	return ClockString;
}

string CurrentTime(char* Format)
{
    time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
    char buf[100] = { 0 };
    strftime(buf, sizeof(buf), Format, localtime(&now));

    return buf;
}