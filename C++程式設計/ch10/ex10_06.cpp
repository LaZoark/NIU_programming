#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   struct student
  {
    char name[10];
    int math;
    int english;
  }; // 定義結構 

   struct student class1[3]=
    {{"Helln",87,79},{"Wilson",77,100},{"Kevin",78,90}};
   //定義並設定結構陣列初始值  
   int i;
   float math_Ave=0,english_Ave=0;
   
   for(i=0;i<3;i++)
   {
     math_Ave=math_Ave+class1[i].math;// 計算數學總分  
     english_Ave=english_Ave+class1[i].english;// 計算英文總分  
     cout<<"姓名:"<<class1[i].name<<"數學成績:"<<class1[i].math<<"英文成積:"<<class1[i].english<<endl; 
   }
   cout<<"--------------------------------------------"<<endl;
   cout<<"數學平均分數:%"<<math_Ave/3<<"英文平均分數:"<<english_Ave/3<<endl;
   
   system("pause");
   return 0;
}

