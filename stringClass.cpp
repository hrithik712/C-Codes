#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String - ";
    cin>>str;
    getline(cin,str);
    getline(cin,str); // two times reading a string...........

    cout<<str<<endl;
    return 0;
}