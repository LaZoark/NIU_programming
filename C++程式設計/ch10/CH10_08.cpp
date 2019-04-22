#include <iostream>
#include <cstdlib>
using namespace std;

typedef int INTEGER; //Integer 被定義成 int 型態 
typedef char STRING[20];//STRING 被定義成長度為20的字元陣列 

typedef struct hotel
{
    INTEGER roomNumber;
    STRING hotelName;
} hotel_Info; //以typedef指令將hotel結構,重新定義成hotel_Info  

int main()
{    
    hotel_Info myhotel; //重新定義結構，不必加上struct保留字 
    cout<<"旅館名稱:";
    cin>>myhotel.hotelName; 
    cout<<"房間數目:";
    cin>>myhotel.roomNumber;
    cout<<"------------------------------------"<<endl;
    cout<<"旅館名稱:"<<myhotel.hotelName<<endl;
    cout<<"房間數目:"<<myhotel.roomNumber<<endl;
    
    system("pause");
    return 0;
}

