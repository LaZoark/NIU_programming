#include <iostream>                                            //引入<iostream>標頭檔
#include <fstream>                                             //引入<fstream>標頭檔
#include <cstdlib> 
using namespace std;                                           //指定使用C++ Standard Library

int main()
{   
    ofstream fileOutput;                                       //新建唯寫檔案物件
    char str1[8]="胡昭民";                                        //新建str1字串
	char str2[8]="吳燦銘";                                        //新建str2字串
	char str3[8]="古昌弘";                                        //新建str3字串
    int num1=9134325;                                          //新建num1整數
    int num2=9876543;                                          //新建num2整數
    int num3=7357900;                                          //新建num3整數
    fileOutput.open("text2.txt", ios::binary | ios::out); //以唯寫二進位模式開啟fileOutput.txt
    if(!fileOutput.is_open())                                  //檢查檔案是否開啟
    {
         cout<<"檔案開啟錯誤！"<<endl;                         //開檔有誤，輸出錯誤訊息
         return 1;                                             //不正常結束程式
    }
    else
    {
         fileOutput.write(str1, sizeof(str1));      //寫入str1
         fileOutput.write((char*) &num1, sizeof(int));         //寫入num1
         fileOutput.write(str2, sizeof(str2));      //寫入str2
         fileOutput.write((char*) &num2, sizeof(int));         //寫入num2
         fileOutput.write(str3, sizeof(str3));      //寫入str3
         fileOutput.write((char*) &num3, sizeof(int));         //寫入num3
     }
    fileOutput.close();                                        //關閉檔案
    
    system("pause");
    return 0;                                                  //正常結束程式
}
