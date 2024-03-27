#include<iostream>
using namespace std; 
int main()
{
    int A[2][3]={{28,49,109},{34,32,56}};
    int B[2][3]={{12,34,45},{23,21,34}};
    int C[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}