#include<iostream> 
using namespace std;
int main()
{
    string str;
    cout<<"May I know your name"<<endl;
    getline(cin, str);

    cout<<"Hello "<<str;
}