#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    while(1)
    {
        int n,a[64],i;
        cout <<endl;
        cout << "請輸入一個正整數:";
        cin >>n;
        cout << "以二進位表示為:";
        i=0; //設i=0
        while(n>0)
        {
            a[i]=n%2; //存的時候利用i先存到陣列中
            n=n/2;
            i++;
        }
        while(i>0) //再設一個迴圈去倒著列印結果
        {
            cout<<a[i-1]; // i-1是因為上一個迴圈結束後
// 會超過陣列最後的位置
            i--;
        }
    }
}
