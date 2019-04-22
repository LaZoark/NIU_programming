#include <iostream>
#include <cstdlib>
#include <conio.h>
#define SIZE 16
using namespace std;

int main()
{
    string str[]={"A","ABC","12345678","\5"};
    char ch[]={'A','g','\5'};
    char word[][SIZE]={"A","ABC","12345","\5",'\5'};

    for(int a=0;a<5;a++)
    cout<<"sizeof(str["<<a<<"])大小: "<<sizeof(str[a])<<endl;
    cout<<endl;
    for(int a=0;a<3;a++)
    cout<<"sizeof(ch["<<a<<"])大小: "<<sizeof(ch[a])<<endl;
    cout<<endl;
      for(int a=0;a<3;a++)
    cout<<"sizeof(ch)大小: "<<sizeof(ch)<<endl;
    cout<<endl;
    for(int a=0;a<5;a++)
    cout<<"sizeof(word["<<a<<"]["<<SIZE<<"])大小: "<<sizeof(word[a][SIZE])<<endl;
    cout<<endl;
    for(int a=0;a<5;a++)
    cout<<"sizeof(word)大小: "<<sizeof(word)<<endl;
    cout<<endl;
    for(int a=0;a<5;a++)
        cout<<"word["<<a<<"]["<<SIZE-1<<"]: "<<word[a][SIZE-1]<<endl;
    cout<<endl;
    for(int a=0;a<5;a++)
    {
        for(int i=0;i<SIZE;i++)
        cout<<"word["<<a<<"]["<<i<<"]: "<<word[a][i]<<endl;
        cout<<endl;
    }
    cout<<"\n\n"<<endl;
    double op=9888;
    double *pt=&op;
    cout<<"op= "<<op<<endl;
    cout<<&op<<'\n'<<sizeof(&op)<<endl;
    cout<<sizeof(*pt);
}
