#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int i,a,n,sum=1;
   cout<<"¿é¤Ja="; 
   cin>>a;
   cout<<"¿é¤Jn="; 
   cin>>n;
   for(i=1;i<=n;i++)
   sum*=a;
   cout<< sum;
    
   system("pause");
   return 0;
   }

