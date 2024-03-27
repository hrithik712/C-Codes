#include<iostream>
using namespace std;
int main()
{
    try
    {
        throw 1.5;
    }
    catch(int e)
    {
        cout<<"Int Catch"<<endl;
    }
    catch (double e)
    {
        cout<<"Double Catch "<<endl;
    }
    catch(...) /// not interested in knowing the exact cause of exception....
    {
        cout<<"All Catch"<<endl;
    }
}