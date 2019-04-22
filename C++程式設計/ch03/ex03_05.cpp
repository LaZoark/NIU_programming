#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
   
   int Chi,Eng,Math;
   float total,average;

   cout<<"請輸入學生三科成績: ";
   cin>>Chi>>Eng>>Math;		//由鍵盤輸入三筆成績
   total=Chi+Eng+Math; //計算總分 
   average=total/3;    //計算平均 
   
   cout<<"國文"<<'\t'<<"英文"<<'\t'<<"數學"<<'\t'<<"總分"<<'\t'<<"平均"<<endl;
   cout<<Chi<<'\t'<<Eng<<'\t'<<Math<<'\t'<<total<<'\t'<<average<<endl;


   system("pause");
   return 0;
}

