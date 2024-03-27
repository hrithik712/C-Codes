#include<iostream>
using namespace std;

int max(int a, int b, int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else
    return c;
}
int main()
{
    float x=2.3,y=7.99,z=9.212,r;
    r=max(x,y);
    cout<<r<<endl;
    return 0;

}