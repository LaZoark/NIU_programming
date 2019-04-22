#include <iostream>
#define N 10
#define M 10
using namespace std;
struct mm
{
    char nn[];
    int zz;
} w[N];
void f(mm w[])
{
    for(int s=0; s<N; s++)
    {
        for(int se=0; se<M; se++)
            cin>>w[s].nn[se];
        cin>>w[s].zz;
    }
}
int main()
{
    //mm w[];
    f(w);
}
