#include <iostream>
#include <cstdlib>
using namespace std;

template <class arrayType,int array_size>//獶篈把计ㄧ计妓
void showArray(arrayType (&array)[array_size])//ぃ惠戈篈 
{
    int i;
    cout<<"template 獶篈把计:"<<endl;
    cout<<"array_size="<<array_size<<endl<<endl; 
    for(i=0;i<array_size;i++)
    {
        cout<<"array["<<i<<"]="<<array[i]<<endl;//皚じず甧 
    }
    cout<<endl;
}
int main()
{   
    int a[]={20,23,56,77,88};//俱计皚 
    showArray(a);//㊣妓狾ㄧ计 
    
    system("pause");
    return 0;
}

