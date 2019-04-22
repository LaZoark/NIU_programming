#include <iostream>
#include <cstdlib> 
using namespace std;

int square(int);  // ㄧ计 
int cubic(int);  // ㄧ计 

int main()
{
    int (*ptr)(int); //ㄧ计夹 
    int x;
    
    cout<<"叫块俱计:案计玥璸衡キよ,计玥璸衡ミよ:"; 
    cin>>x;
    
    if(x%2==0)
     ptr=square;//案计玥square()ㄧ计  
    else
     ptr=cubic; //计玥cubic()ㄧ计  
    
     cout<<ptr(x)<<endl;

    system("pause");
    return 0;
}

int square(int a)
{
    return a*a;
}

int cubic(int a)
{
    return a*a*a;
}

