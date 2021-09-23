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
        ClockChar = H1(ClockChar);
        break;

    case 2:
        ClockChar = H2(ClockChar);
        break;

    case 3:
        ClockChar = H3(ClockChar);
        break;

    case 4:
        ClockChar = H4(ClockChar);
        break;

    case 5:
        ClockChar = H5(ClockChar);
        break;

    case 6:
        ClockChar = H6(ClockChar);
        break;

    case 7:
        ClockChar = H7(ClockChar);
        break;

    case 8:
        ClockChar = H8(ClockChar);
        break;

    case 9:
        ClockChar = H9(ClockChar);
        break;

    case 10:
        ClockChar = H10(ClockChar);
        break;

    case 11:
        ClockChar = H11(ClockChar);
        break;

    case 12:
        ClockChar = H12(ClockChar);
        break;  
    }

    return ClockChar;
}

string H1(string ClockChar)
{
    ClockChar[82] = *"H";
    ClockChar[104] = *"/";
    return ClockChar;
}

string H2(string ClockChar)
{
    ClockChar[107] = *"H";
    ClockChar[128] = *"/";
    return ClockChar;
}
string H3(string ClockChar)
{
    ClockChar[153] = *"H";
    ClockChar[152] = *"-";
    ClockChar[151] = *"-";
    return ClockChar;
}

string H4(string ClockChar)
{
    ClockChar[199] = *"H";
    ClockChar[174] = *"\\";
    return ClockChar;
}

string H5(string ClockChar)
{

    ClockChar[220] = *"H";
    ClockChar[196] = *"\\"; 
    return ClockChar;
}

string H6(string ClockChar)
{
    ClockChar[217] = *"H";
    ClockChar[194] = *"|";
    return ClockChar;
}

string H7(string ClockChar)
{
    ClockChar[214] = *"H";
    ClockChar[192] = *"/";
    return ClockChar;
}

string H8(string ClockChar)
{
    ClockChar[189] = *"H";
    ClockChar[168] = *"/";
    return ClockChar;
}

string H9(string ClockChar)
{
    ClockChar[143] = *"H";
    ClockChar[144] = *"-";
    ClockChar[145] = *"-";
    return ClockChar;
}

string H10(string ClockChar)
{
    ClockChar[97] = *"H";
    ClockChar[122] = *"\\"; 
    return ClockChar;
}

string H11(string ClockChar)
{
    ClockChar[76] = *"H";
    ClockChar[100] = *"\\"; 
    return ClockChar;
}

string H12(string ClockChar)
{
    ClockChar[79] = *"H";
    ClockChar[102] = *"|";
    return ClockChar;
}