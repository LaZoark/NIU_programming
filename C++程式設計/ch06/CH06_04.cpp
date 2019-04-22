#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num = 10;
    int *ptr1 = &num;//ptr指向num變數位址 
    int **ptr2 = &ptr1;//ptr2是指向ptr1的指標 

    
    cout<<"------------------------------------------------------"<<endl;
    cout<<"num="<<num<<" &num="<<&num<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"&ptr1="<<&ptr1<<" ptr1="<<ptr1<<" *ptr1= "<<*ptr1<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"&ptr2="<<&ptr2<<" ptr2="<<ptr2<<" *ptr2="<<*ptr2<<" **ptr2="<<**ptr2<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    system("pause");
    return 0;
}
