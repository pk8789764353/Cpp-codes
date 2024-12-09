#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number:"<<endl;
    int n;
    cin>>n;
    int p=n,result=0;
    while (n>0)
    {
       int d;
       d=n%10;
       result=result+d*d*d;
       n=n/10;
    }
    if(result==p)
      cout<<"Given number is an armstrong number"<<endl;
    else
    cout<<"Given number is not an armstrong number"<<endl;  
    return 0;    
}