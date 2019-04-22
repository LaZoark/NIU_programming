 #include <iostream> 
 #include <cstdlib>  
 #include <cstring>  
 using namespace std;  
 
 class BookShelf  //定義外圍類別BookShelf
  {  
       private:  
       
       static int MAX_BOOKS;  
       int count;  
       char* name;  
       class Book  	//定義巢狀類別Book
       {  
         private:  
         char* title;  
         int price;  
         public:  
          Book(char* t,int p)  
          { 
            title = new char[strlen(t) + 1]; 
            strcpy(title,t);  
            price = p; 
          }  
          char* getTitle() { return title; }  
          int getPrice() { return price; } };  
          Book* book[10];  
          public:  
           BookShelf(char* n) 
           {  
             name = new char[strlen(n) + 1];  
             strcpy(name,n);  
             count = 0;  
           	}  
      	  void InsertBook(char* t,int p)  
            {  if(count == MAX_BOOKS)  
            	{  cout<<"書架已經滿了\n"<<endl;  
                }  
                book[count++] = new Book(t,p);  
             }  
          void ListAllBooks() 
           {  
               cout<<"["<<name<<"]"<<endl;  
               cout<<"=========================="<<endl;  
               for(int i=0;i<count;i++)  
               cout<<book[i]->getTitle()<<book[i]->getPrice()<<endl;  
            }  
             };  
            int BookShelf::MAX_BOOKS = 10;  
            int main() 
            {  
                BookShelf bks("我的書架");  
                bks.InsertBook("VC++範例教本",450);//插入書籍1 
                bks.InsertBook("遊戲設計概論",420);//插入書籍2  
                bks.InsertBook("全民英檢-中級",360); //插入書籍3 
                bks.ListAllBooks(); //列出書架上的所有書籍 
                
                system("pause");
                return 0;
             }
