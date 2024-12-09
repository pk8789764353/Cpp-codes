#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	cout("Enter the size");
	cin("%d",&n);
	ptr =(int* )malloc(n*sizeof(int));
	cout("enter the elements");
	for(i=0;i<n;i++)
	{
		cin("%d",(ptr+i));
	}
	cout("Elements are:");
	for(i=0;i<n;i++)
	{
		cout("%d ",*(ptr+i));
	}
	return 0;
}
