#include<iostream>
using namespace std;
int main()
{
    int a,i,b=1;
    cout<<"Enter your number:"<<endl;
    cin>>a;
    for(i=1;i<=a;i++)
      b=b*i;
    cout<<"The factorial of "<<a<<" is "<<b<<endl;
    return 0;
}