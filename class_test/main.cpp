#include <iostream>

using namespace std;

class CWin
{
public:
    char id[6]="abcde";
    //short sh;
    int width;
    long height;
    CWin(int width,int height):width(100)
    {
        cout<<width<<"dddd"<<endl;
        cout<<height<<"deeed"<<endl;
    }
};
int main()
{
    CWin(24,5);
    //CWin win1;
//    cout<<"win1= "<<sizeof(win1)<<endl;
//    cout<<"CWin= "<<sizeof(CWin)<<endl;

}
