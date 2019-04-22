#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int score[8]={ 7,22,36 }; // 宣告長度為8的整數陣列
	int Temp[]={1, 2, 3, 4, 5};
	int i;

	// 利用迴圈列印陣列的元素值
	for (i=0;i<8;i++)
	{
		cout <<"score["<<i<<"]="<<score[i]<<endl;
	}

	cout<<"Temp陣列大小="<<sizeof(Temp)/sizeof(Temp[0])<<endl;//計算元素陣列個數 
	
    system("pause");
	return 0;
	
}
