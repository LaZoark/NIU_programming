#include <iostream>

extern int x;//必須在此加上extern修飼詞 

void foo(void)
{
    x = 1;
}
