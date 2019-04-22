#include<iostream>
#include<cstdlib>
using namespace std;
//main()中加入引數
int main(int argc, char *argv[])
{
	int i;
	double sum=0;
	double avg=0;
	//當執行指令時沒有輸入字串時
	if(argc==1)
	{
  		cout<<"請在指令後方輸入成績!!!"<<endl;
	}
	
    else 
    {
    cout<<"各科成績: "; 
    for(i=1; i<argc; i++)
    {
    	//輸出每一個成績字串
        cout<<argv[i]<<" ";
    	//將成績字串轉換成整數型態
   		sum+=atoi(argv[i]);
	}
	cout<<endl<<"-------------------------------------------"<<endl;
	//輸出成績總和和平均
 	cout<<"分數的總和="<<sum<<endl;
	cout<<"分數平均="<<sum/(argc-1)<<endl;// argc-1 必須減去程式本身名稱 
     }
     
 	 system("pause");
     return 0;
}
