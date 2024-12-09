#include<stdio.h>
int disp(int b[],int s);
int main()
{
	int a[]={1,2,3,4,5,6},s;
	s=sizeof(a)/sizeof(a[0]);
	disp(a,s);
	cout("\nsum=%d ",disp(a,s));
	return 0;
}
int disp(int b[],int s)
{
	int i,sum=0;
	for(i=0;i<s;i++)
	{
		cout("%d ",b[i]);
	}
	for(i=0;i<s;i++)
	{
		sum=sum+b[i];
	}
	return sum;
}
