#include <iostream>
using namespace std;
int main(void)
{
    cout << "�п�J8��LED����(�s��)" <<endl;
    int LED1,LED2,LED3,LED4,LED5,LED6,LED7,LED8;
    cin >>LED1;cin >>LED2;cin >>LED3;cin >>LED4;cin >>LED5;cin >>LED6;cin >>LED7;cin >>LED8;
    cout <<LED1<<LED2<<LED3<<LED4<<LED5<<LED6<<LED7<<LED8<<endl;
    if(LED1%2==1,LED3%2==1,LED5%2==1,LED7%2==1)
    {
        cout <<"�_�ƿO�]��1�ÿ�X"<<endl;
        LED1=1,LED3=1,LED5=1,LED7=1;
        cout <<LED1<<LED2<<LED3<<LED4<<LED5<<LED6<<LED7<<LED8<<endl;
    }
    if(LED2%2==0,LED4%2==0,LED6%2==0,LED8%2==0)
    {
        cout <<"���ƿO�]��0�ÿ�X"<<endl;
        LED2=0,LED4=0,LED6=0,LED8=0;
        cout <<LED1<<LED2<<LED3<<LED4<<LED5<<LED6<<LED7<<LED8<<endl;

    }

}
