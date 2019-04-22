#include <iostream>               //引入<iostream>標頭檔
#include <fstream>                //引入<fstream>標頭檔
#include <cstdlib> 
using namespace std;             //指定使用C++ Standard Library

class NOTE                //定義NOTE類別
{
    protected:             //私有資料區
        char str[8];       //儲存姓名
        int num;          //儲存電話
    public:               //公用資料區
        void ShowNote()        //類別公用函式
        {
             cout<<"姓名："<<str<<endl;
             cout<<"電話："<<num<<endl;
        }
};

int main()
{
    ifstream fileInput;    //新建唯讀檔案物件
    fileInput.open("text3.txt", ios::binary | ios::in); 
    //以唯讀二進位模式開啟text3.txt
    if(!fileInput.is_open())          //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl; //開檔有誤，輸出錯誤訊息
         return 1;         //不正常結束程式
    }
    else
    {
         NOTE myNOTE;      //新建類別物件myNOTE
         fileInput.read((char*) &myNOTE, sizeof(NOTE));//讀取第一組類別物件;
         while(!fileInput.eof())    //檢查是否讀到檔尾
         {
              myNOTE.ShowNote();     //輸出一組姓名與電話
              fileInput.read((char*) &myNOTE, sizeof(NOTE)); //讀取下一組類別物件
         }
         cout<<"資料輸出完畢..."<<endl;
    }
    fileInput.close();           //關閉檔案
    
    system("pause");
    return 0;         //正常結束程式
}
