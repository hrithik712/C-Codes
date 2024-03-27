// Take a Number and display digits in words 
// ex- 12 -> One Two
#include<iostream>
using namespace std;
int main()
{
    int n,r,sum,rev=0;

    cout<<"Enter a Number ";
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r; // Reverses a Number
        // sum=sum+r; Prints the sum of Number 
        // cout<<r<<endl; For printing reverse of Number 
        
    }
    cout<<rev<<endl;
    return 0;
}
