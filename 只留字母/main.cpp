#include <iostream>
#include <cctype>
//輸入一字串，呼叫副程式能將非英文字部分去除之後回傳回來
using namespace std;
char filter(char ch)
{
    if(isalpha(ch))
        return ch;
}
int main()
{
    char ch;
    while(cin>>ch)
        cout<<filter(ch);
}
