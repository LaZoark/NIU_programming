#include <iostream>
#include <cstdlib>
using namespace std;

struct member	// 定義全域的結構member 
{
 char name[10];
 int salary;
 char position[10];
 };

void max(struct member &,struct member &);   // max()的原型宣告 

int main()
{
    struct member m1,m2;//宣告結構變數m1,m2 
    cout<<"請輸入第一位員工的姓名 薪水 職位"<<endl; 
    cin>>m1.name>>m1.salary>>m1.position;
    cout<<"請輸入第二位員工的姓名 薪水 職位"<<endl; 
    cin>>m2.name>>m2.salary>>m2.position;
    max(m1,m2);		//呼叫max()函數 
    cout<<"----------------------------------------"<<endl;
    cout<<"主管是="<<m1.name<<"主管的薪水="<<m1.salary<<"主管的職位="<<m1.position<<endl;
    cout<<"員工是="<<m2.name<<"員工的薪水="<<m2.salary<<"員工的職位="<<m2.position<<endl;
    
    system("pause");
    return 0;
}

void max(struct member &p1,struct member &p2)
{
    struct member tmp;  
    if(p1.salary<p2.salary)
    { 
      tmp=p1;
      p1=p2;
      p2=tmp;// 找出p1或p2哪一位薪水高 
     }
}
