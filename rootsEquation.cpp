#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;

    cout<<"Enter values of a, b, c"<<endl;
    cin>>a>>b>>b;

    r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b-4*a*c))/(2*a);

    cout<<"r1 roots - "<<r1<<endl<<"r2 roots - "<<r2<<endl;

    return 0;
}