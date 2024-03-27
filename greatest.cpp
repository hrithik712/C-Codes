#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 Numbers : "<<endl;
    cin>>a >> b >> c;
    if (a>b && a>c)
    {
        cout<< a <<" is the greatest Number."<<endl;

    }

    else if (b>c && b>a)
    {
        cout<< b <<" is greatest Number. "<<endl;
    }
    else{
        cout<<c <<" is greatest Number"<<endl;
    }
    return 0;

}