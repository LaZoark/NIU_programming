#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double rec(int a)
{
    if(a==1||a==2)
        return 1;
    else
        return rec(a-1)+rec(a-2);
}
int main()
{
    int a,round=0;
    double time[10],result=0;
    cin>>a;
    while(round<10)
    {
        clock_t start,fin;
        start=clock();
        cout<<rec(a)<<endl;
        fin=clock();
        time[round]=(double)(fin-start)/CLOCKS_PER_SEC;
        cout<<"�һݭn���ɶ� : "<<time[round]<<endl;
        result+=time[round++];
    }
    cout<<"\n***********************\n";
    cout<<"\n�����Ӯɬ�: "<<result/10<<endl;
    system("pause");
}
