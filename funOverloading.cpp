#include<iostream>
using namespace std;

int sum(int a, int b)
{
	return a+b;

}
float sum(float a, float b)
{
	return a+b;
}
int main()
{
	cout<<sum(10,5)<<endl;
	cout<<sum(12.5f,21.45f)<<endl;
	return 0;

}