#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 1.55;  // throw 1.5 --- input value for the catch block in double and integer.....
    }
    catch(int e)  // this will handle only a single catch statement in catch block...
    {
        cout<<"Int Catch "<<endl;
    }
    catch(double e) // to handle the double catch statement in catch block...
    {
        cout<<"Double Catch"<<endl;
    }
}