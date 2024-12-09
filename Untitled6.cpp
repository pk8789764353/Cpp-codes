#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++)
{
for(j=5; j>=i; j--){
	cout(" ");
}
	for(k=65;k<(64+2*i);k++)
	{
	cout("%c",k);	
	}
	cout("\n");
}

	}

