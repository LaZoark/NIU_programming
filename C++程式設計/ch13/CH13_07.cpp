#include <iostream> 
#include <cstdlib> 
using namespace std;

class Matrix        // 計算矩陣相加的自訂類別  
{  
      int Matrix_Num[2][2];     // 設定2x2的矩陣  
      public:  
       Matrix() 
      {  
       int i,j;  
       for (i=0; i<2; i++)  
        for(j=0; j<2; j++)  
          Matrix_Num[i][j]=0;      // Matrix矩陣的建構子 
                                   // 全部初始化為0  
        }  
       
       Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2) 
     	{  
         Matrix_Num[0][0]=Tmp_a1;     // Matrix矩陣的建構子  
         Matrix_Num[0][1]=Tmp_a2;     // 初始化格式為  
         Matrix_Num[1][0]=Tmp_b1;         // |a1  a2|  
     	 Matrix_Num[1][1]=Tmp_b2;         // |b1  b2|  
       	}  
        friend istream& operator >> (istream& in, Matrix& Tmp_Mat);  
       // >>運算子的多載函數原型宣告，in是由istream類別生成的輸入物件  
        friend ostream& operator << (ostream& out, Matrix& Tmp_Mat);  
       // <<運算子的多載函數原型宣告，out是由ostream類別生成的輸出物件  
        Matrix operator ++();     // ++前置運算子的多載函數原型宣告  
        Matrix operator ++(int);  // ++後置運算子的多載函數原型宣告  
       };  
       
       istream& operator >> (istream& in, Matrix& Tmp_Mat)  
       {  
         int i,j;  
         for (i=0; i<2; i++)  
          for (j=0; j<2; j++)  
           in >> Tmp_Mat.Matrix_Num[i][j];    // 透過迴圈設定類別的成員資料  
         return (in);          // 傳回輸入物件  
        }  
        ostream& operator << (ostream& out, Matrix& Tmp_Mat) 
        {  
         int i,j;  
          for (i=0; i<2; i++)  
           for (j=0; j<2; j++)  
           out << Tmp_Mat.Matrix_Num[i][j] << "\t";  // 透過迴圈設定類別的成員資料  
           cout << endl;  	
           return (out);     // 傳回輸出物件  
          }  
         Matrix Matrix::operator ++ ()  
         { 
          int i,j;
          for (i=0; i<2; i++)  
           for (j=0; j<2; j++)  
            ++Matrix_Num[i][j];  // 利用迴圈對類別成員資料進行++前置運算  
            return (*this);  
           }  
          Matrix Matrix::operator ++ (int)  
           {  
            Matrix Tmp;  
            int i,j;  
            for (i=0; i<2; i++)  
            for (j=0; j<2; j++)  
             Tmp.Matrix_Num[i][j] = Matrix_Num[i][j]++;  // 利用迴圈對類別成員資料進行++後置運算  
              return (Tmp);  
            }  
           int main()  
            {  
                Matrix M1,M2,Prefix,Postfix; 
            	cout << "請輸入M1矩陣的值：";  
                cin >> M1;       // 呼叫多載運算子>>設定物件內容  
                
                cout << "請輸入M2矩陣的值：";  
                cin >> M2;         // 呼叫多載運算子>>設定物件內容  
                Prefix = ++M1;     // 呼叫多載運算子++，執行前置運算  
                Postfix = M2++;   // 呼叫多載運算子++，執行後置運算  
                cout << endl;  
                cout << "執行Prefix = ++M1後，Prefix矩陣的值為：" << endl;  
                cout << Prefix << endl;       // 呼叫多載運算子<<輸出物件內容  
                cout << "執行Postfix = M2++後，Postfix矩陣的值為：" << endl;  
                cout << Postfix << endl;       // 呼叫多載運算子<<輸出物件內容  
                
                system("pause");
                return 0;
             }
