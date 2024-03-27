#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[20]="How is ";
    char s2[20]="the Josh";
    strcat(s1,s2); // By using strncat(); we can concatinate upto how much length we want.

    cout<<s1<<endl;

    return 0;
}