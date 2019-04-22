#include <iostream>
using namespace std;
int max(int b[],int n),min(int b[],int n);
int main()
{
    int a[8];
    for(int i=0; i<8; i++)
        cin>>a[i];
    cout<<"最大 "<<max(a,8)<<endl;
    cout<<"最小 "<<min(a,8)<<endl;
}
int max(int b[],int n)
{
    int max=b[0];
    for(int i=0; i<n; i++)
        if(b[i]>max)
            max=b[i];
    return max;
}
int min(int b[],int n)
{
    int min=b[0];
    for(int i=0; i<n; i++)
        if(b[i]<min)
            min=b[i];
    return min;
}
