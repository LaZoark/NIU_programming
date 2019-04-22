#include <iostream>
#include <cstdlib>
using namespace std;

class MyClass //定義一個MyClass類別
{
    char* m_Name;
    int m_English;
    int m_Math;
    int m_Chinese;
    
public:
    MyClass(char* cName,int iEng=0,int iMath=0,int iCh=0)//建構子 
    {
        m_Name=cName;
        m_English=iEng;
        m_Math=iMath;
        m_Chinese=iCh;
    }
          
    //  = 運算子多載 
    MyClass& operator=(const MyClass& myClass)
    {
        m_English=myClass.m_English;    
        m_Math=myClass.m_Math;        
        m_Chinese=myClass.m_Chinese;
        return *this;  //傳回物件      
    }
    
    friend ostream& operator<<(ostream&,MyClass&); 
};
//定義輸出串列資料流
ostream& operator<<(ostream& out,MyClass& myClass)
{
    out<<"\n姓名:"<<myClass.m_Name
       <<"\n英文:"<<myClass.m_English
       <<"\n數學:"<<myClass.m_Math 
       <<"\n國文:"<<myClass.m_Chinese<<endl;       
    return out;
}

int main()
{
    char cName[10];//定義長度為10的陣列 
    int iEng,iMath,iCh;//紀錄英文、數學、國文 
    cout<<"請輸入學生姓名?";
    cin>>cName;
    cout<<"請輸入英文分數?";
    cin>>iEng;
    cout<<"請輸入數學分數?";
    cin>>iMath;
    cout<<"請輸入國文分數?";
    cin>>iCh;
        
    MyClass* myClass=new MyClass(cName,iEng,iMath,iCh);
    cout<<(*myClass);
    
    MyClass* myClass1=new MyClass(cName);//指定運算子多載 
    *myClass1=*myClass;
    cout<<(*myClass1);
    
    delete myClass1;
    delete myClass;
    
    system("pause");
    return 0;
}
