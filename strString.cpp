#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="Programming";
    char s2[20]="gram";   // if substring is not found it will throw run time error..
    cout<<strstr(s2,s2)<<endl;
    return 0;
}
