#include <iostream>
#include <cmath>                     
   using namespace std;
   class Coordinate            // Coordinate類別，用來計算平面座標面積
   {
   	int X1,X2,Y1,Y2;        // X1,X2,Y1,Y2分別代表平面座標點
    public:
    	Coordinate(){X1=X2=Y1=Y2=0;}   // Coordinate類別的建構子
  	                    // 將類別成員初始化為 0
   	Coordinate(int Tmp_X1,int Tmp_X2,int Tmp_Y1,int Tmp_Y2)
   	{
   		X1=Tmp_X1;                    // Coordinate類別的建構子
   		X2=Tmp_X2;                    // 依據傳入值初始化類別成員值
   		Y1=Tmp_Y1;
   		Y2=Tmp_Y2;
   	}
   
   	bool operator > (Coordinate t3);      // 多載大於(>)關係運算子函數
   	void Display()                     // 顯示類別成員的內容
   	{
   		cout << "(" << X1 << ", " << X2
   			 << ", " << Y1 << ", " << Y2
  			 << ")" << endl;
   	}
   };
   
  bool Coordinate::operator > (Coordinate Tmp)
   {
   	double Area1,Area2;
   	Area1=fabs((X1-X2)*(Y1-Y2));       // 計算呼叫物件本身的面積
   	Area2=fabs((Tmp.X1-Tmp.X2)*(Tmp.Y1-Tmp.Y2));  // 計算Tmp物件的面積
   	if (Area1 > Area2)
   		return (true);
   	else
   		return (false);
   }
   

	
int main()
{
		Coordinate Area1(10,-2,14,20);
     	Coordinate Area2(5,18,3,-9);
    	cout << "Area1的座標(X1,X2,Y1,Y2)如下：" << endl;
    	Area1.Display();                  // 顯示Area1的內容
   	    cout << "Area2的座標(X1,X2,Y1,Y2)如下：" << endl;
    	Area2.Display();                  // 顯示Area1的內容
   
     	cout << endl << "面積比較結果：" << endl;
   	   if (Area1 > Area2)                // 呼叫大於多載運算子函數
   		cout << "Area1的面積大於Area2" << endl;
   	else
   		cout << "Area1的面積小於Area2" << endl;

		
		system("pause");
		return 0;
}
