#include <iostream>  
#include <cstdlib>   
using namespace std;

class Matrix     // 計算矩陣相加的自訂類別  
{  
 int Matrix_Num[2][2];      // 設定2x2的矩陣 
 public:  
  Matrix() 
  {  
   int i,j; 
   for (i=0; i<2; i++) 
    for(j=0; j<2; j++)  
    Matrix_Num[i][j]=0;       // Matrix矩陣的建構
    // 全部初始化為0  
   }  
  Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
  {  
   Matrix_Num[0][0]=Tmp_a1;      // Matrix矩陣的建構子  
   Matrix_Num[0][1]=Tmp_a2;    // 初始化格式為  
   Matrix_Num[1][0]=Tmp_b1;   // |a1  a2|  
   Matrix_Num[1][1]=Tmp_b2;   // |b1  b2|  
   }  
   void Set_Info(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2)  
   {  
     Matrix_Num[0][0]=Tmp_a1;         // 設定Matrix矩陣的內容  
     Matrix_Num[0][1]=Tmp_a2;  
     Matrix_Num[1][0]=Tmp_b1;  
     Matrix_Num[1][1]=Tmp_b2;  
   }  
   Matrix operator +(Matrix t2);           // 多載指定運算子+的函數宣告  
   // 並設定傳回型態為Matrix類別型態  
   void ShowInfo();         // 宣告顯示矩陣內容的函數原型宣告  
 };  
 Matrix Matrix::operator +(Matrix t2)  
 {  
  int i,j; 
  Matrix MatOut;  
   for (i=0; i<2; i++)  
    for (j=0; j<2; j++)  
     MatOut.Matrix_Num[i][j]=Matrix_Num[i][j]+t2.Matrix_Num[i][j]; // 透過迴圈計算矩陣相加的結果 
      return (MatOut);  
   }  
  void Matrix::ShowInfo()  
  {  
    int i,j;  
    for (i=0; i<2; i++) 
     for (j=0; j<2; j++)  
      cout << Matrix_Num[i][j] << "\t";  // 透過迴圈計算矩陣相加的結果  
      cout << endl;  
   }  
 int main()  
 {  
  Matrix M1,M2,M3; 
  int a1,a2,b1,b2;  
  cout << "請輸入M1矩陣的值：";  
  cin >> a1 >> a2 >> b1 >> b2; 
  M1.Set_Info(a1,a2,b1,b2);  // 呼叫Set_Info()函數設定M1矩陣  
  cout << "請輸入M2矩陣的值：";  
  cin >> a1 >> a2 >> b1 >> b2;    
  M2.Set_Info (a1,a2,b1,b2);           // 呼叫Set_Info()函數設定M2矩陣  
  cout << endl;  
  cout << "M1矩陣 + M2 矩陣的結果為：" << endl;  
  M3 = M1 + M2;                           // 呼叫多載運算子+計算矩陣相加的結果  
  M3.ShowInfo();                    // 呼叫ShowInfo()函數顯示矩陣內容  
  
  system("pause");
  return 0;
  
  }
