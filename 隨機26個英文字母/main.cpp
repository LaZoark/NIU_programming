#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int i,j,k;
    char ch[26],temp,a;
    for(a=65; a<=90; a++)
    {
        ch[a-65]=a;
        cout<<a<<'\0';
    }
    cout<<endl;
    for(int x=1; x<100; x++)
    {
        for(k=0; k<x; k++)
        {
            i=rand()%26;
            j=rand()%26;
            temp=ch[i];             // 用原本就已固定好的陣列(資料庫)
            ch[i]=ch[j];            // 來做相互交換。如此不但不會重複
            ch[j]=temp;             // 而且就算換不乾淨，也不容易察覺
        }
        for(int x=0; x<26; x++)
            cout<<ch[x]<<'\0';
    cout<<"\n↑換了"<<x<<"次↑\n"<<endl;
    }
}
