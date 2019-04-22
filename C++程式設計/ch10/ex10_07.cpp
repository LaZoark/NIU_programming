#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    struct
    {
        char h;
        char l;
    }word[9];
    int i, j;

    for(i = 0, j = 0xA440; i < 9; i++, j++)
    {
        word[i].h = j/256;
        word[i].l = j%256;
    }

    for(i = 0; i < 9; i++)
        cout<<word[i].h<<word[i].l;
    cout<<endl;
    
    system("pause");
    return 0;
}
