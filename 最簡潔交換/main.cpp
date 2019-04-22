#include <iostream>
#define SWITCH "a=a+b-(b=a)"
using namespace std;
void Swap(int &a,int &b)
{
    a=a+b-(b=a);
}
void P_Swap(int *a,int *b)
{
    *a=*a+*b-(*b=*a);
}
int main()
{
    int i,j;
    cout<<"½Ð¿é¤Ji j­È"<<endl;
    cin>>i>>j;
    cout<<"i= "<<i<<"\tj= "<<j<<endl;
    P_Swap(&i,&j);      //a=a+b-(b=a);

    cout<<SWITCH<<"\ni= "<<i<<"\tj= "<<j<<endl;
    Swap(i,j);
    cout<<SWITCH<<"\ni= "<<i<<"\tj= "<<j<<endl;
}
