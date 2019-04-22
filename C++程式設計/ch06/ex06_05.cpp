#include <iostream>                 
#include <cstdlib>  

using namespace std;             

int main()
{
    int A[3][3]={{ 1, 2, 3}, //定義二維整數陣列 A[3][3]，並指定初始值*
                { 4, 5, 6},
                { 7, 8, 9}};
    int B[3][3]={{ 11, 12, 13},        //定義二維整數陣列 B[3][3]，並指定初始值
                { 14, 15, 16},
                { 17, 18, 19}};
    int C[3][3];               //定義二維整數陣列 C[3][3]

    int *pA=&A[0][0];         //指標變數 *pA 指向 A 陣列起始位址
    int *pB=&B[0][0];         //指標變數 *pB 指向 B 陣列起始位址
    int *pC=&C[0][0];         //指標變數 *pC 指向 C 陣列起始位址

    int i, j;

    for ( i=0; i < 3; i++)    //使用 for迴圈進行矩陣相加與指標運算存取陣列中各元素值
       for ( j=0; j < 3; j++)
          *(pC+i*3+j)=*(pA+i*3+j)+*(pB+i*3+j); 

    cout<<"A 矩陣的內容:"<<endl;
    for ( i=0; i < 3; i++)          
    {
       for ( j=0; j < 3; j++)
        cout<<*(pA+i*3+j)<<'\t';//使用指標變數運算讀取 A 陣列內各元素
        cout<<endl; 
    }

    cout<<"B 矩陣的內容:"<<endl;
    for ( i=0; i < 3; i++)                      
    {
       for ( j=0; j < 3; j++)
        cout<<*(pB+i*3+j)<<'\t';//使用指標變數運算讀取 B 陣列內各元素
        cout<<endl;
    }

    cout<<"C 矩陣的內容:"<<endl;
    for ( i=0; i < 3; i++)           
    {
       for ( j=0; j < 3; j++)
          cout<<*(pC+i*3+j)<<'\t';//使用指標變數運算讀取 C 陣列內各元素
          cout<<endl;
    }
    system("pause");
    return 0;
}
