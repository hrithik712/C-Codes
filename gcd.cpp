// Substract greater number with smaller number until it becomes 1.
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter 2 Number - ";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
    }
    cout<<"GCD is "<<m<<endl;
    return 0;
}