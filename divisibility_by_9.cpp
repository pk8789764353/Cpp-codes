#include<stdio.h>
int main()
{
	int a;
	cout("enter the number");
	cin("%d,&a");
	if(a%9==0 && a%5==0)
	cout("number is divisible by 9 and 5 both");
	else if(a%5==0)
	cout("Number is divisible by 5 only");
	else if(a%9==0)
	cout("Number is divisible by 9 only");
//	else
//	cout("Number is not divisible by 9 and 5");
	return 0;
	
	
}


