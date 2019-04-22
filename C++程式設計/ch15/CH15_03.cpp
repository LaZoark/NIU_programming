#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
    /*讀檔*/
    string str;
    char data[100];
    char oneChar;
    ifstream fin;
    fin.open("text1.txt");//使用物件fin的函式open()開啟檔案資料流，檔名為text1.txt
    for(int i=0;i<12;i++)
    {
        //讀取一個字元
        fin.get(oneChar);//使用get函式讀取字元
        cout<<oneChar; 
    }
    //讀取一筆資料
    fin.getline(data,sizeof(data));//使用getline()函式讀取整列資料
    cout<<data<<endl<<endl;
    //使用">>"讀取資料
    fin>>str;
    while(!fin.eof())//利用eof()來判斷是否讀到檔尾
    {
        cout<<str<<endl;
        fin>>str;
    } 
    fin.close();
    
    system("pause");
    return 0;
}
