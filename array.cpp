#include<iostream>
using namespace std;
void update(int a[])
{
    a[2]=99;
}
int main()
{
int a[3]={1,2,3},i,j;
update(a);
for(i=0;i<3;i++)
{
	cout<<a[i]<<endl;

}
	


return 0;
}