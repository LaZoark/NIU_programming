#include<iostream>
#include<cstdlib>//引入亂數函式的表頭檔
#include<ctime>//引入時間函式的表頭檔 
using namespace std;

int main()
{	
	int i;
	long int seed;
	cout<<"===srand()亂數函數==="<<endl;
	cout<<"產生的亂數:"<<endl;
	
    seed=time(NULL);//以系統時間當作亂數種子
	srand(seed);
	
    for(i=0; i<5; i++)
	{		
  		cout<<rand()<<" ";
	}
	cout<<endl;
	
    system("pause");
 	return 0;
}
