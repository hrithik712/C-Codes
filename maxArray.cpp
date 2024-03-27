#include<iostream>
using namespace std;
int main()
{
    int A[7]={3,6,21,56,23,45,33};
    int n=7,max;
    max=A[0];
    for(int i=0;i<7;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    cout<<"Maximum in the array is "<<max;
    return 0;

}