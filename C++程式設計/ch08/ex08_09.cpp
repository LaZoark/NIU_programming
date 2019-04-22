#include <iostream>
#include <cstdlib>
using namespace std;

int gcd(int,int);
int main()
{

      int m,n;
      int answer;
      cout<<"m=";
      cin>>m;
      cout<<"n=";
      cin>>n;
      answer=gcd(m,n);
      cout<<m<<"及"<<n<<"的最大公因數="<<answer<<endl;
      
      system("pause");
      return 0;
}
int gcd(int m,int n)
{
    if (n==0)
       return(m);
    else
       return(gcd(n,m%n));
}
