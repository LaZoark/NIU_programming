#include <iostream>

using namespace std;
void k(int z[])
{
    for(int g=0; g<sizeof(z)/sizeof(int); g++)
    {
        z[g]+=1;

    }
    for(int g=0; g<6; g++)
        cout<<z[g]<<endl;
}
int main()
{
    int z[]= {3,6,8,3,6,99};
    k(z);
}
