#include<iostream>
using namespace std;
int main()
{
    int a,b,i,sum=0;
    cin>>a>>b;
    if(a>b || a==b){
    for(i=b+1; i<a; i++)
    {
        if(i%2==1 || i%2==-1)
        {
            sum=sum+i;
        }

    }
    cout<<sum<<endl;
    }
    return 0;
}
