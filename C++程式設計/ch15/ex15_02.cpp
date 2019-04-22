#include <iostream>          //引入<iostream>標頭檔
#include <fstream>           //引入<fstream>標頭檔
#include <cstdlib>
using namespace std;      //指定使用C++ Standard Library

class NOTE              //定義NOTE類別
{
    protected:             //私有資料區
        char str[8];        //儲存姓名
        int num;                //儲存電話
    public:                      //公用資料區
        void SetNote()        //類別公用函式
        {
	         cout<<"請輸入姓名：";
             cin>>str;
             cout<<"請輸入電話：";
             cin>>num;
        }
};

int main()
{
    ofstream fileOutput;    //新建唯寫檔案物件
    fileOutput.open("text3.txt", ios::binary | ios::out); 
    //以唯寫二進位模式開啟text3.txt
    if(!fileOutput.is_open())     //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl; //開檔有誤，輸出錯誤訊息
         return 1;          //不正常結束程式
    }
    else
    {
         NOTE myNOTE;              //新建類別物件myNOTE
	      cout<<"請連續輸入三組姓名與電話..."<<endl;
         for(int i=0; i<3; i++)      //總共輸入三組
         {
              myNOTE.SetNote(); //輸入一組姓名與電話
              fileOutput.write((char*) &myNOTE, sizeof(NOTE)); //存入類別物件
         }
         cout<<"資料輸入完畢..."<<endl;
    }
    fileOutput.close();    //關閉檔案
    
    system("pause");
    return 0;     //正常結束程式
}
