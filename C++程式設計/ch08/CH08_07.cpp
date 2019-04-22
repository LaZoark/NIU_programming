#include <iostream>
#include <cstdlib>
using namespace std;

int Factorial( int );  //階乘運算函數
static int fact_no;//宣告靜態外部變數 

int main()
{
    int number, answer;

    cout<<"請輸入數值求階乘：";
    cin>>number;//輸入階乘數目 
    answer = Factorial(number);//呼叫 Factorial()函數 
    cout<<number<<"!="<<answer<<endl;
    cout<<"fact_no ="<<fact_no<<endl;//列印目前的count值 
    
    system("pause");
    return 0;
}

//引數：number指定數值進行階乘運算 
// 傳回值：階乘運算結果 
int Factorial( int number )
{
int i;
    fact_no=1;
    for(i=1;i<=number;i++)
    fact_no=fact_no*i;
    return fact_no;
}

