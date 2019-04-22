#include<iostream>
#include<cstdlib>
using namespace std;

void calsum(int end1)
{
	int i;
	int sum=0;
	for(i=1;i<=end1;i++)
		sum+=i;
	cout << "1+2+3+...+" << end1 << "=" << sum << endl;
}
int main()
{
	int j;
	cout << "請輸入要加到多少：";
	cin >> j;
	calsum(j);
	
	system("pause");
	return 0;
}
