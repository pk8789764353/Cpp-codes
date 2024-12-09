#include<stdio.h>
int main()
{
	int i,a[20][8],*p;
	cout("Enter the name of 20 students");
	p=&a[0][0];
	for(i=0;i<6;i++)
	{
	
		cin("\n%s",p);
	}
		for(i=0;i<6;i++)
	{
		cout("%s\t",*p);
	}
	return 0;
	
}
