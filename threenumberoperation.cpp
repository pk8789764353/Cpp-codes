#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum,sub,mul;
    cout<<"Enter the first,second,third number: "<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    sub=a-b-c;
    mul=a*b*c;
    cout<<"Addition= "<<sum<<endl<<"Subtraction= "<<sub<<endl<<"Multiplication= "<<mul<<endl;
    return 0;
}