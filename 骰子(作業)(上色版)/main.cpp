#include <iostream>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;
void SetColor(int color)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole,color);
}
void three(int);
int main()
{
    cout<<"��2����l�A�ᦳn���@�˴N����"<<endl<<"(�H�C��ϧO)"<<endl;
    cout<<"�п�Jn"<<endl;
    int n;
    cin>>n;
    three(n);
}

void three(int n)
{
    int i,j,k=0;
    srand(time(NULL));
    while(1)
    {
        i=rand()%6+1;
        j=rand()%6+1;

        if(i==j)
        {
            k++;
            SetColor(6);
        }
        else if(i!=j)
            SetColor(15);
        cout<<i<<j<<endl;
        if(k==n)
            break;
    }

}
