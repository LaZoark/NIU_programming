#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char arr2[50];
    int i,sum;
    cout << "請輸入字串：";
    cin >> arr2;     //取得使用者輸入的字串
     for (i=0;i<50;i++)
      {
            sum=i;      //紀錄空字元前一個字元的索引
      }
      //----------------------------
       for (i=sum;i>=0;i--)
 //將使用者輸入字串反向輸出
     {		cout << arr2[i];
   	 }
        cout << endl;

        system("pause");
        return 0;
     }
