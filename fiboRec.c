#include<stdio.h>
int fib(int n)
{
	if(n <= 1)
	return n;
	return fib(n-1)+fib(n-2);
}
int main
{
	int n=9;
	printf(" %d Fibonacci number is : ",n,fib(n));

	return 0;
}