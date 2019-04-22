#include <iostream>                                   //引入<iotream>標頭檔
#include <fstream>                                    //引入<fstream>標頭檔
#include <cstdlib> 
using namespace std;                                  //指定使用C++ Standard Library

int main()
{
    ofstream fileOutput;                              //新建唯讀檔案物件
	fileOutput.open("fileOutput.txt",ios::out);      //以唯讀模式開啟fileOutput.txt
    if(!fileOutput.is_open())                         //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl;                //開檔有誤，輸出錯誤訊息
         return 1;                                    //不正常結束程式
    }
    else
    {
         fileOutput<<"今日事今日畢"<<endl;
         fileOutput<<"留得青山在不怕沒柴燒"<<endl;    //輸出字串至檔案
    }
    
    fileOutput.close();                               //關閉檔案
    
    system("pause");
    return 0;                                         //正常結束程式
}
