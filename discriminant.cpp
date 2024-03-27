#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;

    cout<<"Enter value of a, b and c - "<<endl;
    cin>>a>>b>>c;

    d = (b*b-4*a*c);

    if(d==0){
        cout<<"Roots are real and equal "<<endl;
        cout<<"Value is - "<<(-b/(2*a))<<endl;
    }
    else if(d>0){
        cout<<"Roots are real and Equal"<<endl;
        cout<<"Value is - "<<(-b+sqrt(d))/(2*a)<<endl;
    }
    else{
        cout<<"Roots are Imaginary ";
    }
    return 0;

}