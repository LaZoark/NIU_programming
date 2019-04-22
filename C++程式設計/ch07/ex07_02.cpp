#include <iostream>
#include <cstdlib>
using namespace std;
//無意義的函式，純綷示範傳值呼叫 
void CallByValue(int x)
{
    x = 30;
}

// 無意義的函式，純綷示範傳址呼叫 
void CallByAddress(int *x)
{
    *x = 30;
}
void CallMix(int x,int *y)// 無意義的函式，純綷示範傳值與傳址混合呼叫 
{
     x=30;
     *y=20;
}
int main()
{
    int x = 10,y=10;

    printf( "傳值呼叫前：%d\n", x );
    CallByValue(x);//呼叫傳值函數 
    printf( "傳值呼叫後：%d\n", x );
    printf("-------------------------------------------\n");
    printf( "傳址呼叫前：%d\n", x );
    CallByAddress(&x);//呼叫傳址函數 
    printf( "傳址呼叫後：%d\n", x );
    printf("-------------------------------------------\n");
     printf( "混合型呼叫前：%d %d\n", x ,y);
    CallMix(x,&y);
    printf( "混合型呼叫後：%d %d\n", x ,y);
    
    system("pause");
    return 0;
}

