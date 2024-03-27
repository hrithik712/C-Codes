#include<iostream>
using namespace std;
class base
{
public:
	int a;
	void display()
	{
		cout<<"Display of Base "<<a<<endl;
	}
};
class derived: public base
{
public:
	void show()
	{
		cout<<"Show of derived "<<endl;
	}
};
int main()
{
	derived d;
	d.a=100;
	d.display();
	d.show();
}