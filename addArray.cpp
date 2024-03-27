#include<iostream>
using namespace std;
int main()
{
    int A[7]={4,3,8,4,5,21,32};
    int n=7, sum=0;
    
    for(int i=0;i<7;i++)
    {
        sum=sum+A[i];

    }
    cout<<"Sum of Array is "<<sum<<endl;
    return 0;
}