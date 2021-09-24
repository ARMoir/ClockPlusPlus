#include <iostream>
#include <chrono>
#include <thread>
#include "Face.h"
#include "Hour.h"
#include "Minute.h"
#include "Second.h"
using namespace std;

int main() 
{
    string ClockChar = "";
    string ClockString = "";
    string Display = "";
    int Hours = 0;
    int Minutes = 0;
    int Minute = 0;
    int Seconds = 0;

    //Setup the Clock Face
    cout << "\033[H\033[2J\033[3J";
    ClockString = SetFace();

    //Clock Loop
    while (true)
    {
        //Populate ClockChar
        ClockChar = "";
        ClockChar = ClockString;

        //Get the Current Time
        char H[] = "%H";
        char M[] = "%M";
        char S[] = "%S";
        Hours = stoi(CurrentTime(H));
        Minutes = stoi(CurrentTime(M));
        Seconds = stoi(CurrentTime(S));
        Minute = Minutes % 10;
        
        //Set time to Clock
        ClockChar = SetMinute(ClockChar, Minutes);
        ClockChar = SetHour(ClockChar, Hours);
        ClockChar = SetSecond(ClockChar, Seconds, Minute);

        //Populate Display values
        Display = "";
        Display = ClockChar;
        ClockChar = "";

        //Write Display to Console
        cout << "\033[1;1H" << Display << endl;

        //Wait one Second
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}

