#include <iostream>
#include <cstdlib>
using namespace std;

void setX20(void);  //砞﹚办跑计 20 
void setX30(void);  //砞﹚办跑计 30 
int x=10;// x 办跑计 

int main()
{
    
    cout<<"x = "<<x<<endl;
    setX20();
    cout<<"x = "<<x<<endl;
    setX30();
    cout<<"x = "<<x<<endl;
    
    system("pause");
    return 0;
}
void setX20(void)
{
    x = 20;
}

void setX30(void)
{
    x = 30;
}
