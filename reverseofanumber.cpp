#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your number:"<<endl;
    int n,rev=0;
    cin>>n;
    int p=n;
    while (n>0)
    {
       int d;
       d=n%10;
       rev=rev*10+d;
       n=n/10;
    }
    cout<<"Reverse of "<<p<<" is "<<rev;
    return 0;    
}