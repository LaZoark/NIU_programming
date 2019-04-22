#include <iostream>
#include <windows.h>
using namespace std;
struct MyData
{
    string name;
    char sex;
    int math;
} student;
union QA
{
    char sex;
    int selection;
} convey;
enum Belove
{
    fabulous,
    cute,
    butt,four,five,six,seven,eight,nine,ten
} Kiki;

struct mydata
{
    int A;
    int B;
}test;

void Freference(struct mydata &a)
{
   test.A+=8;
}
void Fpointer(mydata *a)
{
    a->B+=99;
    //test.B+=300;
}
int main()
{
    //Kiki=static_cast<Belove>(123456789);
    /*cout<<Kiki<<endl<<fabulous<<cute<<butt<<endl;
    for(int Kiki=fabulous; Kiki<ten; Kiki=static_cast<Belove>(Kiki+1))
        cout<<Kiki<<endl;*/
    test.A=8;
    test.B=39;
    cout<<test.A<<endl;
    Freference(test);
    cout<<test.A<<endl<<endl;
    cout<<test.B<<endl;
    Fpointer(&test);
    cout<<test.B<<endl;
    system("cls");
    //student.name='t';
    student.sex='t';
    //student.math=100;
    cout<<&student.name<<endl;
    cout<<&student.sex<<endl;//????????
    cout<<student.sex<<endl;
    cout<<&student.math<<endl;

}
