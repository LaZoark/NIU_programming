#include <iostream>                                  // 珹夹繷郎 <iostream.h>
#include <cstdlib>  
using namespace std;

void Int_swap(int *, int *);                           // Int_swap() ㄧ计 

int main()                                        // 祘Αパ秨﹍
{
     int Num_1=10, Num_2=20;                           // ﹚竡俱计跑计 Num_1Num_2

     cout << "㊣ Int_swap ㄧ计玡: "                  // 陪ボ癟
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
     
	 Int_swap(&Num_1, &Num_2);                         // 肚㊣ㄧ计 Int_swap()

     cout << "㊣ Int_swap ㄧ计: "                  // 陪ボ癟
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
	 
	 system("pause");
	 return 0;
}

void Int_swap(int *pN_1, int *pN_2)                    // ﹚竡 Int_swap ㄧ计
{
	int N_tmp;                                         // ﹚竡俱计跑计 N_tmp

	N_tmp=*pN_2;
	*pN_2=*pN_1;
	*pN_1=N_tmp;

    cout << "   Int_swap() ㄧ计ず: "                   // 陪ボ癟
		 << "*pN_1= " << *pN_1 << " *pN_2= " << *pN_2;
	cout << endl;
}
