#include<iostream>
using namespace std;
int main()
{
    int n,i;
    float num[100], sum=0.0, average;

    cout<<"Enter the Number of elements - ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". Enter Number ";
        cin>>num[i];
        sum+=num[i];
    }
    average=sum/n;
    cout<<"Average = "<<average;
    return 0;
}