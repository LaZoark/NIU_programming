#include<iostream>
#include<cstdlib>
using namespace std;
//各陣列函數原型的宣告
void print_arr(int arr[],int);//以陣列名稱傳遞 
void swap(int *i, int *j);
void BubbleSort(int *arr, int length);//以指標常數傳遞 

int main()
{	
	//宣告並初始化成績陣列
	int score_arr[]={78,69,83,90,75,54,71,45,67};
	cout<<"成績陣列的元素:"<<endl;
 	//呼叫函數*
    print_arr(score_arr,9);
    cout<<"--------------------------------------"<<endl;
    BubbleSort(score_arr,9);
    cout<<"排序後成績陣列的元素:"<<endl;
	print_arr(score_arr, 9);
	
    system("pause");
 	return 0;	
}
//輸出陣列各元素的函數
void print_arr(int arr[],int size)//以陣列名稱傳遞 
{	
	int i;
	for(i=0; i<size; i++)
	 	cout<<arr[i]<<"  ";
	cout<<endl;
}


void swap(int *i, int *j) //交換兩數的值 
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}
void BubbleSort(int *arr, int length)//以指標常數傳遞,氣泡排序法 
{
    int i, j;
    for ( i = 1; i < length; i++ )
    {
        for ( j = 0; j < length-1 ; j++ )
        {
            if ( arr[j] > arr[j+1] )
                swap(&arr[j], &arr[j+1]);
        }
    }
}


