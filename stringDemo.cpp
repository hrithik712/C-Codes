#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter your name - ";
    // cin>>s; this will take only first letter of string.......
    cin.get(s,20);  // .get or .getline will take whole words in string entered .....
    cout<<"Welcome "<<s<<endl;
    return 0;
}