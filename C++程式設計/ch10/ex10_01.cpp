#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    struct foo
    {
        int a;
        int b;
    } f1; //單純用來說明的範例 

    struct foo *f2 = &f1;//f2 指向 f1結構變數 
    int i;

    f2->a = 1;
    f2->b = 10;

    f2->a++;    //等於 (f2->a)++ 
    cout<<"f2->a="<<f2->a<<endl;
    --f2->b;    //等於 i = --(f2->b) 
    cout<<"f2->b="<<f2->b<<endl;
    
    system("pause");
    return 0;
}
