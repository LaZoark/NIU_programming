#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[4][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12} };//宣告二維陣列 arr 
    int i, j;

    for (i = 0; i < 4; i++ )
        for ( j = 0; j < 3; j++ )
        {
            cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<'\t';//列印arr[i][j]內容 
            cout<<"*(arr+"<<i<<"+"<<j<<")= "<<*(arr+i)+j<<'\t';//列印arr[i][j]的位址 
            cout<<"*(*(arr+"<<i<<")+"<<j<<") ="<<*(*(arr+i)+j)<<endl;//列印arr[i][j]的元素值 
        }

    system("pause");
    return 0;
}
