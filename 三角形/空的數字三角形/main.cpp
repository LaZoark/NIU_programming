#include <iostream>
using namespace std;

int main()
{
    int x,num,t;
    cin>>x;
    for(int a=1; a<=x; a++)
    {

        for(num=1; num<=a; num++)
        {
            for(int space=0; space<=x-a; space++)
                if(space==num)
                    cout<<" ";
            if(num==a)
                for(int t=1; t<=a; t++)
                    cout<<num;
        }
        cout<<endl;
    }


    return 0;
}
