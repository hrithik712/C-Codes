#include<iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		fun(n-1); // print number from 1 to 5..............
		cout<<n<<endl;
		// fun(n-1); print the number from 5 to 1..........
	}
}
int main()
{
	int x=5;
	fun(x);
	return 0;
}