#include <iostream>
using namespace std;
int main()
{
    double height,weight,BMI;
    cout<<"請輸入身高和體重: "<<endl;
    cin>>height>>weight;
    height*=0.01;
    BMI=weight/(height*height);
    cout<<"BMI值為: "<<BMI<<endl;
    if(BMI>=18.5&&BMI<24)
        cout<<"體重標準"<<endl;
    else if(BMI>24)
        cout<<"體重過重"<<endl;
    else
        cout<<"體重過輕"<<endl;
    return 0;
}
