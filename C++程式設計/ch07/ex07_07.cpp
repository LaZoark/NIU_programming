#include <iostream>  
#include <cstdlib>  

using namespace std;

int Common_Divisor(); //ㄧ计 

int main()  
{  
    int Min;  
    Min=Common_Divisor(); //ㄧ计㊣ 
    cout << "程そ计" << Min << endl;  
    
    system("pause");
    return 0;
 }  
int Common_Divisor()  
 {  
   int Num1,Num2,Temp;  
   cout << "叫块ㄢ计" << endl;  
   cout << "计 1";  
   cin >> Num1; 
   cout << "计 2";  
   cin >> Num2;  
   cout << Num1 << " の " << Num2;  
   while (Num2 != 0)  //ノ劣锣埃猭璸衡程そ计
   	{  
     Temp=Num1 % Num2;  
   	 Num1 = Num2;  
	 Num2 = Temp;  
   	}  
    
    return (Num1); 
  }
