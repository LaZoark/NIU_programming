#include<iostream>
#include<cstdlib>
using namespace std;

//各陣列函數原型的宣告
void print_arr(int arr[][5],int,int);
int main()
{	
	//宣告並初始化二維成績陣列
	int score_arr[][5]={{78,69,83,90,75},{11,22,33,44,55}};
	print_arr(score_arr,2,5);
    
    system("pause");	
 	return 0;	
}

//輸出二維陣列各元素的函數
void print_arr(int arr[][5],int r,int c)
{	//第一維可省略,其它維數的註標都必須清楚定義長度 
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);
       	printf("\n");
	}
}
