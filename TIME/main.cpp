#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std ;

int main ( )   //����e�t�Ϊ���e���/�ɶ�
{
    while(1)
    {
        time_t now = time ( 0 ) ;//��now�ഫ���r�Ŧ�Φ�
        char * dt =ctime(&now);
        cout << "���a����M�ɶ��G" << dt << endl ;//��now�ഫ��tm���c
        Sleep(876);
    }
}
