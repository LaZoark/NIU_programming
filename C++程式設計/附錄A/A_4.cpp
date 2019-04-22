#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    time_t now;
    struct tm *local,*gmt;//宣告local結構變數 
    now = time(NULL);//取得系統目前時間  
    
    cout<<now<<"秒"<<endl;
    cout<<"現在時間:ctime():"<<ctime(&now)<<endl;//轉為一般時間格式 
    local = localtime(&now);
    cout<<"本地時間:asctime():"<<asctime(local)<<endl;//轉為一般時間格式 
    gmt = gmtime(&now);//取得格林威治時間 
    cout<<"格林威治時間："<<asctime(gmt)<<endl;

    system("pause");
    return 0;
}
