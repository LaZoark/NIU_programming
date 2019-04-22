#define _WIN32_WINNT 0x500
#include <iostream>
#include <windows.h>

using namespace std;

void printSplash ()     //PICTURE
{
    cout << "\n _____________________________\n";
    cout << "/                             \\\n";
    cout << "|          MOUSE TRACER       |\n";
    cout << "|            La Zoark         |\n";
    cout << "|           beta  v0.2        |\n";
    cout << "\\_____________________________/\n";
}

void getMousePosition (int& xPos, int& yPos)
{
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    xPos = cursorPos.x;
    yPos = cursorPos.y;
}

int main ()
{
    int xPos, yPos; // position of pointer
    int methodNumber = 0; // what method to use
    int numOfClicks = 0; // number of clicks
    int sleepTime = 0; // sleep time in ms

    while(1)
    {
        printSplash();

        cout << "Number of reads: ";
        cin >> numOfClicks;
        cout << "\nAmount of time to wait between reads (ms): ";
        cin >> sleepTime;

        for(int x=0; x<numOfClicks; x++)
        {
            getMousePosition(xPos,yPos);
            cout << "(x,y)   :   (" << xPos << "," << yPos << ")\n";
            Sleep(sleepTime);
        }
    }
}
