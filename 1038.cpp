#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    double c;
    cin>>a>>b;

    if(a==1)
    {
        c=b*4.00;
        cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<c<<endl;

    }
    else if(a==2)
    {
        c=b*4.50;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<c<<endl;
    }
    else if(a==3)
    {
        c=b*5.00;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<c<<endl;
    }
    else if(a==4)
    {
        c=b*2.00;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<c<<endl;
    }
    else if(a==5)
    {
        c=b*1.50;
         cout<<fixed<<setprecision(2);
        cout<<"Total: R$ "<<c<<endl;
    }
    return 0;
}
