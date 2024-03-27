#include<iostream>
using namespace std;
int main()
{
    int n, i=1, fact=1;
    
    cout<<"Enter the Number to find factorial of a Number - ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i; //fact*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;

    return 0;

}