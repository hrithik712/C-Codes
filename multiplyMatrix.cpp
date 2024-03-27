#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][3]={{10,20,30},{11,21,31}};
    int c[3][3];


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" "<<endl;
        }
    }
    cout<<endl;
    return 0;
}