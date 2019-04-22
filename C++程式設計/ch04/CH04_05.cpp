#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
      int i,sum=0;

	  for (i=1;i<=10;i++)  //定義for迴圈
       sum+=i;                    //sum=sum+i
       
      cout<<"1+2...10="<<sum<<endl;  //印出sum的值
      
      system("pause");
      return 0;
}
