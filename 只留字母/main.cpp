#include <iostream>
#include <cctype>
//��J�@�r��A�I�s�Ƶ{����N�D�^��r�����h������^�Ǧ^��
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
