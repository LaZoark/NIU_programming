#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{    
   int i,j,k,sum=0;
   
   int arr[4][3][3]={{{1,-2,3},{4,5,-6},{8,9,2}},
           {{7,-8,9},{10,11,12},{7,3,2}},
           {{-13,14,15},{16,17,18},{3,6,7}},
           {{19,20,21},{-22,23,24},(-6,9,12)}};//宣告並設定陣列元素值  
   cout<<"---------------------以指標常數*(*(arr+i)+j)+k表示---------------------"<<endl; 
   for(i=0;i<4;i++)
     {
        for(j=0;j<3;j++)
        {
          for(k=0;k<3;k++)
             cout<<*(*(arr+i)+j)+k<<'\t';//以指標常數表示三維陣列元素位址 
        }
        cout<<endl;
      }
   cout<<"--------------------以&」取址運算子&arr[i][j][k]表示--------------------"<<endl; 
   cout<<endl;
    for(i=0;i<4;i++)
     {
        for(j=0;j<3;j++)
        {
          for(k=0;k<3;k++)
             cout<<&arr[i][j][k]<<'\t';//以取址運算子表示三維陣列元素位址 
        }
        cout<<endl;
      }
                 
   system("pause");
   return 0;
}


