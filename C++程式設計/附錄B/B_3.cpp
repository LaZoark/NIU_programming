#include <iostream>  // �B�z��X�J�����Y��
#include <iomanip>  // ���a�l�����Y��
#include <cstdlib>
using namespace std;

int main()
	{
     int i, n;// �ϥκX�� ios::right
     cout << "�ϥή榡�X��\"ios::right\"�N��X�a�k���,�����w�]��" << endl;
     for( i = 1, n = 0; i < 6; i++)
     {
      n *= 10;
      n += i;
      cout << setiosflags( ios::right ) << setw(5) << n << endl;
	 }
      cout << resetiosflags( ios::right ) << endl; // �Ѱ��]�w
     // �ϥκX�� ios::left
     cout << "�ϥή榡�X��\"ios::left\"�N��X�a�k���" << endl;
     for( i = 1, n = 0; i < 6; i++)
     {
      n *= 10;
      n += i;
      cout << setiosflags( ios::left ) << setw(5) << n << endl;
      }
      cout << endl;

      system("pause");
      return 0;
      }


============================================



#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(int a=1; a<=9; a++)
    {
        for(int b=1; b<=a; b++)
            cout<< setiosflags( ios::right ) << setw(5) <<b;
        cout<<endl;
    }
}
