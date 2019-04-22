#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr1[] = { 10, 20, 30, 40, 50};
    double arr2[] = { 10.0, 20.0, 30.0, 40.0, 50.0 };
    int i;

    cout<<"int陣列                double陣列 "<<endl;
    cout<<"------------------------------------------------------"<<endl;
    for ( i = 0; i < 5; i++ )
    {
        cout<<"arr1+"<<i<<"="<<arr1+i<<"     ";// 列印出arr1+i的位址 
        cout<<"arr2+"<<i<<"="<<arr2+i<<endl;// 列印出arr1+i的位址
    }
    cout<<"------------------------------------------------------"<<endl;
    cout<<"arr1 陣列長度="<<sizeof(arr1)/sizeof(arr1[0])<<endl;
    cout<<"arr2 陣列長度="<<sizeof(arr2)/sizeof(arr2[0])<<endl;
    
    system("pause");
    return 0;
}
