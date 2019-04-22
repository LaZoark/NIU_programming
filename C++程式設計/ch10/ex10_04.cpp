#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


struct product
{
    char name[20];
    int price;
    int number;
};  // 在全域範圍內作宣告 
int calculate(struct product*);
//傳址呼叫的原型宣告 

int main()
{
    struct product book;
    
    cout<<"書名:";
    cin>>book.name;
    cout<<"單價:";
    cin>>book.price;
    cout<<"數量:";
    cin>>book.number;
    cout<<"-----------------------------------------"<<endl;
    cout<<"書名 :"<<book.name<<endl;
    cout<<"單價 ="<<book.price<<endl;
    cout<<"數量 ="<<book.number<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"訂購金額 ="<<calculate(&book)<<endl; //呼叫時，直接將結構變數位址傳入函數即可  
    cout<<book.name<<endl;// 經過傳址呼叫後，內容址已同步改變 
    system("pause");
    return 0;
}
int calculate(struct product *inbook)
{
    int money;
    strcpy(inbook->name,"本書已付款了!!");
    //不可以直接將字串值直接指定給字元陣列，需透過strcpy()函數
    money = inbook->price*inbook->number;//計算訂購金額 
    return money;
}

