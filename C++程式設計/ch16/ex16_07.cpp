#include <iostream>                           
#include <cstdlib>  
using namespace std;
  
template <class T, int N>                         // 宣告樣版形式參數 T，資料型態固定參數 N
class CalAdd                                      // 宣告樣版類別 CalAdd 
{
	  private:
          T Total;                                // 宣告樣版形式參數 T 的變數 Total
		  T Num[N];                               // 宣告樣版形式參數 T 的陣列 Num[]
	  
	  public:
          CalAdd() { Total=0; }                   // CalAdd 類別的建構函數

		  void InNum(void);
		  void AddNum(void);
		  void ShowResult(void);
};

template <class T, int N> void CalAdd<T, N> :: InNum(void)  // 成員函數 InNum()
{                                                           // 將輸入資料存入陣列 Num[] 中
     for (int count=0; count < N; count++)
	 {
		 cout << "輸入資料:";
		 cin >> Num[count];
	 }
}

template <class T, int N> void CalAdd<T, N> :: AddNum(void)  // 成員函數 AddNum()
{                                                            // 計算陣列 Num[] 元素值總和
	 for (int count=0; count < N; count++)
		 Total+=Num[count];
}

template <class T, int N> void CalAdd<T, N> :: ShowResult(void)  // 成員函數 ShowResult()
{                                                                // 顯示計算結果
	 AddNum();                                  
	 for (int count=0; count < N; count++)
	 {
		 cout << Num[count];
		 if ( count < (N-1) ) cout << " + ";
	 }

	 cout << " = " << Total << endl;
}

int main()
{ 
     CalAdd<int, 4> iCal;               //使用樣版類別 CalAdd 宣告 int 資料型態物件 iCal
	 CalAdd<double, 3> dCal;            //使用樣版類別 CalAdd 宣告 double 資料型態物件 dCal

	 cout << "<計算 4 個 int 資料型態的總和>" << endl;
	 iCal.InNum();
	 iCal.ShowResult();                                     // 顯示 iCal 計算結果

	 cout << "<計算 3 個 double 資料型態的總和>" << endl;
	 dCal.InNum();
	 dCal.ShowResult();                                     // 顯示 dCal 計算結果
	 
	 system("pause");
	 return 0;
}
