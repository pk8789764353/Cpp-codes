#include<stdio.h>
//int factorial(int n);
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	return n*factorial(n-1);
	
}
int main()
{
	int n;
	cout("\nEnter the value of n");
	cin("%d",&n);
	factorial(n);
	cout("Factorial of %d is %d",n,factorial(n));
	return 0;
}
