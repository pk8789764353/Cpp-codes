#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your number:"<<endl;
    cin>>a;
    if(a%5==0&&a%10==0&&a%15==0)
    cout<<"Given number is divisible by 5or10or15 "<<endl;
    else
    cout<<"Given number is not divisible by 5or10or15 "<<endl;
    return 0;
}