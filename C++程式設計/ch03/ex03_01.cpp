#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int A,B,C;
	A=5,B=8,C=10;         // 設定變數初始值
 	cout << "計算前：" << endl<<"A="
		 << A<<",B="<<B<<",C="
         <<C<<endl;
	cout << endl;

	A=B++*(C-A)/(B-A); // 依照其預設的優先順序來進行計算

    cout <<"執行A=B++*(C-A)/(B-A)後："<<endl;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C<<endl;
    
    system("pause");
    return 0;
}
