#include<stdio.h>
int main()
{
int a[50],b[50],i,s1,s2;
cout("Enter the size of first array");
cin("%d",&s1);
cout("Enter the elements of first array:");
for(i=0;i<s1;i++)
{
	cin("%d",&a[i]);
}
cout("Enter the size of second array");
cin("%d",&s2);
cout("Enter the elements of second array:");
for(i=0;i<s2;i++)
{
	cin("%d",&b[i]);
}
for(i=0;i<s1+s2;i++)
{
	a[s1+i]=b[i];
}
cout("\nArray after merging:");
for(i=0;i<s1+s2;i++)
{
	cout("%d ",a[i]);
}
return 0;
}
