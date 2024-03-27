// When we reverse a number and gets the same number after reversing is 
//called palindrome.
#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,m;
    cout<<"Enter a Number to check, it's palindrome number or not - ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
        
    }
    if(m==n)
    cout<<"It's Palindrome Number "<<endl;
    else
    cout<<"Not a Palindrome Number";

    return 0;
}