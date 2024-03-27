#include<iostream>
using namespace std;
class parent 
{
private: int a;
protected: int b;
public: int c;

	void funParent()
	{
		a=10;
		b=5;
		c=15;
	}
};
class child: protected Parent
{
public:
	void funChild()
	{
		a=10;
		b=5;
		c=15;
	}
};
class child: public parent{
public:
	void funChild()
	{
		a=10;
		b=5;
		c=15;
	}
};
class grandChild: public Child{
	public :
	void funGrandChild()
	{
		// a=10;
		b=5;
		c=20;
	}
};
int main()
{
	child c;
	//c.a=10;
	c.b=5;
	c.c=20;

}