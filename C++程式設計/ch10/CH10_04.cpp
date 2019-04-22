#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int  score[3];
    }; //宣告student 結構 
    struct student class1[5] = { {"Justin", 90,76,54},
                                 {"momor",  95,88,54},
                                 {"Becky",  98,66,90},
                                 {"Bush",   75,54,100},
                                 {"Snoopy", 80,88,97} };//設定5個成員的初使值 
    int i;
    
    for(i = 0; i < 5; i++)
     {
          cout<<"姓名:"<<class1[i].name<<'\t'<<"成績："<<class1[i].score[0]<<'\t'
          <<class1[i].score[1]<<'\t'<<class1[i].score[2]<<endl;
         //列印與存取student結構陣列的成員元素 
          cout<<"-----------------------------------------------"<<endl;
           }
           
    system("pause");
    return 0;
}
