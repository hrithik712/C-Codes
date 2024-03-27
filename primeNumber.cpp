#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;

    cout<<"Enter a Number ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
    return 0;
}