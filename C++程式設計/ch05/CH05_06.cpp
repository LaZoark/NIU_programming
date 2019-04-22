#include<iostream>
#include<cstdlib> 
#include<string>//引入字串表頭檔

using namespace std;

int main()
{
    char ch[]=", "; 
    string firstname;//宣告字串類別 
    string lastname;//宣告字串類別 
    string input1("請輸入姓氏:");
    string input2="請輸入名字:";
    
    cout<<input1;
    cin>>lastname;//輸入字串 
    cout<<input2;
    cin>>firstname;//輸入字串 
    
    string fullname=firstname+ch+lastname;//以運算子作字串的串接 
	cout<<"您的全名為:"<<fullname<<endl;
    
    system("pause");
    return 0;	
 
 }
