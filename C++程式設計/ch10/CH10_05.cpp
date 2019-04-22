#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
    };
    struct student s1[5] = { {"Justin", 90},
                             {"Momor",  95},
                             {"Becky",  98},
                             {"Bush",   75},
                             {"Snoopy", 80} };// 設定5個成員的初使值 
    struct student *s2[5];// 宣告成結構指標陣列 
    int i;
    
    for(i = 0; i < 5; i++)
        s2[i] = &s1[i];//複製結構成員 
     
    for(i = 0; i < 5; i++)
    {
        cout<<"姓名："<<s2[i]->name<<'\t';
        cout<<"成績："<<s2[i]->score<<endl;
    }//顯示結構成員 

    system("pause");
    return 0;
}
