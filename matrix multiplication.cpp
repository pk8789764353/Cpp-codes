#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,k,sum,p,q,r,s;
	cout("Enter the value of row and column of 1st array:");
	cin("%d%d",&p,&q);
	cout("Enter the value of row and column of 2nd array:");
	cin("%d%d",&r,&s);
	if(q==r)
	{

	
	cout("1st array:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
	    	cout("enter the value of a[%d][%d]:",i,j);
			cin("%d",&a[i][j]);
		}
	}
		cout("2nd array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
		cout("enter the value of b[%d][%d]",i,j);
			cin("%d",&b[i][j]);
		}
	}
		cout("1st array:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout("%d\t",a[i][j]);
	}
	cout("\n");
	}
	
		cout("2nd array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<s;j++)
		{
			cout("%d\t",b[i][j]);
	    }
	      cout("\n");
    }
    
    
    for(i=0;i<p;i++)
    {
    	for(j=0;j<s;j++)
    	{
    		sum=0;
    		for(k=0;i<p;k++)
    		{
    		sum=sum+(a[i][k]*b[k][j]);
				
			}
			c[i][j]=sum;
		}
	}
	cout("a");
	cout("Multiplication matrix:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
		{
			cout("%d\t",c[i][j]);
	}
	cout("\n");
	}
	
}


	
 else
{
cout("multiplication is not possible");
}
	return 0;
}

