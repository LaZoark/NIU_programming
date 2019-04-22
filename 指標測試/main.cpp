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
    cout<<"a=  "<<a<<setw(40)<<"&a=v; 這個&是(參照運算子)"<<endl;
    cout<<"&a= "<<&a<<setw(40)<<"這個&是用來取址的(取址運算子)\n"<<endl;
    int n=19;
    add9(v,n);
    cout<<"add9(v,n)之後"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"n=  "<<n<<endl;
    cout<<endl;
    add9(a,n);
    cout<<"add9(a,n)之後"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"n=  "<<n<<"\n由於 add9(int &i,int j) 的j不是&j(call by reference) 所以不會被改變"<< endl;
    cout<<endl;
    a=a+5;
    cout<<"a=a+5\n"<<endl;
    cout<<"v=  "<<v<<endl;
    cout<<"a=  "<<a<<endl;
    cout<<"\n由此可知「參照reference」等同於是變數的「別名」、「暱稱」\n"<<endl;

    int c[5];
    int *pc=&c[1];
    cout<<sizeof(&pc)<<endl;
    cout<<sizeof(&c)<<endl;

}
