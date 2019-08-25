#include <iostream>
#include <string>
#include <windows.h>
#include <sstream>
#define _WIN32_IE 0x0500
using namespace std;
int main()
{
    string str="this is a final test";
    sstring ss;
    string path,fpath[MAX_PATH];
    int t=0;
    path="C:\\users\\la zoark\\desktop";

    for(int i=0; i<path.size(); i++)//defined in windows.h with 260
    {
        if(path[i]=='\\')
        {
            t++;
            fpath[i]=path[i];
            fpath[i]="\\\\";
            cout<<t<<endl;
            cout<<fpath[i]<<endl;
        }
        else
        {
            fpath[i]=path[i];
        }

    }
    //fpath.resize(path.size()+t);
    for(int i=0;i<path.size();i++)
    cout<<fpath[i];
}
