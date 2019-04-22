#include <iostream>  
#include <cstdlib> 
using namespace std;
  
  class Share;  
  class Friend  
   {  
        public:  
        void Access(Share* s);//摸FriendいAccessΘㄧ计       
    };  
   class Share  
   {  
         friend void Friend::Access(Share* s); 
         //Θㄧ计Access狟ねㄧ计 
         private:  
          int a;  	void printA(){ cout<<"ㄏノShareprivateよ猭"<<endl; }  
         protected:  
          int b;    void printB(){ cout<<"ㄏノShareprotectedよ猭"<<endl; }  
         public:  
          int c;  
          Share()  {  a = 1;  b = 2;  c = 3; 	}  
  	      void printC(){ cout<<"ㄏノSharepublicよ猭"<<endl; } 
     };  
     void Friend::Access(Share* s)
     {  
             s->a = s->b = s->c = 5;  
             cout<<"a="<<s->a<<" b="<<s->b<<" c="<<s->c<<endl;  
             cout<<"--------------------------------------"<<endl;
           	 s->printA();  
           	 s->printB();  
           	 s->printC();  
         } //﹚竡摸FriendΘㄧ计Accessず甧         
  int  main()  
   {  
        Share sh;  
       	Friend fr;  
       	fr.Access(&sh); //把计琌Share篈ン夹┮ゲ斗肚&sh 
       	
       	system("pause");
       	return 0;
   }
