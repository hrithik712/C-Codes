#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
    char s1[20]="Good";
    char s2[20]="";
    strncpy(s2,s1,2);
    cout<<s2;
    return 0;
}