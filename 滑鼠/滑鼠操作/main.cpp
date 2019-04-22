#define _WIN32_WINNT 0x500
// if you run into some error, try 0x501 above instead of 0x500
#include <iostream>
#include <windows.h>
using namespace std;
void printSplash ()
{
    cout << "\n _____________________________\n";
    cout << "/                             \\\n";
    cout << "|         MOUSE TRACER        |\n";
    cout << "|           La Zoark          |\n";
    cout << "|          beta  v0.2         |\n";
    cout << "\\_____________________________/\n";
}
void getMethod (int& method)
{
    // update (via pointer) what method to use (simple)
    cout << "0) Exit\n";
    cout << "1) Read cursor position\n";
    cout << "2) Right mouse click\n";
    cout << "3) Left mouse click\n";
    cout << "4) Move mouse to location\n\n";
    cout << "Enter the number of your selection: ";
    cin >> method;
}
void getMousePosition (int& xPos, int& yPos)
{
    // make a point and read into it, then update vars via pointers
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    xPos = cursorPos.x;
    yPos = cursorPos.y;
}
void mouseRightClick ()
{
    INPUT Input = {0};

    // right down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;
    ::SendInput(1,&Input,sizeof(INPUT));

    // right up
    ::ZeroMemory(&Input,sizeof(INPUT));
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_RIGHTUP;
    ::SendInput(1,&Input,sizeof(INPUT));
}
void mouseLeftClick ()
{
    INPUT Input = {0};

    // left down
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    ::SendInput(1,&Input,sizeof(INPUT));

    // left up
    ::ZeroMemory(&Input,sizeof(INPUT));
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
    ::SendInput(1,&Input,sizeof(INPUT));
}
void mouseMoveTo (int toX, int toY)
{
    // find out info about the screen so that we know how to properly go
    // to pixels
    double screenRes_width = ::GetSystemMetrics( SM_CXSCREEN )-1;
    double screenRes_height = ::GetSystemMetrics( SM_CYSCREEN )-1;
    // modify for the 65535 (as float) way we talk to the screen...
    double dx = toX*(65535.0f / screenRes_width);
    double dy = toY*(65535.0f / screenRes_height);

    // movement stuff
    INPUT Input = {0};
    Input.type = INPUT_MOUSE;
    Input.mi.dwFlags = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
    Input.mi.dx = LONG(dx);
    Input.mi.dy = LONG(dy);
    ::SendInput(1,&Input,sizeof(INPUT));
}
int main ()
{
    //
    // Initialize window here, and all that good stuff
    //

    SetConsoleTitle( "Auto Clicker v0.01" );

    // set up variables to be used
    int xPos, yPos; // position of pointer
    int methodNumber = 0; // what method to use
    int numOfClicks = 0; // number of clicks
    int sleepTime = 0; // sleep time in ms

start:

    printSplash();
    getMethod(methodNumber);

    if (methodNumber == 1)
    {
        cout << "Number of reads: ";
        cin >> numOfClicks;
        cout << "\nAmount of time to wait between reads (ms): ";
        cin >> sleepTime;
        cout << "Reading position in 3 seconds.\n";
        Sleep(1000);
        cout << "2..\n";
        Sleep(1000);
        cout << "1..\n\n";
        Sleep(1000);
        for(int x=0; x<numOfClicks; x++)
        {
            getMousePosition(xPos,yPos);
            cout << "(x,y)   :   (" << xPos << "," << yPos << ")\n";
            Sleep(sleepTime);
        }
        goto start;
    }

    if (methodNumber == 2)
    {
        cout << "Clicking right mouse button.\n\nNumber of clicks: ";
        cin >> numOfClicks;
        cout << "\nTime to wait between clicks (ms): ";
        cin >> sleepTime;
        cout << "In 3 seconds...\n";
        Sleep(1000);
        cout << "2..\n";
        Sleep(1000);
        cout << "1..\n\n";
        Sleep(1000);
        for(int x=0; x<numOfClicks; x++)
        {
            mouseRightClick();
            Sleep(sleepTime);
        }
        goto start;
    }

    if (methodNumber == 3)
    {
        cout << "Clicking left mouse button.\n\nNumber of clicks: ";
        cin >> numOfClicks;
        cout << "\nTime to wait between clicks (ms): ";
        cin >> sleepTime;
        cout << "In 3 seconds...\n";
        Sleep(1000);
        cout << "2..\n";
        Sleep(1000);
        cout << "1..\n\n";
        Sleep(1000);
        for(int x=0; x<numOfClicks; x++)
        {
            mouseLeftClick();
            Sleep(sleepTime);
        }
        goto start;
    }

    if (methodNumber == 4)
    {
        cout << "Moving.\n\nX coordinate: ";
        cin >> xPos;
        cout << "\nY coordinate: ";
        cin >> yPos;
        cout << "\n\nMoving in 1 second...";
        Sleep(1000);
        mouseMoveTo(xPos,yPos);
        goto start;
    }


    else
    {
        return 0;
    }
}
