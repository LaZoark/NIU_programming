#include <iostream>
#include <cstdlib>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159 //定義巨集常數 

#define R_AREA(r) (r)*(r)*PI //定義巨集函數 

int main()
{
    float r;
    cout<<"輸入圓的半徑值:"; 
    cin>>r;
    cout<<R_AREA(r)<<endl;
    
    system("pause");
    return 0;
}
