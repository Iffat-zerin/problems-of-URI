#include<iostream>
using namespace std;
int main()
{
    int a,i,b=0,c=0,d=0,e=0;
    for(i=0; i<5; i++)
    {
        cin>>a;

        if(a%2==0)
        {
            b++;
        }
       if(a%2==1 || a%2==-1)
        {
            c++;
        }
        if(a>0)
        {
            d++;

        }
        if(a<0)
        {
            e++;

        }

    }
    cout<<b<<" valor(es) par(es)"<<endl;
    cout<<c<<" valor(es) impar(es)"<<endl;
    cout<<d<<" valor(es) positivo(s)"<<endl;
    cout<<e<<" valor(es) negativo(s)"<<endl;
    return 0;
}
