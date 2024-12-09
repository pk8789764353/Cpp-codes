#include<iostream>
// #include<math.h>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    float s,area;
    cout<<"Enter the first side of triangle"<<endl;
     cin>>a;
    cout<<"Enter the second side of triangle"<<endl;
     cin>>b;
    cout<<"Enter the third side of triangle"<<endl;
     cin>>c;
    s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"The area of the triangle is  "<<area<<endl;
return 0;   
}