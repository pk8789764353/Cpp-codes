#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    try
    {
        if (s==0){
        throw (s);
        }
        else
        cout<<"jingalalahuhu";
    }
    catch(int s)
    {
        cout<<"exception occur";
    }
    
}