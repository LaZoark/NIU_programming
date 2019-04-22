#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct student
    {
        char name[20];
        int score;
        struct student *next;
    }; //定義 student 節點 
    struct student s[3]; //宣告結構陣列 
    int i;
    struct student *ptr;    // 設定讀取旗標 

    //設定結構成員與串列的下一個位址 
    for(i = 0; i < 3; i++)
    {
        cout<<"姓名：";
        cin>>s[i].name; //輸入學生姓名 
        cout<<"成績：";
        cin>>s[i].score;//輸入學生成績 
        if (i != 2)
            s[i].next = &s[i+1];//指向下一個節點 
        else
            s[i].next = NULL;//最後一個節點指向 NULL 
    }
    ptr = &s[0];//ptr指向串列的第一個節點 
    cout<<"---------------------------------"<<endl;
    while(ptr != NULL)
    {
        cout<<"姓名："<<ptr->name<<"成績："<<ptr->score<<endl;
        ptr = ptr->next;//走訪下一個節點 
    }//走訪串列並顯示內容 
    
    system("pause");
    return 0;
}