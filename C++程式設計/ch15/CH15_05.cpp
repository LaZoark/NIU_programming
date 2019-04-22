#include <iostream>                //引入<iostream>標頭檔
#include <fstream>               //引入<fstream>標頭檔
#include <cstdlib> 
using namespace std;      //指定使用C++ Standard Library

int main()
{   
    ifstream fileInput;        //新建唯讀檔案物件
    char str[8];               //新建str字元陣列
    int num;                   //新建int整數
    fileInput.open("text2.txt", ios::binary | ios::in); //以唯讀二進位模式開啟fileOutput.txt
    if(!fileInput.is_open())         //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl;     //開檔有誤，輸出錯誤訊息
         return 1;                    //不正常結束程式
    }
    else
    {
         cout<<"姓名    電話"<<endl;
         cout<<"==================="<<endl;
         fileInput.read(str, sizeof(str));     //讀取第一組的姓名
         fileInput.read((char*) &num, sizeof(int)); //讀取第一組的電話
         while(!fileInput.eof())           //檢查是否讀到檔尾
          {
             
              cout<<str<<"    "<<num<<endl;    //輸出資料至螢幕上
              fileInput.read(str, sizeof(str));  //讀取下一組的姓名
              fileInput.read((char*) &num, sizeof(int)); //讀取下一組的電話
          }
    }
    fileInput.close();             //關閉檔案
    
    system("pause");
    return 0;                //正常結束程式
}
