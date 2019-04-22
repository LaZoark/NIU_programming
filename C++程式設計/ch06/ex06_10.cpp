#include <iostream>
#include <cstdlib>
using namespace std;

 int main()
 {
     int *no[3];//宣告指標陣列,有no[0],no[1],no[2]的整數指標  
     int num1[]={ 15,23,31 };
     int num2[]={ 114,225,336 };
     int num3[]={ 1237,3358,9271 };
     int i,j;
     
     no[0]=num1; // 指向num1陣列 
     no[1]=num2;//指向num2陣列 
     no[2]=num3;// 指向num3陣列  
     
     for(i=0;i<3;i++)
     {
      printf("num%d陣列元素內容=",i+1); 
      for(j=0;j<3;j++)
       {
       cout<<*(no[i]+j)<<'\t';//利用指標陣列來輸出 
       }
      cout<<endl;
      cout<<"-------------------------------------"<<endl;
      }
            
     system("pause");
     return 0;
}
