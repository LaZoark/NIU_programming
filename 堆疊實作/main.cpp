#include <iostream>
//	1.��J1���ơA�i��Ƨǫ�L�X
//  2.��J1��r��A�i��Ƨǫ�L�X
using namespace std;
int main()
{
    int i=0,temp;
    char ch,a[i];
    while(ch!='\n')
    {
        cin.get(ch);
        a[i]=ch;
        i++;
    }
    for(int g=0; g<i; g++)
        for(int j=0; j<i-g-2; j++)
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(int k=0; k<i-1; k++)
        cout<<"a["<<k<<"] ="<<a[k]<<endl;
}
