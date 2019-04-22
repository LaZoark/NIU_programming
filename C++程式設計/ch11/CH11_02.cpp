#include <iostream>
#include <cstdlib>
using namespace std;

class Student                 //宣告類別
{
private:                       //私用資料成員
	int StuID;          
	float English,Math,Total,Average;
public:                        //公用函數成員
    Student(); //預設建構子，也可以省略
	Student(int id, float E, float M)         //宣告建構子
	{
		StuID=id;              //指定StuID=參數id
		English=E;            //指定English=參數E
		Math=M;           //指定Math=參數M
		Total = E + M;
		Average = (E + M)/2;
		cout << "-----------------------------------" << endl;
		cout << "學生學號：" << StuID << "" << endl; 
		cout<<"英文成績:"<<E<<endl;
        cout<<"數學成績:"<<M<<endl;
		cout << "總分是" << Total << "分,平均是" << Average << "分" << endl;
	}
};
int main()
{
	Student stud1(920101,80,90);    //給予stud1物件初值
	Student stud2(920102,60,70);    //給予stud2物件初值
	cout << "-----------------------------------" << endl;
	
    system("pause");
	return 0;
}
