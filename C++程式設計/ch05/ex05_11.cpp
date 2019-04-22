#include <iostream>
#include <cstdlib>
#include <cstring>	
#include <cctype>//含括此判斷函式檔案 

using namespace std;

int main()
{
	int lower = 0;
	char string[40];
	
	cout<<"請輸入字串:"; 
    cin.getline(string,40);//輸入的字串有40個字元 
	int len = strlen(string);
	for (int i = 0; i <= len; i++)	
		if (islower(string[i]) != 0)//是小寫字元則加1	
			lower++;
	cout <<string<<"字串的小寫字元有 " << lower << "個"<<endl;
	
	system("pause");
	return 0;
}
