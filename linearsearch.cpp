#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,n,val,count=0;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for ( i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>val;
    for ( i = 0; i < n; i++)
    {
      if (a[i]==val)
      {
        cout<<"Number is found at "<<i+1<<" position"<<endl;
        count++;
      }
    }
    if (count==0)
    {
       cout<<"Number is not found"<<endl; 
    }
    else
    cout<<"Number found "<<count<<" times"<<endl;
        return 0;
}