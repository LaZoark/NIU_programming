#include <iostream>

using namespace std;

int main()
 {
    int a[]={57,34,25,63,44,2,56,78};
    int i,min=a[0],max=a[0];
    int length=sizeof(a)/sizeof(int);
    for(i=0;i<length;i++)
    {
        cout<<a[i]<<" "<<'\n';
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    cout<<"Max = "<<max<<endl;
    cout<<"min = "<<min<<endl;
}
