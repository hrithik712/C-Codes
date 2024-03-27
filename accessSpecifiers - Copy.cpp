#include<iostream>
using namespace std;
class rectangle
{
private: 
	int length;
	int breadth;
public:
	void setLength(int l)
	{
		if(l>0)
			length=1;
		else 
		length=1;
	}
	void setBreadth(int b)
	{
		if(b>0)
			breadth=b;
		breadth=1;
	}
	int getLength(){return length;}
	int getBreadth(){return breadth;}
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	rectangle r1;
	r1.setLength=10;
	r1.setBreadth=15;
	//r1.area(10,15);
	cout<<"Area of Rectangle is "<<r1.area()<<endl;
	return 0;
}