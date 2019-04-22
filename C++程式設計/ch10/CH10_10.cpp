#include <iostream>
#include <cstdlib>
using namespace std;
int encode(int);    // 加密函數 
int decode(int);    // 解密函數 
int main(){ 
    int pwd; cout<<"請輸入密碼："; 
    cin>>pwd; pwd = encode(pwd); 
    cout<<"加密後："<<pwd<<endl; 
    pwd = decode(pwd); 
    cout<<"解密後："<<pwd<<endl;  
    
    system("pause"); 
    return 0;	}// 引  數：未加密的密碼 
    // 傳回值：加密後的密碼 

int encode(int pwd) 
{  int i;  union{	     
       int num;      
       char c[sizeof(int)];     
        } u1;      
 u1.num = pwd;      
 for(i = 0; i< sizeof(int); i++)      
 u1.c[i] += 32;      
 return u1.num;      } 
 
 int decode(int pwd) 	
 {        
   int i;    
   union{	        
                  int num;        
                  char c[sizeof(int)];    
   } u1;    
   u1.num = pwd;    
   for(i = 0; i< sizeof(int); i++)        
   u1.c[i] -= 32;    
 return u1.num; }
