#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number:"<<endl;
    int n,b;
    cin>>n;
    for(int i=2;i<=n-1;i++)
   {
    if(n%i==0)
      b=1;    
   }
   if(b==1)
     cout<<"Number is not a prime number"<<endl;
   else 
    cout<<"Number is a prime number"<<endl;  
    return 0;
}