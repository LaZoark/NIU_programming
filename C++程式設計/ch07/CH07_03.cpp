#include<iostream>
#include<cstdlib>/*ㄧ计*/
using namespace std;
void fun(int, int);
 

 int main()
    {		
    int a,b; 	
    a=10;    
    b=15;    
    //块祘Αいa,b
    cout<<"ㄧ计い:a="<<a<<" b="<<b<<endl;	
    cout<<"a:"<<&a<<" b:"<<&b<<endl;	
    //㊣ㄧ计   
    fun(a,b);    
    cout<<"-----------------------------------------"<<endl; 
  	//块㊣ㄧ计a,b
      cout<<"㊣ㄧ计:a="<<a<<" b="<<b<<endl;  
      cout<<"a:"<<&a<<" b:"<<&b<<endl;		
      
      system("pause"); 	
      return 0;	
      }
   
   void fun(int a, int b)
   { 	
       cout<<"-----------------------------------------"<<endl; 
       cout<<"funㄧ计ず:a="<<a<<" b="<<b<<endl;  
       cout<<"a:"<<&a<<" b:"<<&b<<endl;   	
       a=20;	
       b=30;//砞ㄧ计ずa,b	
       cout<<"ㄧ计ず跑计:a="<<a<<" b="<<b<<endl; 
   }
