#include<iostream>
using namespace std;
class car
{
    public:
    virtual void start()
    {
        cout<<"Car Started"<<endl;
    }   
};
class innova: public car
{
    public:
    void start()
    {
        cout<<"Innova Started"<<endl;
    }
};
class swift: public car
{
    void start ()
    {
        cout<<"Swift Started "<<endl;
    }
};
int main()
{
    car *p=new innova();
    p-> start();
    p=new swift();
    p-> start();
}