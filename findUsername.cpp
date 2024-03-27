#include<iostream>
using namespace std;
int main()
{
    string email="amandeepmishra18@gmail.com";
    int i=(int)email.find('@');
    string uname=email.substr(0,i);

    cout<<"User Name is - "<<uname;
    return 0;
}