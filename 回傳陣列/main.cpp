#include <iostream>

using namespace std;
#define SIZE 5
void arr(int []);
int main()
{
    int num[SIZE]={64,73,93,25,12};
    arr(num);
}

void arr(int a[])
{
    for(int j=0; j<SIZE; j++)
        cout<<a[j]<<'\t';
}
