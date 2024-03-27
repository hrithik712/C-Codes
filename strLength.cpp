#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Welcome to C++";
    string::iterator it;
    int count=0;
    for(it=str.begin();it!=str.end();it++)  // tells the length of string by using iterator...
    {
        count++; 
    }
    cout<<"Length of string is - "<<count<<endl;
    return 0;
}