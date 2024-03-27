#include<iostream>
using namespace std;
float add(float x, float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    float x=2.334,y=7.673,z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;

}