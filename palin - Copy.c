#include<stdio.h>
int main()
{
	int temp, n, sum=0, r;

	printf("Enter the Number to check for palindrome  \n");
	scanf("%d ", &n);

	temp = n;

	while(n>0)
	{
		r = n % 10;
		sum = (sum % 10 ) + r;
		n = n / 10;
	}
	if(temp == sum)
		printf("It is palindrome : ");
	else
		printf("Not a palindrome");
	return 0;


}