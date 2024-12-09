#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string str="hglkjagh",jkl="kjdgkhjkghjdkghljkfhg";
    cout<<str.append(jkl)<<endl;   
    cout<<str[4];
    for(int i=0;i<sizeof(str);i++)
    cout<<str[i]<<endl;
    double x;
    int p;
    cout<<sizeof(x)<<endl;
    cout<<jkl.length()<<endl;
    cout<<sizeof(jkl)<<endl;
    return 0;
}