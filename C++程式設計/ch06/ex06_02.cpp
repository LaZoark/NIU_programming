#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num = 10;
    int *ptr1 = &num;   //ptr1是指向num的指標 
    int **ptr2 = &ptr1;//ptr2是指向ptr1的指標 
    int ***ptr3 = &ptr2;//ptr3是指向ptr2的指標 
    
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"num="<<num<<" &num="<<&num<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"&ptr1="<<&ptr1<<" ptr1="<<ptr1<<" *ptr1="<<*ptr1<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"&ptr2="<<&ptr2<<" ptr2="<<ptr2<<" *ptr2="<<*ptr2<<" **ptr2="<<**ptr2<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"&ptr3="<<&ptr3<<" ptr3="<<ptr3<<" *ptr3="<<*ptr3<<" **ptr3="<<**ptr3<<" ***ptr3="<<***ptr3<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;

    system("pause");
    return 0;
}
