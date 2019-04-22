#include <iostream>
#include <string>
//  輸入1堆字串，進行排序後印出
using namespace std;
int main()
{
    int str[5],temp;
    for(int i=0; i<5; i++)
        cin>>str[i];
    for(int a=0; a<100; a++)
        for(int i=1; i<5; i++)
            if(str[i-1]>str[i])
            {
                temp=str[i-1];
                str[i-1]=str[i];
                str[i]=temp;
            }
    for(int x=0; x<5; x++)
        cout<<"順序"<<"["<<x+1<<"]"<<str[x]<<endl;
}
