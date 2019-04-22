#include <iostream> 
#include <cstdlib>                             
using namespace std;
                 
int main()
{
	 int Num_1, Num_2, Tmp_Num;            

	 cout<<"―程そ计(g.c.d):"<<endl;
	 cout<<"块ㄢタ俱计:";
	 cin>>Num_1;
     cin>>Num_2;                  

	 if (Num_1 < Num_2)                   
	 {                                     
		 Tmp_Num=Num_1;                           
		 Num_1=Num_2;
		 Num_2=Tmp_Num;
	 }

	 while (Num_2 != 0)                
	 {                                      
	 	Tmp_Num=Num_1 % Num_2;            
		Num_1=Num_2;                              
		Num_2=Tmp_Num;
	 }	  
     cout<<"程そ计(g.c.d):"<<Num_1<<endl; 
       
      system("pause");
      return 0;                    
}
