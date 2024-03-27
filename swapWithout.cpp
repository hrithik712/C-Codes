#include<iostream>
using namespace std;
int main()
{
	int x,y;

	cout<<"Enter first Number - "<<endl;
	cin>>x;
	cout<<"Entr the second Number - "<<endl;
	cin>>y;
	
	x=x+y;
	y=x-y;
	x=x-y;

	cout<<"After swapping x = "<<x<<" and y = "<<y<<endl;
	return 0;
}