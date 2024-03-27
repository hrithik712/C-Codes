#include<iostream>
using namespace std;
int main()
{
    char s[30];
    char s2[30];

    cout<<"Enter your name - ";
    cin.get(s, 30);

    cin.ignore(); // this will ignore all other things in string declaration and will
                  // execute line by line ...........If not using .geline();
    cout<<"Enter your name again! - ";
    cin.get(s2,30);

    cout<<"Welcome "<<s2<<endl;

    return 0;

}