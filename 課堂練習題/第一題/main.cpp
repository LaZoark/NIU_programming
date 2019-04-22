#include <iostream>
//1.一直輸入一堆整數，直到輸入負數才停下來，最後印出平均值(一定要用到BREAK)
using namespace std;

int main()
{
    int a,sum=0;
    float t=0.0f;
    for(; cin>>a; t++)
    {
        if(a<0)
            break;
        sum+=a;
    }
    cout<<"共輸入了"<<t<<"個正整數"<<endl;
    cout<<"平均值為 : "<<sum/t<<endl;
    return 0;
}
