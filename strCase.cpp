#include<iostream>
using namespace std;
int main()
{
    string str="WelcoMe7";
    for(int i=0;i!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}