#include "globle.h"
using namespace std;

void full_textgotoxy(int x,int y)
{
    srand((unsigned)time(NULL));
    char ch=rand()%6+1;
    if(x/SCREEN_RATIO<=135)
    cout<<setw((x/SCREEN_RATIO))<<setfill(ch)<<ch<<endl;
    else
    cout<<setw((x/SCREEN_RATIO)-2)<<setfill(ch)<<ch<<endl;
}
