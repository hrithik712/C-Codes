#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu for Simple Calculator"<<endl;
    cout<<"1. Add \n "<<"2. Subtract \n"<<"3. Multiplication \n"<<"4. Division \n";

    int option;
    cout<<"Enter your Choice - ";
    cin>>option;

    int a,b,c;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>a>>b;

    switch(option)
    {
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c=a*b;
        break;
        case 4: c=a/b;
        break;
        default: cout<<"Invalid Number";
    }
    cout<<"Result is - "<<option;
    return 0;
}