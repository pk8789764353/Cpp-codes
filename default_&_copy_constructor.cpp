#include<iostream>
using namespace std;
class a
{
    public:
a(){
cout<<"This is default constructor"<<endl;
    }
a(int r,int k)
{
cout<<r+k<<endl;
}


};
 main()
 {
    a f;
    a s(5,6);
return 0;
 }
