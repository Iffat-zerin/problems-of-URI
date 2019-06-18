#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d;

    f=(a*2+b*3+c*4+d*1)/10;
    cout<<fixed<<setprecision(1);
    cout<<"Media: "<<f<<endl;


    if(f>=7.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(f<5.0)
    {
        cout<<"Aluno reprovado."<<endl;
    }

    else if(f>=5.0 && f<=6.9)
    {
    cout<<"Aluno em exame."<<endl;
    cin>>e;
    cout<<"Nota do exame: "<<e<<endl;
    g=(f+e)/2;

    if(g>=5.0)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(g<=4.9)
    {
        cout<<"Aluno reprovado."<<endl;
    }
cout<<"Media final: "<<g<<endl;

    }

    //cout<<"Media final: "<<g<<endl;

    return 0;
}
