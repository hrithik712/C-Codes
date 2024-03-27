#include<iostream>
using namespace std;
class base 
{
    public:
    void display()
    {
        cout<<"Display of Base "<<endl;
    }
};   
    class derived: public base 
    {
        public: 
        void display()
        {
            cout<<"Display of Derived "<<endl;
        }
    };
    int main()
    {
        derived d;
        d.display();

    }