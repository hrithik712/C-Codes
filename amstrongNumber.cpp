#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter a Number ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        r=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m)
    {
        cout<<"It's Amstrong ";
    }
    else{
        cout<<"Not a Amstrong";
    }
    return 0;
}
