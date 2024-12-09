#include<stdio.h>
int main()
{
int a[50]={4,5,6,7,8},i,value,position;
cout("Array before deletion:\n");
for(i=0;i<5;i++)
{
	cout("%d ",a[i]);
}
for(i=2;i<4;i++)
{
	a[i]=a[i+1];
}

cout("\nArray after deletion:\n");
for(i=0;i<4;i++)
{
	cout("%d\n",a[i]);
}



return 0;
}
