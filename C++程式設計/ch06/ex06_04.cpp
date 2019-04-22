#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *ptr;
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int i;

    ptr = *arr;
    for(i = 0; i < 9; i++)
        cout<<*(ptr+i);
    
    system("pause");
    return 0;
}
