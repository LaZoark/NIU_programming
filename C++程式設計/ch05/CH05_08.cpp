#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
    string str1="Years go by will I still be waiting";//字串宣告 
    string str2="For somebody else to understand";//字串宣告
    cout<<"str1="<<str1<<endl;
    cout<<"str2="<<str2<<endl;//尋找字串 
    cout<<"--------------------------------------"<<endl;
    cout<<"在str1中的第"<<str1.find("will")<<"個位置找到will字串"<<endl;
    cout<<"在str2中的第"<<str2.find("else")<<"個位置找到else字串"<<endl; 
    cout<<"--------------------------------------"<<endl;
    
    system("pause"); 
    return 0;

}
