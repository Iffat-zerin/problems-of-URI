#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    double b,c;
    cin>>a>>b;
    c=a/b;
    cout<<fixed<<setprecision(3);
    cout<<c<<" km/l"<<endl;
    return 0;

}
