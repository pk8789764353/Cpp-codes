#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{

	int n,x,y,v,w;
//	clrscr();
	cout("Enter the value of x\n");
	cin("%d",&x);
    cout("enter the value 0f n");
    cin("%d",&n);
    if(n>0 || n<0)
{

    if(n==1)
	{
    	y=1+x;
    	cout("%d",y);
    }
    	if(n==2)
		{
    		y=1+x/n;
	       cout("%d",y);
	    }
	
		if (n==3)
	   	{
	     	v=pow(x,n);
	     	y=1+v;	
	     	cout("%d",y);	
	    }
	    else
		{
			w=pow(n,x);
			y=1+w;
			cout("%d",y);
		}
		
   
}
//	getch();
return 0;
}
