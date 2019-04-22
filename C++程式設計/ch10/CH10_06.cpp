#include <iostream>
#include <cstdlib>
using namespace std;

int main()
 {
   struct grade
  {
    struct
    {
        char *name;
        int height;
        int weight;
     }   std[3];// 省略了內層結構的名稱定義，而直接使用grade結構來定義
    char *teacher;
  }g1={"John",174,65,"Justin",168,56,"Bush",177,80,"Mary"};
  //設定結構變數g1的初始值 

      int i;
  
   cout<<"老師:"<<g1.teacher<<endl; 
   cout<<"-----------------------------------------------"<<endl;
   cout<<"學生姓名,身高,體重如下:"<<endl; 
   
    for (i=0;i<3;i++)
    cout<<g1.std[i].name<<" "<<g1.std[i].height<<" "<<g1.std[i].weight<<endl;
   //巢狀結構存取與一般結構一樣，多一層結構就要多一個小數點.
    system("pause");
    return 0;
 }
