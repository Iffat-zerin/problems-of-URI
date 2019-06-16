#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g;
cin>>a;
cout<<a<<endl;
cout<<a/100<<" nota(s) de R$ 100,00"<<endl;
b=a%100;
cout<<b/50<<" nota(s) de R$ 50,00"<<endl;
c=b%50;
cout<<c/20<<" nota(s) de R$ 20,00"<<endl;
d=c%20;
cout<<d/10<<" nota(s) de R$ 10,00"<<endl;
e=d%10;
cout<<d/5<<" nota(s) de R$ 5,00"<<endl;
f=e%5;
cout<<f/2<<" nota(s) de R$ 2,00"<<endl;
g=f%2;
cout<<g/1<<" nota(s) de R$ 1,00"<<endl;
return 0;
}
