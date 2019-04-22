#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);
    char * A = ctime(&now);
    srand((unsigned)time(0));

    for(int Y,i=1; i<=3; i++)
    {
        Y=rand()%27;
        cout << ((Y-rand()%9)/4)+2 << endl;
    }
    cout << A << endl;
    return 0;
}
