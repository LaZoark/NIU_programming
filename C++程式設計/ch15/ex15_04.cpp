#include <iostream>     
#include <cstdlib>                             
#include <fstream>                                    //引入<fstream>標頭檔
using namespace std;                                  //指定使用C++ Standard Library

int main()
{
    ofstream fileOutput;                              //新建唯讀檔案物件
	
    fileOutput.open("fileOutput.txt", ios::app);      //以附加模式開啟fileOutput.txt
    if(!fileOutput.is_open())                         //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl;                //開檔有誤，輸出錯誤訊息
         return 1;                                    //不正常結束程式
    }
    else
    {
         fileOutput<<"一寸光陰一寸金,寸金難買寸光陰"<<endl;    //輸出字串至檔案
    }
    fileOutput.close();                               //關閉檔案
    
    system("pause");
    return 0;                                         //正常結束程式
}
