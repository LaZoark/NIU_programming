#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
    };//宣告student 結構 
    struct student class1[5] = { {"Justin", 90},
                                 {"momor",  95},
                                 {"Becky",  98},
                                 {"Bush",   75},
                                 {"Snoopy", 80} };//設定5個成員的初使值 
    int i;
    cout<<"----------列印student結構陣列的成員------------"<<endl;
    for(i = 0; i < 5; i++)
        cout<<"姓名："<<class1[i].name<<"成績："<<class1[i].score<<endl;
     //列印student結構陣列的成員元素 
    cout<<"---------使用指標常數來存取student結構成員---------"<<endl;
    for(i = 0; i < 5; i++)	   
    cout<<"姓名："<<(class1+i)->name<<"成績："<<(class1+i)->score<<endl;
     //可以使用指標的觀念來存取student結構成員
    
    system("pause");
    return 0;
}
