#include <iostream>
#include <iomanip>
using namespace std;
void add9(int &i,int j)
{
    i=i+9;
    j=j+9;
}
int main()
{
    int v=4,&a=v;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<setw(40)<<"&a=v; �o��&�O(�ѷӹB��l)"<<endl;
    cout<<"&a= "<<&a<<setw(40)<<"�o��&�O�ΨӨ��}��(���}�B��l)\n"<<endl;
    int n=19;
    add9(v,n);
    cout<<"add9(v,n)����"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"n=  "<<n<<endl;
    cout<<endl;
    add9(a,n);
    cout<<"add9(a,n)����"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"n=  "<<n<<"\n�ѩ� add9(int &i,int j) ��j���O&j(call by reference) �ҥH���|�Q����"<< endl;
    cout<<endl;
    a=a+5;
    cout<<"a=a+5\n"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"\n�Ѧ��i���u�ѷ�reference�v���P��O�ܼƪ��u�O�W�v�B�u�ʺ١v\n"<<endl;

    int c[5];
    int *pc=&c[1];
    cout<<sizeof(&pc)<<endl;
    cout<<sizeof(&c)<<endl;

}
