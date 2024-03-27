#include<iostream>
using namespace std;
int main()
{
    char A[]={'A', 66, 'C', 69};

    for(auto x:A) // for each loop    // auto will take from itself.
    cout<<x<<endl;

    return 0;
}