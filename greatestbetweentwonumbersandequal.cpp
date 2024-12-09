#include<iostream>
using namespace std;
class numbers
{
    private:
    int a,b;
    public:
    void getvalue()
    {
        cout<<"Enter any two numbers:"<<endl;
        cin>>a>>b;
    }
    void compare()
    {
        if(a>b)
          cout<<a<<" Is biggest number and both number are not equal"<<endl;
        else if(a==b)
          cout<<"Both numbers are equal"<<endl;  
        else 
          cout<<b<<" Is biggest number and both number are not equal"<<endl; 
    }
}p;
int main()
{
    p.getvalue();
    p.compare();
    return 0;
}
