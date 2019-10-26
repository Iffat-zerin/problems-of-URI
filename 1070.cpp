#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(i=a; i<a+12; i++)
    {
        if(i%2==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
