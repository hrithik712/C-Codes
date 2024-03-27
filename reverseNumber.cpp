#include<iostream>
using namespace std;
int main()
{
    int n,r,m,rev=0;
    cout<<"Enter a Number to reverse - ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"Reversed Number is - "<<rev;
    return 0;
}