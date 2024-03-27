#include<iostream>
using namespace std;
class rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length*breadth;

	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
// main function using pointers ..............
int main()
{
	rectangle r;
	rectangle *p;
	p=&r;
	r.length=20;
	p->length=30;
	p->breadth=5;
	cout<<"Area of rectangle is " <<p->area()<<endl;
	cout<<"Perimeter of rectangle is "<<p->perimeter()<<endl;
	return 0;
}