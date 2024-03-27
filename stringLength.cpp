#include<iostream>
#include<cstring> // string header file for using strln function .....
using namespace std;
int main()
{
    char *s;
    cout<<"Enter a String - ";
    cin.getline(s,100);

    cout<<"Length of String is - "<<strlen(s);   /// function to find length

    return 0;
}