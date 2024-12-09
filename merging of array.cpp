#include<stdio.h>
int main()
{
int a[]={2,3,4,5,6,7,8,9,0},i,item,b=0;

cout("Enter the item to be search in array:");
cin("%d",&item);
for(i=0;i<9;i++)
{
	if(a[i]==item)
	{b=1;
	break;
	}
}
if(b==1)
{
	cout("\nITem is present in array at %d position",i+1);
}
else
cout("\nITem is not present in array ");

return 0;
}
