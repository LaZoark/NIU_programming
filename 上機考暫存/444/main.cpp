#include <iostream>
using namespace std;
int five()
{
    char a[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            cin>>a[i][j];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if(a[i][j]=='-')
                cout<<"尚有玩家未輸入"<<endl;
            else if( a[0][0]==a[1][0]&&a[1][0]==a[2][0]||
                     a[0][1]==a[1][1]&&a[1][1]==a[2][1]||
                     a[0][2]==a[1][2]&&a[1][2]==a[2][2]||
                     a[0][0]==a[0][1]&&a[0][1]==a[0][2]||
                     a[1][0]==a[1][1]&&a[1][1]==a[1][2]||
                     a[2][0]==a[2][1]&&a[2][1]==a[2][2]||
                     a[0][0]==a[1][1]&&a[1][1]==a[2][2]||
                     a[0][2]==a[1][1]&&a[1][1]==a[2][0]  )
                cout<<"BINGO!!!"<<endl;
            else
                cout<<"fail to Bingo..."<<endl;

}
int main()
{
    while(1)
        five();
}
