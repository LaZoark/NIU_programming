#include <iostream>
//	1.輸入1堆整數，進行排序後印出
//  2.輸入1堆字串，進行排序後印出
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
