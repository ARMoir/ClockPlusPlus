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
    system("clear");
    ClockString = SetFace();

    //Clock Loop
    while (true)
    {
        //Populate ClockChar
        ClockChar = "";
        ClockChar = ClockString;

        //Get the Current Time
        Hours = stoi(CurrentTime("%H"));
        Minutes = stoi(CurrentTime("%M"));
        Seconds = stoi(CurrentTime("%S"));
        Minute = Minutes % 10;
        
        //Set time to Clock
        ClockChar = SetHour(ClockChar, Hours);
        ClockChar = SetMinute(ClockChar, Minutes);
        ClockChar = SetSecond(ClockChar, Seconds, Minute);

        //Populate Display values
        Display = "";
        Display = ClockChar;
        ClockChar = "";

        //Write Display to Console
        system("clear");
        cout << Display << endl;
        cout << "\n";

        //Wait one Second
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}

