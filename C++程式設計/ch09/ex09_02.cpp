#include <iostream>
#include <cstdlib>
using namespace std;
#define TRUE 1

int main()
{
    #ifdef TRUE //安 TRUEゼ﹚竡     
    cout<<"TRUE﹚竡盽计1"<<endl;
    #endif
    #ifndef FALSE//安 FALSEゼ﹚竡     
    cout<<"FALSEゼ﹚竡﹚竡ㄤ单盽计0"<<endl;    
    #define FALSE 0 
    #endif    
    cout<<"TRUE ="<<TRUE<<"  FALSE ="<<FALSE<<endl;    
    system("pause");    
    return 0;
}
