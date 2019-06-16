#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,r1,r2;
    cin>>a>>b>>c;
    double x=2*a;
    double d= ((b*b)-4*a*c);
    double y=(-b-sqrt(d));
    double z=(-b+sqrt(d));
    r1=y/x;
    r2=z/x;
    if(a==0 || d<0 )
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {   cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<r2<<endl;
        cout<<"R2 = "<<r1<<endl;
    }
    return 0;

}
