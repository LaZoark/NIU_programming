#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    for(a=1;a<=1000;a++)    //1~1000絛瞅
    {
        n=0;                //–Ω璸衡常璶耴箂
        for(b=1;b<a;b++)    //set计bㄓ"刚"计
            if(a%b==0)      //耞ê计(b)琌a计ぇ
            n+=b;           //ノnㄓΜ栋计(―羆㎝)
            if(a==n)
            cout<<n<<endl;
    }
}
