#include <iostream>
#define N 10
#define M 10
using namespace std;
/*struct mm
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
}*/
string f(string str)
{
    for(int i=0; i<str.size(); i++)
        if(str[i]<='z'&&str[i]>='a')
            str[i]=str[i]-32;
    return str;
}
int main()
{
    string str="abcDeFg123";
    cout<<str<<endl;
    cout<<f(str)<<endl;
}
