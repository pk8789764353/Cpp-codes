#include<stdio.h>
int main()
{
	int a[50],i,s,v;
	cout("\nEnter the size of array:");
	cin("%d",&s);
	cout("\nEnter the elements of array:");
	for(i=0;i<s;i++)
	{
	
	cin("%d",&a[i]);
    }
    cout("Your array is :");
    for(i=0;i<s;i++)
    {
    	cout("%d ",a[i]);
	}
	return 0;
}

