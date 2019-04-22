#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[] = { 10, 20, 30, 40, 50};//宣告陣列arr及其元素
    int i;

    for ( i = 0; i < 5; i++ )
        cout<<"arr["<<i<<"] = "<<arr[i]<<"  *(arr+"<< i<<")="<<*(arr+i)<<" *(&arr["<<i<<"])="<<*(&arr[i])<<endl;
    //列印陣列與指標常數的替代運算
    system("pause");
    return 0;
}
