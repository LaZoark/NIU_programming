#include <iostream>                          
#include <cstdlib>
using namespace std;

int main()
{
     enum Drink                                  
	 {
		 coffee=25,
		 milk=20,
		 tea=15,
		 water
	 }; //籔﹚竡Drink 羭篈 
     enum Drink c_drink; //﹚竡 Drink 羭篈跑计 corp_drink 

	 c_drink=coffee;                                        //﹚跑计 c_drink  coffee 
	 cout<<"羭篈 coffee ="<<c_drink<<endl ;

	 c_drink=milk;                                          // ﹚跑计 c_drink  milk 
	 cout<<"羭篈 milk ="<<c_drink<<endl;

	 c_drink=water;                                       //﹚跑计 c_drink  water 
	 cout<<"羭篈 water ="<<c_drink<<endl;
     
     system("pause");
     return 0;
}
