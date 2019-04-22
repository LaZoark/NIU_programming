#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;


int main()
 {
   char name[10][10]={"Mary","John","Michael","Helen","Stephen",
                      "Kelly","Deep","Bush","Cherry","Andy"};
   //宣告並設定字串陣列  
   char *name1[10],*temp;//宣告一維指標陣列及字串指標變數  
   int i,j;
 
    cout<<"排序前的陣列："<<endl;
    for ( i = 0; i < 10; i++ )
         {
          cout<<name[i]<<" ";
          name1[i]=name[i];//指標陣列元素指向字串陣列位址
          }

    for ( i = 0; i < 9; i++ )
     for ( j = i+1; j < 10; j++ )
     if(strcmp(name1[i],name1[j])>0)
     {
     temp=name1[j];
     name1[j]=name1[i];
     name1[i]=temp; //指標陣列的氣泡排序交換過程 
     }
    
    cout<<"\n排序後的陣列：" <<endl;
    for ( i = 0; i < 10; i++ )
     cout<<name1[i]<<" "; //輸出一維指標陣列的內容 
    cout<<endl;
     
    system("pause");
    return 0;
}
