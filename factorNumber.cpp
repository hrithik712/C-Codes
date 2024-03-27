#include<iostream>
using namespace std;
int main()
{
    int n, i=1;

    cout<<"Enter a Number ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%1==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}