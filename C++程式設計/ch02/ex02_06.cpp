 //顯示變數資料型態的長度
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int salary=100;//宣告為整數型態 
    float sum=100.99; //宣告為實數型態 
    
    cout<<"salary的資料長度＝"<<sizeof(salary)<<"位元組"<<endl;  //取得變數salary大小
    cout<<"sum的資料長度＝"<<sizeof(sum)<<"位元組"<<endl;  //取得變數sum大小
    
    system("pause");
    return 0;
}
