#include<iostream>
#include<cstdlib>

using namespace std;
//ㄧ计
int area(int,int);
void draw_rect(int,int);

int main()
{	
	int w, h,rect_area;
    //ㄧΑ计㊣
	//砞﹚块糴籔计
	cout<<"叫块糴:";
	cin>>w;
	cout<<"叫块:";
	cin>>h;
	rect_area=area(w,h);//惠璶肚ㄧ计㊣ 
	//ㄧ计㊣
	cout<<"よ罿="<<rect_area<<endl; 
    draw_rect(w,h);//ぃ惠璶肚ㄧ计㊣
    
    system("pause");
	return 0;
}
int area(int a,int b)
{
 return a*b;
}//璸衡よ罿ㄧ计  
void draw_rect(int x,int y)
{   
	int i,j;
	//砞﹚计ぃ眔单箂
	if(x<=0 || y<=0)
	{ 
		printf("计ぃ单箂\n");
		return ;
	}
	//砞﹚块Α
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		printf("*");
		}
		printf("\n");
	}
} // 礶よ瓜ㄧ计 
