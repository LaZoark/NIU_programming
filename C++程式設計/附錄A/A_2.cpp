#include <iostream>
#include <cstring>      
#include <cstdlib>
using namespace std;

int main()
{
	char Work_Str[80];          //定義字元陣列 Work_Str[80] 
	char Str_1[40];              //定義字元陣列 Str_1[40] 
	char Str_2[40];               //定義字元陣列 Str_2[40] 
	
    cout<<"比較下列2個字串:"<<endl;
    cout<<"請輸入第一個字串:"<<endl; 
    cin>>Str_1;
    cout<<"Str_1="<<Str_1<<endl;
    cout<<"請輸入第二個字串:"<<endl; 
    cin>>Str_2;
    cout<<"Str_2="<<Str_2<<endl;
	cout<<endl;                                           //換行 

    //比較字串的大小 
	if ( strcmp(Str_1, Str_2) )                             //使用 strcmp() 函式比較字串
		if ( strcmp(Str_1, Str_2) > 0 )                     //Str_1 字串 > Str_2 字串 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " > ");                        //連結 ">" 符號 
			strcat(Work_Str, Str_2);
		}
		else                                                //Str_1 字串 < Str_2 字串 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " < ");                        //連結 "<" 符號 
			strcat(Work_Str, Str_2);
		}
	else                                                    //Str_1 字串 = Str_2 字串 
		{
			strcpy(Work_Str, Str_1);
		    strcat(Work_Str, " = ");                        //連結 "=" 符號 
			strcat(Work_Str, Str_2);
		}

	cout<<"比較的結果:"<<Work_Str;
	                                        //顯示結果 
		
	cout<<endl;         // 換行 
 
    system("pause");
    return 0;
}
