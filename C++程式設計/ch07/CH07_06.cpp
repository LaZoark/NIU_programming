#include <iostream>
#include <cstdlib>
using namespace std;

double salary(double pay,double hours=220);	//函數預設參數值	
int main()
{
   cout<<"張家浩 時薪:"<<95<<"元 本月薪資:"<<salary(95)<<endl; 
   cout<<"王為民 時薪:"<<115<<"元 本月薪資:"<<salary(115,240)<<endl;
   
   system("pause");
   return 0;
}

double salary(double pay,double hours)	
{
   return pay*hours;
}    
