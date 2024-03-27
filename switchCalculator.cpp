#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu for Simple Calculator"<<endl;
    cout<<"1. Add"<<endl<<"2. Subtract"<<endl<<"3. Multiplication "<<endl<<"4. Division"<<endl;

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
        default: cout<<"Please, Enter valid number"<<endl;
    }
    cout<<"Result is - "<<c;
    return 0;
}