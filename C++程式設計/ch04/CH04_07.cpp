#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{ 
    int n,sum=1,i=1; //宣告變數與設定起始值
    cout<<"請輸入到第幾階層:";
    cin>>n; //輸入n值 
    
    while(i<=n)
    {
        sum=i*sum;//控制迴圈的條件式
        cout<<endl<<i<<"!="<<sum;
        i++; // 執行迴圈一次則加一 
    }
    
    cout<<endl;
    
    system("pause");
    return 0; 
} 
