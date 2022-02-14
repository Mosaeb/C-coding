#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double G,Msam,DelT,c,M,Q,Ti,Tf,Msh,n,msam,m;
    cout<<"\n enter Msam value:";
    cin>>Msam;
    msam=Msam*(0.001);
    cout<<"\n enter Molar mass:";
    cin>>M;
    m=M*(0.001);
    cout<<"\n Number C solution";
    n=msam/m;
    cout<<"Nuber of moles"<<n;
    cout<<"\n enter added heat ,Q:";
    cin>>Q;
    cout<<"\n Enter Ti:";
    cin>>Ti;
    cout<<"\n Enter Tf:";
    cin>>Tf;
    DelT=Tf-Ti;
    cout<<"\n Number B solution";
    Msh=(Q/(n*DelT));
    cout<<"\n Molar specific heat: "<<Msh;
    return 0;
}
