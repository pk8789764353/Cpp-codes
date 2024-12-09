#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,e;
 cout<<"Enter five numbers"<<endl;
 cin>>a>>b>>c>>d>>e;  
  if(a>b&&a>c&&a>d&&a>e)
 cout<<a<<" Is bigger"<<endl;
  if(b>a&&b>c&&b>d&&b>e)
 cout<<b<<" Is bigger"<<endl;
  if(c>a&&c>b&&c>d&&c>e) 
    cout<<c<<" Is bigger"<<endl;   
  if(d>a&&d>b&&d>c&&d>e) 
    cout<<d<<" Is bigger"<<endl;
   if(e>a&&e>b&&e>c&&e>d)  
    cout<<e<<" Is bigger"<<endl; 
    return 0;  
}