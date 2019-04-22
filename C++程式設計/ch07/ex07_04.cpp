#include<iostream>
#include<cstdlib>

using namespace std;
//ㄧ计
int sum(int,int);//ㄧ计

int main()
{
    
  int x,y;
  cout<<"叫块ㄢΘ罿: ";
  cin>>x>>y;
  cout<<"ㄢΘ縩羆㎝="<<sum(x,y)<<endl;//㊣块ㄧ计挡狦 
  
  system("pause");
  return 0;
}
//ㄧ计﹚竡场だ
int sum(int score1,int score2)
{   
    int total;
    total=score1+score2;
    
    return total; 
}
