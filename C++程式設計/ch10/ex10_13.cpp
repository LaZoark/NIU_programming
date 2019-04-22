#include <iostream>
#include <cstdlib> 
using namespace std;

 int main()
{
     struct member
     {
         char name[20];
         int age;
     }m1[5];
 
     cout<<"結構陣列所佔大小"<<sizeof(m1)<<"位元"<<endl;
     cout<<"結構陣列單一元素所佔大小"<<sizeof(m1[1])<<"位元"<<endl;
     cout<<"成員name大小"<<sizeof(m1[1].name)<<"位元"<<endl;
     cout<<"成員age大小"<<sizeof(m1[1].age)<<"位元"<<endl;
 
     system("pause");
     return 0;
 }
