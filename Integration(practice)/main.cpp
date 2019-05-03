#include <iostream>
#include <windows.h>
#include <iomanip>
#include "color.h"

using namespace std;
class Integral
{
private:
    double upper_limit,lower_limit;
    string integrand,variable;//f(x) & dx
    string f,v; //integrand & variable => f(...) & d"_"

public:
    /*Definite Integral*/
    Integral(double u=0,double l=0,string integrand="f(x)",string dx="x"):upper_limit(u),lower_limit(l),variable(dx)
    {
        SetColor(WHITE_BLUE);
        u==0&&l==0?cout<<'b'<<endl:cout<<u<<endl;
        cout<<"∫ "<<integrand<<" d"<<dx<<endl;
        u==0&&l==0?cout<<'a'<<endl:cout<<l<<endl;
        SetColor(WHITE);
        if(u==0&&l==0&&integrand=="f(x)"&&dx=="x")
            cout<<"\tIntegral from a to b of f(x) dx."<<endl;///這個有點問題!!
        else
            cout<<"\tIntegral from "<<l<<" to "<<u<<" of "<<integrand<<" d"<<dx<<endl;
    }
    /*Indefinite Integral*/
    Integral(string integrand="f(x)",string dx="x"):variable(dx)
    {
        SetColor(WHITE_BLUE);
        cout<<endl;
        cout<<"∫ "<<integrand<<" d"<<dx<<endl;
        cout<<endl;
        SetColor(WHITE);
        if(integrand=="f(x)"&&dx=="dx")
            cout<<"\tIntegral of f(x) dx."<<endl;
        else
            cout<<"\tIntegral of "<<integrand<<" d"<<dx<<endl;
    }
    void indefinite()
    {
        cout<<"\nPlease enter the integrand : ";
        SetColor(RED);
        cin>>f;
        SetColor(WHITE);
        cout<<"Please enter the variable : ";
        SetColor(RED);
        cin>>v;
        SetColor(WHITE);
        Integral(f,v);
    }
    void definite()
    {
        cout<<"\nPlease enter the lower limit : ";
        SetColor(RED);
        cin>>lower_limit;
        SetColor(WHITE);
        cout<<"Please enter the upper limit : ";
        SetColor(RED);
        cin>>upper_limit;
        SetColor(WHITE);
        cout<<"Please enter the integrand : ";
        SetColor(RED);
        cin>>f;
        SetColor(WHITE);
        cout<<"Please enter the variable : ";
        SetColor(RED);
        cin>>v;
        SetColor(WHITE);
        cout<<endl;
        Integral(upper_limit,lower_limit,f,v);
    }
    void power_n_tan(short n) /// ∫tan^n(x)dx = 1/(n-1)*tan^(n-1)(x)-∫tan^(n-2)(x)dx
    {
        short n1,n2,term=0,temp;
        SetColor(RED_WHITE);
        cout<<"\n∫tan^"<<n<<"(x)dx"<<endl;
        SetColor(WHITE);
        n1=n-1;     //define n1
        n2=n-2;     //define n2
        temp=n;
        if(n==1)
            {
                SetColor(AQUA);
                cout<<"= -ln(|cos(x)|)+C #"<<endl;
                SetColor(WHITE);
            }
        else if(n==0)
            {
                SetColor(AQUA);
                cout<<"= "<<variable<<"+C #"<<endl;
                SetColor(WHITE);
            }
        else
        {
            cout<<"= (1/"<<n1<<")*tan^("<<n1<<")(x)-∫tan^("<<n2<<")(x)dx"<<endl;
            cout<<"= ";
            SetColor(AQUA);
            cout<<"(1/"<<n1<<")*tan^("<<n1<<")(x)";
        }
        while(n2>=0)
        {
            SetColor(AQUA);
            n2=n-=2;
            n1=n-1;
            term++;
            if(n2>1)
            {
                if(term%2==0)
                    cout<<"+(1/"<<n1<<")*tan^("<<n1<<")(x)";
                else
                    cout<<"-(1/"<<n1<<")*tan^("<<n1<<")(x)";
            }
            else if(n2==0)
            {
                if((temp-2)%4==0)
                    cout<<"-x+C #"<<endl;
                else
                    cout<<"+x+C #"<<endl;
            }
            else if(n2==1)
            {
                if((temp-1)%4==0)
                    cout<<"-ln(|cos(x)|)+C #"<<endl;
                else
                    cout<<"+ln(|cos(x)|)+C #"<<endl;
            }
            SetColor(WHITE);
        }
    }
};
int main()
{
    Integral func(0,0);     ///Integral(double u,double l,string integrand,string dx)
    int type=0;
    short n;
    double l,u;
    string f,v; //integrand & variable => f(...) & d"_"
    while(type!=16)
    {
        cout<<"\n************************"<<endl;
        cout<<"1). Definite Integral"<<endl;
        cout<<"2). Indefinite Integral"<<endl;
        cout<<"3). tan^n(x)dx "<<endl;
        cout<<"9). Debug Mode "<<endl;
        cout<<"************************"<<endl;
        cout<<"Please select the function :";
        cin>>type;
        switch(type)
        {
        case 1://indefinite
            func.indefinite();
            break;
        case 2://definite
            func.definite();
            break;
        case 3://tan^n(x)dx
            cout<<"\n∫tan^n(x)dx  n= ";
            cin>>n;
            func.power_n_tan(n);
            break;
        case 9:
            for(int i=0;i<10;i++)
                func.power_n_tan(i);
            break;
        }
    }
}//x^3+7x^2-8x+1 (e^x-x^4)/sin(x)

