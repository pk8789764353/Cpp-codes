#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter 1 for addition"<<endl<<"Enter 2 for substration"<<endl<<"Enter 3 for multiplication"<<endl<<"Enter 4 for division"<<endl;
    cin>>n;
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    switch (n)
    {
         case 1:
    cout<<"Sum= "<<a+b<<endl;
        break;
    case 2:
    cout<<"Sub= "<<a-b<<endl;
        break;
    case 3:
    cout<<"Multiplication= "<<a*b<<endl;
        break;
    case 4:
    cout<<"Division"<<a/b<<endl;
         break;       
    default:
    cout<<"You have entered wrong details"<<endl;
        break;
    }
    return 0;
}