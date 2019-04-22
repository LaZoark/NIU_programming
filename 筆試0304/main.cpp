#include <iostream>
#define N 10
using namespace std;

void fk(int &p)
{
    p=p+1;
}
void fx(float x[])  //不應該是&x[N]
{
    for(int a=0;a<N;a++)
        x[a]+=1;
}
int main()
{
    int k=N;
    float x[N]={N};//{10,10,10,10,10,10,10,10,10,10};

    fk(k);
    fx(x);
    cout<<k<<endl;
    for(int i=0;i<N;i++)
        cout<<"x["<<i<<"] "<<x[i]<<endl;
}
