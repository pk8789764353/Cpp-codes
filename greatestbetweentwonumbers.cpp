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
          cout<<a<<" Is biggest number"<<endl;
        else
          cout<<b<<" Is biggest number"<<endl; 
    }
};
int main()
{
    numbers p;
    p.getvalue();
    p.compare();
    return 0;
}
