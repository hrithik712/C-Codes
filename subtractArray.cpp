#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{32,23,12},{10,5,7}};
    int b[2][3]={{23,10,2},{2,1,4}};
    int c[2][3];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}