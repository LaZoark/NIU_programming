#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	int i;//用作計算字串的長度
	char str[30];
	char str1[30];
	cout<<"請輸入字串:";
	//輸入字串
	cin>>str;
	cout<<"輸入的字串為:"<<str<<endl;
	//利用for迴圈計算i,並將輸入的字串複製到str1字串
	for(i=0; str[i]!='\0';i++)
	{
 		str1[i]=str[i];//逐一字元拷貝 
    }
    str1[i]='\0';//在計算字串長度時，並不包含字串結尾字元'\0' 
 	cout<<"此字串有"<<i<<"個字元"<<endl;
 	cout<<"原字串str="<<str<<endl;
	cout<<"複製後字串str1="<<str1<<endl;
 	
    system("pause");
    return 0;
}
