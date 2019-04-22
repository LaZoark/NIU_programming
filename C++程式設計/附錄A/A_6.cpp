#include<iostream>
#include<cstdlib> //引入亂數函數的標頭檔
using namespace std;

int main()
{	
	int i;
	cout<<"===rand()亂數函數==="<<endl;
	cout<<"產生的亂數:"<<endl;
	for(i=0; i<5; i++)
	{		
  		cout<<rand()<<"  ";
	}
	cout<<endl;
    system("pause");
 	return 0;
}
