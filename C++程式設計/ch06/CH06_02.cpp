#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int iVal=10;         // 整數變數 
    double dVal=123.45;   //倍精度實數變數 
    
    int* piVal=NULL; // 宣告為空指標  
    piVal= &iVal;   //整數型態的指標變數，指向iVal變數位址 
    
    double* pdVal=&dVal;    //實數型態的指標變數，指向fVal變數位址 
    
    cout<<"piVal 變數位址為"<<piVal<<endl;
    cout<<"piVal 變數所指向位址的資料內容為"<<*piVal<<endl;        
             
   *piVal=20; // 重新指定piVal指標變數的資料內容為20  
    cout<<"piVal 指標變數重新設定後,iVal的資料內容同步更改為"<<iVal<<endl;  
    cout<<"整數iVal所佔用的記憶空間為:"<<sizeof(iVal)<<"位元"<<endl;
    cout<<"整數指標變數piVal所佔用的記憶空間為:"<<sizeof(piVal)<<"位元"<<endl<<endl;
    
    cout<<"pdVal 變數位址為"<<pdVal<<endl;
    cout<<"pdVal 變數所指向位址的資料內容為"<<*pdVal<<endl; 
    
    *pdVal=67.1234; //重新指定pdVal指標變數的資料內容為67.1234  
    cout<<"pdVal 指標變數重新設定後,dVal的資料內容同步更改為"<<dVal<<endl;  
    cout<<"倍精度實數dVal所佔用的記憶空間為:"<<sizeof(dVal)<<"位元"<<endl;
    cout<<"倍精度實數指標變數pdVal所佔用的記憶空間為:"<<sizeof(pdVal)<<endl;
    
    system("pause");      
    return 0; 
}
