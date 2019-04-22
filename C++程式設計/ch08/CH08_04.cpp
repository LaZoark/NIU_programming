#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])//㏑ま计肚患 
{
    int i;
    if( argc == 1 )//Τ祘Α嘿,⊿Τㄤウ把计 
        cout<<"ゼ﹚把计"<<endl;
    else
    {
        cout<<"┮块把计"<<endl;
        for( i = 0; i < argc; i++ )
            cout<<argv[i]<<endl;// argv皚ず甧 
    }
    system("pause");
    return 0;
}
