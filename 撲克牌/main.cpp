/*
04 02 �~�P�P�o�P���L�{
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y)
{
    COORD scrn= {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),scrn);
}
int top=-1;
void Swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void push(int stack[],int MAX,int val)
{
    if(top>=MAX-1)
        cout<<"[���|�w�g���F]"<<endl;
    else
    {
        top++;
        stack[top]=val;
    }
}
int pop(int stack[])
{
    if(top<0)
        cout<<"[���|�w�g�ŤF]"<<endl;
    else
        top--;
    return stack[top];
}

int main()
{
    SetConsoleTitle("yo �o�OPOKER�A����");
    while(1)
    {
    int initial[]= {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int i,j,k=0,loading=3,card[52],stack[52]= {0};
    char suit[4]= {'\5','\3','\4','\6'};
    srand((unsigned)time(NULL));

        cout<<"[ �s �� �@ �� �� �J �P ]"<<endl;
        Sleep(500);
        for(int u=0,i=0; i<52; i++)     //��l��
        {
            card[i]=i+1;
            cout<<"["<<suit[i/13]<<setw(2)<<initial[u++%13]<<"] ";
            Sleep(30);
            if((i+1)%13==0)
                cout<<endl;
        }
        Sleep(500);
        cout<<"�п�J�~�P����: ";
        cin>>k;
        cout<<"[���b�~�P...�еy��!]"<<endl;
        while(loading-->0)
        {
            for(int w=0; w<5; w++)
            {
                cout<<". ";
                Sleep(200);
            }
            cout<<"\r"<<setw(10)<<setfill('\t')<<'\r'<<setfill(' ');
            Sleep(100);
        }
        Sleep(150);
        while(k-->0)                     //�~�P
        {
            for(i=0; i<51; i++)
                for(j=i+1; j<52; j++)
                    if(rand()%52==2)
                        Swap(&card[i],&card[j]);    //�洫�L�̪���}
        }
        i=0;
        gotoxy(0,5);
        cout<<"[ �� �Q �~ �P ! ]\t\t\t\t"<<endl;
        Sleep(500);
        while(i!=52)
            push(stack,52,card[i++]);//�N52�i�P���J���|
        cout<<"[���b�o�P�A�Э@�ߵ���!]"<<endl;
        Sleep(50);
        cout<<setw(12)<<"\n�|�쪱�a:  <A>"<<setw(15)<<"<B>"<<setw(15)<<"<C>"<<setw(15)<<"<D>";
        cout<<setw(50)<<setfill('=')<<setfill(' ')<<endl;
        while(top>=0)
        {
            cout<<setw(11)<<"["<<suit[stack[top]%4]<<setw(2)<<stack[top]%13+1<<"]";
            Sleep(100);
            if(top--%4==0)
                cout<<endl;
        }
        gotoxy(0,6);
        cout<<"[ �� �� �o �P ! ]�@�@�@\t\t\n\n";
        gotoxy(0,24);
        cout<<"�Ы����N�䭫�s�}�l..."<<endl;
        _getch();
        if(_getch()=='n')
            break;
        else system("CLS");
    }
}
