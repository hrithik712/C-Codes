#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter a Number for printing table ";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
        // number * i = result (i*n)
    }
    return 0;
}
