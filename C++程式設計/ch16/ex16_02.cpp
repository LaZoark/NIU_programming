#include <iostream>
#include <cstdlib>
using namespace std;


template <class type>//妓摸Θ跑计Θㄧ计
class cube
{
  private:
        type length;//╬ΤΘ 
        type width;
        type height;
        type volume;
  public://Θㄧ计 
        void set_length(type len)
        {
            length = len;//砞﹚ 
        }
        void set_width(type wid)
        {
            width = wid;//砞﹚糴 
        }
        void set_height(type hei)
        {
            height = hei;//砞﹚蔼 
        }
        void calculate();
        void show_volume();
};
//---------------------------------
template <class type>
void cube<type>::calculate()//Θㄧ计class场
{
    volume = length*width*height;
}
//---------------------------------
template <class type>
void cube<type>::show_volume()//Θㄧ计class场
{
    cout<<" = "<<length<<"  ";
    cout<<"糴 = "<<width<<"  ";
    cout<<"蔼 = "<<height<<endl;
    cout<<"ミよ砰縩 = "<<volume<<endl;
}
//---------------------------------
int main()
{    
    cube<int> cubeA;
    cubeA.set_length(10);
    cubeA.set_width(20);
    cubeA.set_height(3);
    cubeA.calculate();
    cubeA.show_volume();
    
    system("pause");
    return 0;
}

