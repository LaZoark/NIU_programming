#include <iostream>
#include <cstdlib>
using namespace std;

struct circle
{
    float r;
    float pi;
    float *area;
};  // 圓的結構體，並設定其中結構成員area為指標變數 

int main()
{
    struct circle myCircle;
    struct circle *getData;
    
    float Area;
    
    myCircle.r=5;
    myCircle.pi = 3.14159;
    myCircle.area = &Area;//指向一個實數位址 
    *myCircle.area= myCircle.r*myCircle.r*myCircle.pi;  
    cout<<"*myCircle.area ="<<*myCircle.area<<endl;//直接取 myCircle 的 area 值 
    cout<<"myCircle.area ="<<myCircle.area<<endl;//直接取 myCircle 的 位址 
    cout<<"Area ="<<Area<<endl; //myCircle的area指向Area,兩者資料內容相同  
    cout<<"&Area ="<<&Area<<endl; //顯示 Area 的位址,myCircle 的 位址相同 
    cout<<"-----------------------------------------"<<endl; 
    
    getData = &myCircle;//getData 指向myCircle 
      
    cout<<"getData->r ="<<getData->r<<endl;    
    cout<<"getData->pi ="<<getData->pi<<endl;
    cout<<"getData->area ="<<getData->area<<endl;//getData間接取area的位址 
    cout<<"*getData->area ="<<*getData->area<<endl; //getData間接取area的值 
    
    
    system("pause");
    return 0;
}

