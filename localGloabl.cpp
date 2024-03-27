 #include<iostream>
using namespace std;
int g=5;   // Global Variable...............
void fun()
{
	int a=10;
	a++;
	cout<<a<<endl;
}
int main()
{
	cout<<g;
}