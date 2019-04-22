 #include <iostream> 
 #include <cstdlib>
 
 using namespace std;
  
 int main()  
  {  
 	 int j = 20;
     int &refj = j; //宣告參考須使用&符號，並且同時指定初值j
     int *ptr=&j;//宣告指標,並且同時指向初值j 
     
     cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;//印出refj與*ptr的內容 
     *ptr=*ptr+5;//指標運算 
     cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;
 	  refj=refj+5;//參考運算 
     cout<<"refj="<<refj<<" *ptr="<<*ptr<<endl;
 	
     system("pause");
 	 return 0;
     
      }
