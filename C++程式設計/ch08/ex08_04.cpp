#include<iostream>
#include<cstdlib>
using namespace std;

void kgtopound(double);//ㄧ计 
 
int main()
{	
	double kg;
    extern double pound;
	//ノextern箎迭,まノㄧ计よ场跑计  
	cout<<"そょ锣璣絊"<<endl;
	cout<<"-----------------------------------"<<endl;
    cout<<"そょ="<<pound<<"璣絊"<<endl;
    cout<<"-----------------------------------"<<endl;
	cout<<"叫块そょ计:";
 	
    cin>>kg;;
   	kgtopound(kg);
   	
    system("pause");
 	return 0;	
}//ㄧ计场跑计
   double pound=2.204634;
void kgtopound(double kg)
{
     
	cout<<kg<<"そょ"<<"="<<pound*kg<<"璣絊"<<endl;
	// ㄧ计场跑计poundよ,钡ㄏノ *
}


