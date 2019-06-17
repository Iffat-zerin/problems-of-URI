#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14159
int main()
{
    double a,b,c,d,e,f,g,h;

    cin>>a>>b>>c;
    d=0.5*a*c;
    e=pi*c*c;
    f=((a+b)/2)*c;
    g=b*b;
    h=a*b;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<d<<endl;
    cout<<"CIRCULO: "<<e<<endl;
    cout<<"TRAPEZIO: "<<f<<endl;
    cout<<"QUADRADO: "<<g<<endl;
    cout<<"RETANGULO: "<<h<<endl;
    return 0;
}
