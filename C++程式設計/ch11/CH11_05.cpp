#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass //定義一個Class，名稱為MyClass
{
public:       //存取層級為public(公開)
    MyClass()
    {
        cout<<"無任何參數傳入的建構子"<<endl;    
    }
    
    MyClass(int a)
    {
        cout<<"傳入一個參數值的建構子"<<endl;
        cout<<"a="<<a<<endl;
        
    }
    
    MyClass(int a,int b)
    {
        cout<<"傳入二個參數值的建構子\n"; 
        cout<<"a="<<a<<" b="<<b<<endl;   
    }    

private:
    // MyClass(){} 若重複定義，編譯時將產生錯誤
};

int main()
{
    int a,b;
    //以指標型態的類別物件 
    a=100,b=88;
    MyClass myClass1;
    cout<<"-------------------------------------"<<endl;
    MyClass MyClass2(a);
    cout<<"-------------------------------------"<<endl;
    MyClass MyClass3(a,b);
    cout<<"-------------------------------------"<<endl;
    
    
    system("pause");
    return 0; 
}
