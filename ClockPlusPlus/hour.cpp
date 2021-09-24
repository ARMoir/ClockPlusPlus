#include <iostream>
#include <chrono>
#include <ctime>
#include <string>
#include <thread>
#include "Hour.h"
using namespace std;

string SetHour(string ClockChar, int Hours)
{
    if (Hours > 12)
    {
        Hours -= 12;
    }

    switch (Hours)
    {

    case 1:
        ClockChar[82] = *"H";
        ClockChar[104] = *"/";
        break;

    case 2:
        ClockChar[107] = *"H";
        ClockChar[128] = *"/";
        break;

    case 3:
        ClockChar[153] = *"H";
        ClockChar[152] = *"-";
        ClockChar[151] = *"-";
        break;

    case 4:
        ClockChar[199] = *"H";
        ClockChar[174] = *"\\";
        break;

    case 5:
        ClockChar[220] = *"H";
        ClockChar[196] = *"\\";
        break;

    case 6:
        ClockChar[217] = *"H";
        ClockChar[194] = *"|";
        break;

    case 7:
        ClockChar[214] = *"H";
        ClockChar[192] = *"/";
        break;

    case 8:
        ClockChar[189] = *"H";
        ClockChar[168] = *"/";
        break;

    case 9:
        ClockChar[143] = *"H";
        ClockChar[144] = *"-";
        ClockChar[145] = *"-";
        break;

    case 10:
        ClockChar[97] = *"H";
        ClockChar[122] = *"\\";
        break;

    case 11:
        ClockChar[76] = *"H";
        ClockChar[100] = *"\\";
        break;

    case 12:
        ClockChar[79] = *"H";
        ClockChar[102] = *"|";
        break;  
    }

    return ClockChar;
}