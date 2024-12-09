#include<iostream>
using namespace std;
class a
{
    int a,b;
    public:
    void getdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void showdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;

    }
};

int main()
{

a e;
e.getdata(5,4);
e.showdata();


return 0;
}