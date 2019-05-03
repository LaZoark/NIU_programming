// prog16_1, �~�Ӫ�²��d��
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;
class CWin                          // �w�qCWin���O�A�b���������O
{
   private:
     char id;
     int width,height;

   public:
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     void show_member(void)  	    // ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

class CTextWin : public CWin        // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  	    // �l���O�̪��p������
      char text[20];

   public:     					    // �l���O�̪���������
      CTextWin(char *tx)     		// �l���O���غc��
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl;
         strcpy(text,tx);
      }
      void show_text()			    // �l���O���������
      {
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CWin win('A',50,60); 	   		// �إߤ����O������
   CTextWin txt("Hello C++");		// �إߤl���O������

   win.show_member();  			    // �H�����O����I�s�����O�����
   txt.show_member();				// �H�l���O����I�s�����O�����
   txt.show_text();				    // �H�l���O����I�s�l���O�����
   //win.show_text(); �u����V�~��

   cout << "win ������F " << sizeof(win) << " bytes" << endl;
   cout << "txt ������F " << sizeof(txt) << " bytes" << endl;

   return 0;
}
