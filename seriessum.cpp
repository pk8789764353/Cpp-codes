#include<iostream>
using namespace std;
int main()
{
    float i,j,n,b=1,c=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        b=b*i;
        c=c+i/b;        
    }
    cout<<c<<endl;
    return 0;     
}