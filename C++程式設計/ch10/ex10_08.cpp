#include <iostream>
#include <cstdlib> 
#include <cstring> 
using namespace std;

struct student
   {
    char name[10];
    int score;
    }; // 定義結構 ,結構中有陣列資料成員 

void min(struct student s[]); // 以傳址呼叫的函數原型宣告 

int main()
{
     
     int i;
     
     struct student s[5]={
     {"張鎮華",77},{"張華文",88},{"陳來德",69},{"王文英",58},
     {"胡中星",98}}; //定義並設定結構陣列初始值  
     
     min(s);  //呼叫並傳遞陣列到函數中  
     
     system("pause");
     return 0;
}
 
 void min(struct student s1[])
 {   
     int i,min_score;
     char min_name[10];
     
     min_score=s1[0].score;//設定第一筆為min 
     for(i=0;i<5;i++)
      if(s1[i].score<min_score)
      {
       min_score=s1[i].score;
       strcpy(min_name,s1[i].name);
       }
      cout<<"最低分數是"<<min_name<<"的"<<min_score<<"分"<<endl;         
      cout<<"-------------------------------"<<endl;   
}
