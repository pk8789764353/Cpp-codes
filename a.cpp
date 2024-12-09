#include<stdio.h>
int main()
{
	int a[50],i,j,s,v,p;
	cout("Enter the size of array");
	cin("%d",&s);
	cout("Enter the elements of array:");
	for(i=0;i<s;i++)
	{
		cin("%d",&a[i]);
	}
	cout("Array:");
	for(i=0;i<s;i++)
	{
		cout("%d ",a[i]);
	}
	cout("\nEnter the place where you want to add new value ");
	cin("%d",&p);
	cout("Enter the new value ");
	cin("%d",&v);

	for(i=s;i>=p-1;i--)
	{
		a[i+1]=a[i];
	//	s=s+1;
	}
	a[p-1]=v;
	cout("Array:");
	for(i=0;i<s+1;i++){
		cout("%d ",a[i]);
	}
	
	
	return 0;
	
}
