#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num,hundred,fifty,ten;
    cout<<"請輸入將兌換金額:"; 
    cin>>num;
    hundred=num/100;
    fifty=(num-hundred*100)/50;
    ten=(num-hundred*100-fifty*50)/10;
    cout<<"百元鈔有"<<hundred<<"張 五十元鈔有"<<fifty<<"張 十元鈔有"<<ten<<"張"<<endl; 
    
    system("pause");    
    return 0; 
}
