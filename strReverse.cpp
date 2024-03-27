#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="today";
    string::reverse_iterator it;

    for(it=str.rbegin();it!=str.rend();it++) // rend will reverse string from right side.....
    {
        cout<<*it;
    }
    cout<<endl;
    return 0;
}