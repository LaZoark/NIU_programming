#include <iostream>
#include <cstdlib>
using namespace std;

class Student                 
{
		friend float add_score(Student);        //宣告add_score函數為夥伴函數
		private:                       
			int StuID;          
			float Score_E, Score_M, Score_T;
		public:                        
			Student(int id,float E,float M)         //宣告建構子
			{		
				StuID=id;              
				Score_E=E;             
				Score_M=M;             
				Score_T = Score_E + Score_M;
				cout << "學生學號：" << StuID << "" << endl; 
				cout << "總分是" << Score_T << "分" << endl;
			}	
};
float add_score(Student a)     //定義add_score函數
{
		a.Score_T+=30;
		return a.Score_T;
}
int main()
{
		Student stud1(920101,80,90);    //給予stud1物件初值
	cout << "加30分後，總分為：" << add_score(stud1) << "分" << endl; //呼叫add_score函數
  
  system("pause");
  return 0;
}
