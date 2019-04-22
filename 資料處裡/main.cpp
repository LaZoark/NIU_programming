#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{
	fstream create("Kiki.txt",ios::out);
    string str1("·R©p"),BackGroung(" <3 ");
    int n,a,i,b,c=8;
	if(create.is_open())
	{
		create<<"Kiki is my beloved and my only cuteeeee. "<<endl;
        n=sizeof(str1);
        c*=2;
        for(a=1; a<c; a++)
        {
            for(b=1; b<c; b++)
                if(a==b||c==a+b)
                    create<<str1;
                else
                    for(i=0; i<n/c; i++)
                        create<<BackGroung;
            create<<endl;
        }
		cout<<"nicccce"<<endl;
		FreeConsole();
	}
	else
	{
		cout<<"the file isn't open propobly"<<endl;
	}
	create.close();
}
