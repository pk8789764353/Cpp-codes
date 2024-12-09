#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6,7,8},i;
for (i=0;i<8;i++)
{
	if(a[0]<a[i])
	{
		a[0]=a[i];
	}
	
}
cout("%d",a[0]);
}
