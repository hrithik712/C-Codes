#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;

    cout<<a<<endl;   // displaying value of a..............
    cout<<&a<<endl;  // address of a.....................
    cout<<p<<endl;   // p is pointer that is storing address of a...
    cout<<&p<<endl;  // &p is a own varible so it is storing address of p ..
    cout<<*p<<endl;  // the data where p is pointing ............
    return 0;
}
