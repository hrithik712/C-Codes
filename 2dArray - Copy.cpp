#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={{4,5,23}, {5,12,45}};
    for(int i=0;i<2;i++)   // for(auto &x: A)   use of for each loop....
    {
        for(int j=0;j<3;j++)  // for(auto &x:Y)
        {
            cout<<A[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}