#include<iostream>
using namespace std;
int main()
{
    int a,i,d=0;
    for(i=0; i<5; i++)
    {
        cin>>a;
        if(a%2==0)
        {
            d++;
        }

    }
    cout<<d<<" valores pares"<<endl;
    return 0;
}
