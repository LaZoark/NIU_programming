#include <iostream>
#include <cstdlib>
using namespace std;

struct circle
{
    float r;
    float pi;
    float area;
};  //宣告circle 結構 
int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    //getData 指向myCircle 
    getData = &myCircle;
    //設定圓半徑 
    myCircle.r=5;
    myCircle.pi = 3.14159;
    //設定圓週率 
    myCircle.area = myCircle.r*myCircle.r*myCircle.pi;
    //計算圓面積 

    
    cout<<"getData->r ="<<getData->r<<endl; 
    cout<<"getData->pi ="<<getData->pi<<endl;
    cout<<"getData->area ="<<getData->area<<endl;
    //第一種 結構指標存取方式 
    cout<<"--------------------------------------"<<endl;
    cout<<"(*getData).r ="<<(*getData).r<<endl; 
    cout<<"(*getData).pi ="<<(*getData).pi<<endl;
    cout<<"(*getData).area ="<<(*getData).area<<endl;
    //第二種 結構指標存取方式 
    system("pause");
    return 0;
}

