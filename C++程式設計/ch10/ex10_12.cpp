#include<iostream>  
#include<cstdlib>
#include<cstring>       
using namespace std;

#define NUM 50

struct student
{
    char name[80];
    char tel[20];
}st[NUM] ;

int main()
{
    int select;
    char name[80], tel[20];
    int number;
    int i;
    do
    {
        printf("(1)輸入  (2)搜尋  (3)離開  =>");
        cin>>select;
        switch (select)
        {
            case 1:
                cout<<">";
                cin>>number;
				cin>>name;
				cin>>tel;
                strcpy(st[number].name, name);
                strcpy(st[number].tel, tel);
                break;
            case 2:
                cout<<">";
                cin>>name;
                for(i = 0; i < NUM; i++)
                    if(!strcmp(st[i].name, name))
                    {
                        cout<<">"<< i<<st[i].name, st[i].tel;
                        break;
                    }
                if(i == NUM)
                    cout<<"找不到符合的資料";
                break;
        }
    }while(select != 3);

    system("pause");
    return 0;
}
