#include <iostream>                                            
#include <cstdlib> 
using namespace std;

template <class T1, class T2>                                    // 妓Α把计 T1, T2 
void Cal_Num(T1 a, T2 b)                                         // 妓ㄧ计 Cal_Num() 
{
	 /* 秈︽把计 a 籔 b 玥笲衡硓筁眏篈锣传陪ボ挡狦 */
     cout << a << " + " << b << " = " << (double) a+b << endl;
	 cout << a << " - " << b << " = " << (double) a-b << endl;
	 cout << a << " * " << b << " = " << (double) a*b << endl;
	 cout << a << " / " << b << " = " << (double) a/b << endl;
}

int main()
{
     int x=4;                                // ﹚竡俱计跑计 x
	 float y=2.5;                          // ﹚竡疊翴计跑计 y
	 double z=8.442;                   // ﹚竡弘跑计 z

	 Cal_Num(x, y);            // ㊣ㄧ计 Cal_Num()
	 Cal_Num(y, z);
     cout << endl;
     
     system("pause");
     return 0;
}
