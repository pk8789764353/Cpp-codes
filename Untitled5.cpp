#include<stdio.h>
int main()
{
	int i,j,k,fac=1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
		fac=fac*i;	
		}
	}
for(i=1;i<=5;i++)
{
	for (j=5;j>i;j--)
	{
		cout(" ");
	}
	for(k=1;k<=(2*i-1);k++)
	{
		cout("*");
	}
	cout("\n");
}

}
