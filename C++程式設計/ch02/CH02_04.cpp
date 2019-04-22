#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{	
    char ch=042;//雙引號的八進位ASCII碼
    //印出字元和它的ASCII碼
    
    cout<<"列印出八進位042所代表的字元符號="<<ch<<endl;
    cout<<"雙引號的應用->"<<ch<<"榮欽科技"<<ch<<endl; //雙引號的應用	
    cout<<'\a';//發出嗶一聲 
    
    system("pause");
    return 0;	
 }
