#include <iostream>
#include <cstdlib>
using namespace std;

struct Time		
{
	int hour;	
	int minute;
	int second;	
};

int main()
{
	Time nowtime;	
	nowtime.hour = 10;	
	nowtime.minute = 23;	
	nowtime.second = 45;	

	cout << "現在的時間為：";
	cout << nowtime.hour << ':' ;	
	cout << nowtime.minute << ':' ;
	cout << nowtime.second << " AM";	
	cout << endl;
	
	system("pause");
	return 0;
}
