#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	//宣告一個字串
	char str[]="At the first God made the heaven and the earth."  
			   "And the earth was waste and without form; "
      		   "and it was dark on the face of the deep: "
           	   "and the Spirit of God was moving on the face of the waters.";
	char find[10];  
	int i,j, find_len=0, count=0;
    int index_num;
    cout<<"--------------------------------------"<<endl;
	cout<<str<<endl;
    
    cout<<"請輸入要搜尋的字串:";
	//輸入字串
	cin>>find;
	//取得搜尋字串的長度
    while(find[find_len]!='\0')
    {
    	find_len++;// 計算長度  
    }
    //開始搜尋字串
	for(i=0;str[i]!='\0';i++)
	{
		 if(str[i]==(find[0]) )
	     {
			 for(j=0;j<=find_len;j++)
			 {
				 if(str[i+j]==find[j])
					 continue;
				 else
					 break;
			 }
   		 	 if(j==find_len){
        		cout<<"在第"<<i<<"位置搜尋到字串"<<endl;
   			 	count++;
		 	 }
		 }
		 
	}
	cout<<"共有"<<count<<"個符合的字串"<<endl; 
    
    system("pause");                                
	return 0;
}
