#include<iostream>  
#include<cstdlib>       
using namespace std;

// 定義一個名為water結構
struct water {     
	int waterunit;  //用電量
	int basewater;  // 基本電費
};  
// 定義show_pay_water函數原型
void show_pay_water(struct water);
// 主函式
int main()
{
	water mywater;
	int waterdata;
	cout << "輸入用電量:" ;
	cin >> waterdata;
	mywater.waterunit=waterdata;
	mywater.basewater=90;
	show_pay_water(mywater);
	
	system("pause");
	return 0;
}

void show_pay_water(struct water w1)
{
	int paywater=0;

	if ((w1.waterunit>=0) && (w1.waterunit<=10))
		paywater=w1.basewater+10*w1.waterunit;
	if ((w1.waterunit>=11) && (w1.waterunit<=20))
		paywater=w1.basewater+12*w1.waterunit;
	if ((w1.waterunit>=21) && (w1.waterunit<=40))
		paywater=w1.basewater+15*w1.waterunit;
	if ((w1.waterunit>=41) && (w1.waterunit<=50))
		paywater=w1.basewater+18*w1.waterunit;
	if (w1.waterunit>50)
		paywater=w1.basewater+20*w1.waterunit;

		cout << "水費度數：" << w1.waterunit << " 度" << endl;
		cout << "應付水費：" << paywater << " 元" << endl;
}
