#include <iostream>
#include <fstream>
using namespace std;

ifstream target_read;
ofstream target_write;
void Ui();
void read(string fname)
{

}

int main()
{
    int sel=0;

    while(sel>=0)
    {
        Ui();
        cin>>sel;
        switch(sel)
        {
        case 1:
            cout<<9;
            break;
        case 2:
            cout<<9;
            break;
        case 5:
            sel=-1;
        }
    }
}
void Ui()
{
    cout<<"\n1)Read the stuff."<<endl;
    cout<<"2)Write the stuff."<<endl;
    cout<<"5)Let's call it a day.\n"<<endl;
}
