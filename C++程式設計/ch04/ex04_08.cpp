//簡易的計算機
 #include <iostream>
 #include <cstdlib>
 
 using namespace std;
 
 int main()
 {
     float a,b;
     char op_key;
     cout<<"請輸入兩個數字(以空白鍵區隔):";
     cin>>a>>b;
     cout<<"請輸入+,-,*,/鍵：";
     cin>>op_key;   //輸入字元並存入變數op_key
     
     switch(op_key)
    {
     case '+':      //如果op_key等於'+'
     cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a+b;
     break;      //跳出switch
     case '-':  //如果op_key等於'-'
     cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a-b;
     break;   //跳出switch
     case '*':  //如果op_key等於'*'
     cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a*b;
     break;           //跳出switch
     case '/':      //如果op_key等於'/'
     cout<<endl<<a<<" "<<op_key<<" "<<b<<"="<<a/b;
     break;                   //跳出switch
     default:       //如果op_key不等於 + - * / 任何一個
     cout<<"運算式有誤\n";     
  	}
  	
    system("pause");
    return 0;	
  }
