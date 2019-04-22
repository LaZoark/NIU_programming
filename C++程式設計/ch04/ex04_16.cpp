#include <iostream>  
#include <cstdlib>

using namespace std;
                     
int main()
{
     cout<<"计1~70丁5计籔7计ぃ5籔7そ计:"<<endl;

	 for (int count=1; count <= 70; count++)			  
	 {
		 if ( ((count % 5) == 0) && ((count % 7) == 0))    
			 continue;  //璝琌5籔7そ计,玥膥尿糷                                  
		 else if ( (count % 5) == 0 )                       
			 cout<<count<<' ';  //5计                        
		 else if ( (count % 7) == 0)                   
			 cout<<count<<' '; //7计                   
	 }
	cout<<endl;
	
	system("pause");
    return 0;                                      
}
