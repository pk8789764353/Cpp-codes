#include<stdio.h>
int main()
{
	int a[2][3],b[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("Enter the value od a[%d][%d]",i,j);
			cin("%d",&a[i][j]);
			
		}
	}
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("Enter the value od b[%d][%d]",i,j);
			cin("%d",&b[i][j]);
			
		}
	}
	cout("Array:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("%d\t",a[i][j]+b[i][j]);
			
			
		}
		if(j==3)
		{
			cout("\n");
		}
	}
return 0;
}
