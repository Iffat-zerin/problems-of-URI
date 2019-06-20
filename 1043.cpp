#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    if(b+c>a && a+b>c && c+a>b){
        d=a+b+c;
        cout<<"Perimetro = "<<d<<endl;
    }
    else{
        d=((a+b)/2)*c;
        cout<<"Area = "<<d<<endl;

}
return 0;
}
