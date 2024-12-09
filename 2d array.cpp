#include<stdio.h>
int main()
{
int a[3][3],i,j;
//a[2][2]=56;
//a[1][1]=0;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{cout("Enter the value a[%d][%d]:",i,j);
		cin("%d",&a[i][j]);
	}

	}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		cout("%d ",a[i][j]);
	}
	if(j==3)
	{
		cout("\n");
	}

	}


return 0;
}
