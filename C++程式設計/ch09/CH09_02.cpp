#include<iostream>
#include<cstdlib>
using namespace std;
//定義各種巨集名稱
#define PI 3.14159
#define SHOW "圓面積=" 
#define  RESULT r*r*PI

int main()
{	
	int r;
	
    cout<<"請輸入圓半徑:";
 	cin>>r;
    cout<<SHOW<<RESULT<<endl;
    #undef PI //解除巨集定義
     system("pause");
     return 0;	
}
