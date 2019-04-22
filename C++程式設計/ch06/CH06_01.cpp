#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num1 = 10;
    char ch1[2] = "A";//宣告變數num1、ch1

    cout<<"變數名稱 變數值 記憶體位址"<<endl;
    cout<< "----------------------------"<<endl;
    cout<<"num1 "<<"\t "<<num1<<'\t'<<&num1<<endl;
    cout<<"ch1  "<<"\t "<<ch1<<'\t'<<&ch1<<endl;
    //利用&運算子列印變數num1、ch1的數值與位址 
    
    system("pause");
    return 0;
}
