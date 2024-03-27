#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="today";
    string::iterator it;
    for(it=str.begin();it!=str.end();it++) // for(int i=0;str[i]!='\0;i++) by using for loop we can also iterate in string.......
    {
        cout<<*it;   // str[i]=str[i]=32 will change the "today" string to upper case..
    }
    cout<<endl;
    return 0;
}