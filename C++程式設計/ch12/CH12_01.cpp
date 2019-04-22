#include <iostream>
#include <cstdlib>
using namespace std;

//定義一個Baseball的類別
class Baseball
 {
 //定義私用資料及函式成員
private:
char player[20];         //打擊者姓名         
int fires;               //打擊次數
int safes;               //安打次數
//宣告私用的函式成員countsafe的原型用以計算打擊者打擊率
float countsafe(void);
	
//定義公用資函式成員
public:
//宣告公用的函式成員inputplayer的原型用以顯示打擊者資料
void inputplayer();
//宣告公用的函式成員showplayer的原型用以顯示打擊者資料
void showplayer();          
 };
void Baseball:: inputplayer (void)       //類別外實現inputplayer函式成員
{
 cout<<"打擊者：";                     
 cin>>player;                         //輸入打擊者姓名
 cout<<"打擊次數：";
 cin>>fires;                          //輸入打擊次數
 cout<<"安打次數：";
 cin>>safes;	                         //輸入安打次數
 }
void Baseball::showplayer(void)          //類別外實現showplayer函式成員
{
 float fs;
 fs=countsafe();                     //透過countsafe 函式成員計算並傳回打擊率
 cout<<"================================"<<endl;
 cout<<"打擊者："<<player<<endl;     //顯示打擊者姓名
 cout<<"打擊次數："<<fires<<endl;    //顯示打擊次數
 cout<<"安打次數："<<safes<<endl;    //顯示安打次數
 cout<<"打擊率："<<fs<<endl;         //顯示安打率
 }
float Baseball::countsafe()             //類別外實現countsafe函式成員
{
float counts;                           //宣告打擊率變數
	counts=(float(safes) / float(fires));   //計算打擊率 安打次數/打擊次數
    return counts;                          //傳回打擊率
} 
 int  main()
{
   Baseball b[3];         //宣告類別陣列
   int i;
   cout<<"輸入資料"<<endl;
   cout<<"================================"<<endl;

  for (i=0;i<3;i++)
  {
   b[i].inputplayer();
	}

  cout<<"================================"<<endl;
  cout<<"顯示資料"<<endl;
  for (i=0;i<3;i++)
  {
   b[i].showplayer();
  }
  
  system("pause");
  return 0;
  }	
