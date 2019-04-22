 #include <iostream>  
 #include <cstdlib>
 using namespace std;
 
 template<class T>      //定義與宣告func函數樣版  
 T func(T n)  
 {  
    T result;      //宣告result為T型態變數  
    result = n * n + 3 * n + 5;   //執行n*n+3*n+5運算，並將結果指定給result  
    return result;           //回傳result;  
  }  
  
  int main()  
 {  
   cout<<"func(10) = ";  
   cout<<func(10)<<endl;    //輸出func(10)的運算結果  
   cout<<"func(12.5f) = ";  
   cout<<func(12.5f)<<endl;     //輸出func(12.5f)的運算結果  
 
   system("pause");
   return 0;
 }
