#include <iostream>
#include <cmath>
using namespace std;


int main()
{

    double M= 50,Q=314,Ti=25,Tf= 45;
    double G=(50*0.001);
    double Msam= (30*0.001);
    double DelT;
    double c;
    DelT= (Tf-Ti);
    cout<<"Number A solution";
    c=(Q/(Msam*DelT));
    cout<<"\n Specific Heat: "<< c;

    cout<<"\n Number A solution";



    return 0;
}
