#include<iostream>
using namespace std;

class innova
{
    public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int innova::price=20;
int main()
{
    innova i1,i2,i3;
    cout<<i1.price<<endl;
    cout<<i2.price<<endl;

    cout<<innova::price<<endl;
}