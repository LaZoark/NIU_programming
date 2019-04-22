#include<iostream>
#include<cstdlib>
//引用時間函數的表頭檔
#include<ctime>
int mul(int,int);
int main()
{	
	register int i,j;//宣告暫存器變數  
	float sum;
	time_t start_time, end_time;//長整數時間資料型態 

    //測試迴圈開始與結束時間
  	printf("迴圈開始\n");
    start_time=time(NULL); 
    //記錄開始時間 
    for(i=1; i<=10000;i++)
    for(j=1;j<100000;j++)
	sum=sum+mul(i,j);//迴圈計算過程 
	
    end_time=time(NULL);//time函數會回應前目前的時間到秒數 
 	printf("迴圈結束\n");
	printf("迴圈的執行時間為%f\n\n",difftime(end_time,start_time));
     //difftime 為時間差函數,可回傳秒數 
     system("pause");
     return 0;
}
int mul(int a,int b)
{
    return a*b;
}
