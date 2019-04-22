#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char *name[4] = { "Justinian", "Momo", "Becky", "Bush" };// 一維指標陣列 
    char name1[4][10] = { "Justinian", "Momo", "Becky", "Bush" };//二維字串陣列  
    int i;
    cout<<"---------- 一維指標陣列儲存方式 --------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name["<<i<<"] = \""<<name[i]<<"\"\t"<<endl;
        cout<<"所佔位址："<<(int *)name[i]<<endl; //印name[i]出所佔位址   
    }
    cout<<"------------ 二維字串陣列儲存方式--------------"<<endl;
    for ( i = 0; i < 4; i++ )
    {
        cout<<"name1["<<i<<"] = \""<<name1[i]<<"\"\t"<<endl;
         cout<<"所佔位址："<<(int *)name1[i]<<endl; //印name1[i]出所佔位址  
     }    
    system("pause");
    return 0;
}

