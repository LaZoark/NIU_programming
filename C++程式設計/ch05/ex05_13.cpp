#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int c1, m1 = 0;	
	int number[5] = {5, 9, 3, 4, 7};	
	for (c1 = 0; c1 <= 4; c1++)	
	{
		if (number[c1] > m1)	
			m1 = number[c1];	
	}
	cout << "5, 9, 3, 4, 7 五數的最大值 = " << m1;	
	cout << endl;
	
	system("pause");
	return 0;
}
