#include <iostream>
#include <cstdlib>
using namespace std;

char* getData(char*);//函數原形多載
int getData(int);
float getData(float);
double getData(double);

int main()
{
    char* cVal="榮欽科技";//定義不同資料型別 
    int iVal=2004;    
    float fVal=2.3f;    
    double dVal=2.123;        
    cout<<"執行 char* getData(char*)   => "<<getData(cVal)<<endl;
    cout<<"執行 int getData(int)       => "<<getData(iVal)<<endl;    
    cout<<"執行 float getData(float)   => "<<getData(fVal)<<endl;        
    cout<<"執行 double getData(double) => "<<getData(dVal)<<endl;            
    
    system("pause");
    return 0;
}
//定義多載函數內容 
char* getData(char* cVal)
{
    return cVal;
}

int getData(int iVal)
{
    return iVal;
}

float getData(float fVal)
{
    return fVal;
}

double getData(double dVal)
{
    return dVal;
}
