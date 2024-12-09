#include<iostream>
using namespace std;
int main()
{
    try{
        try{
            int a;
            cin>>a;
            if (a!=0)
            throw 22;
           } 
        catch (int a)
        {
        cout<<"integer type exception in inner block"<<endl;  
        throw "7"; }
    }
    catch(int f)
    {
        cout<<"exception in outer block"<<endl;
    }
}