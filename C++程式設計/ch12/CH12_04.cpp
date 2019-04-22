#include <iostream>
#include <cstring>
using namespace std;

class teacher           
{
	friend class Student;  //宣告Student類別為teacher的朋友類別
private:   
	char tName[10];
public:
	void teach(int ID)    
	{
		if (ID==1)
			strcpy(tName, "John");  //指定tName的值
		else 	
			strcpy(tName, "Andy");  //指定tName的值
	}
};
class Student                 
{
private:                       
	int StuID,Select_C;
public:               
	Student(int id,int C)         
	{		
		StuID=id;              
		Select_C=C;   
		cout << "學生學號：" << StuID << endl; 
		cout << "課程編號：" << Select_C << endl;
		teacher t;               //宣告teacher類別物件
		t.teach(Select_C);         //呼叫teacher類別的teach函數
		cout << "授課教授：" << t.tName << endl;   //呼叫teacher類別的tName資料成員
	}	
};

int main()
{
	Student stud1(920101,2);    //給予stud1物件初值
	Student stud2(920102,1);   //給予stud2物件初值
	
    system("pause");
	return 0;
}
