// Call by reference ..................
#include<iostream>
using namespace std;
int swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a=12,b=14;
	swap(a,b);
	cout<<a<<" "<<b;
	return 0;
}