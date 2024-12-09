#include<iostream>
using namespace std;
class a
{
 int x;
 public:
 a()
 {
    cout<<"Enter your number:"<<endl;
    cin>>x;
 }
 a(a &t)
 {
    x=t.x;
    cout<<x<<endl;
 }
};
int main()
{
    a d;
    a h(d);
}