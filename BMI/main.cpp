#include <iostream>
using namespace std;
int main()
{
    double height,weight,BMI;
    cout<<"�п�J�����M�魫: "<<endl;
    cin>>height>>weight;
    height*=0.01;
    BMI=weight/(height*height);
    cout<<"BMI�Ȭ�: "<<BMI<<endl;
    if(BMI>=18.5&&BMI<24)
        cout<<"�魫�з�"<<endl;
    else if(BMI>24)
        cout<<"�魫�L��"<<endl;
    else
        cout<<"�魫�L��"<<endl;
    return 0;
}
