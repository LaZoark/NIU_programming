#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    
    char verselet[] = "詩名:清平調\n"
                      "作者:李白 　　 詩體:七言絕句\n\n";
    /*  寫檔 */
    ofstream fout;
    fout.open("text1.txt");//使用物件fout的函式open開啟text1檔案資料流
    for(int i=0; i<strlen(verselet); i++)
    {
        // 字元輸出
        fout.put(verselet[i]);//put()為字元輸出函式，所以必須逐字輸出，以完成一串字串
    }
    fout<<"雲想衣裳花想容，春風拂檻露花濃。"<<endl;
    fout<<"若非群玉山頭見，會向瑤臺月下逢。"<<endl;
    fout.close();
    
    system("pause");
    return 0;
}

