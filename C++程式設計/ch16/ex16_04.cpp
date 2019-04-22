#include <iostream>                      // 含括標頭檔 <iostream> 
#include <iomanip>                      // 含括標頭檔 <iomanip>
#include <cstdlib> 
using namespace std;

template <class Type>                  // 宣告樣版形式參數 T 
class Circle                          // 宣告樣版類別 Circle 
{
      private:
		  Type radius;                // 使用樣版形式參數 T 來定義變數 radius
		  double r_Area;           // 定義倍精度變數 r_Area 儲存圓面積
		  double r_Circum;         // 定義倍精度變數 r_Circum 儲存圓周長

	  public:
          Circle(Type r)        // Circle 類別的建構函數
		  { 
			radius=r;
		    r_Area=area();
			r_Circum=circum();
		  }
		  double area() { return (double)(3.14*radius*radius); } // 函數 area() 求圓面積
		  double circum() { return (double)(2*3.14*radius); }    // 函數 circum() 求圓周長
          void show(void)                                   // 函數 show() 顯示此圓資料
		  {
			   cout << "圓半徑=" << radius << "  "
				    << "圓面積=" << r_Area<< "  "
					<< "圓周長=" << r_Circum << endl;
		  }
};

int main()
{
	 /* 使用類別樣版 Circle 宣告物件 */
     Circle<int> ri(10);                          // 物件 ri 為 int 資料型態
	 Circle<float> rf(3.5);                       // 物件 rf 為 float 資料型態
	 Circle<double> rd(5.742);                    // 物件 rd 為 double 資料型態

	 /* 呼叫成員函數 show，顯示該圓資料 */
	 ri.show();
	 cout<<"---------------------------------------------"<<endl;
	 rf.show();
	 cout<<"---------------------------------------------"<<endl;
	 rd.show();
	 cout<<"---------------------------------------------"<<endl;
	 
	 system("pause");
	 return 0;
}
