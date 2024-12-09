#include<stdio.h>
int main(){
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("Enter the value of a[%d][%d]",i,j);
			cin("%d",&a[i][j]);
		}
	}
	cout("array:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("%d ",a[i][j]);
			
		}
		if(j==3)
		{
			cout("\n");
		}
			cout("array after adding 9 to each term:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			cout("%d ",a[i][j]+9);
			
		}
		if(j==3)
		{
			cout("\n");
		}
	}
}
	
	return 0;
	
}
