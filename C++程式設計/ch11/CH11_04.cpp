#include <iostream>
#include <cstdlib>
using namespace std;

class Student                  //摸
{
private:                       //╬ノ戈Θ
	int StuID;          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //そノ戈Θ
    Student();                  //箇砞篶
	Student(int id,float E,float M);  //把计篶
	void show_data();	          //Θㄧ计
};
Student::Student()               //篶 砞﹚戈Θ﹍Student摸ぇ
{
	StuID = 920101;
	Score_E = 60;
    Score_M = 80;
}
Student::Student(int id,float E,float M)         //ㄏノ把计砞﹚﹍
{
	StuID=id;              //﹚StuID=把计id
	Score_E=E;             //﹚Score_E=把计E
	Score_M=M;            //﹚Score_M=把计M
}
void Student::show_data()          //龟show_dataㄧ计
{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "===================" << endl;
	cout << "厩ネ厩腹" << StuID << "" << endl; 
	cout << "羆だ琌" << Score_T << "だ,キА琌" << Score_A << "だ" << endl;
}
int main()
{
	Student stud;               //Student摸ン穦㊣礚把计篶
	stud.show_data();           //㊣show_dataΘㄧ计
	Student stud1(920102,30,40);    //Student摸ン穦㊣把计篶
	stud1.show_data();           //㊣show_dataΘㄧ计
	
	system("pause");
	return 0;
}
