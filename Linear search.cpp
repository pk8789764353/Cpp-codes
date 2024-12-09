#include<conio.h>
#include<stdio.h>
int main()
{
    int a[100],i,n,val,count=0;
    cout("Enter the size of array:");
    cin("%d",&n);
    cout("Enter the elements of array:");
    for ( i = 0; i <n; i++)
    {
        cin("%d",&a[i]);
    }
    cout("Enter the element you want to search;");
    cin("%d",&val);
    for ( i = 0; i < n; i++)
    {
      if (a[i]==val)
      {
        cout("Number is found at %d position",i+1);
        count++;
      }
    }
    if (count==0)
    {
       cout("Number is not found"); 
    }
    else
    cout("Number found %d times",count);
    return 0;
}