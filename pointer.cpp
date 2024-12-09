// #include<iostream>
// using namespace std;
// int main(){

// int a,*b;
//  a=45;
//  b=&a;
//  cout<<*b<<endl;
//  cout<<b<<endl;
//  cout<<&b<<endl;
//  cout<<&a<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
int marks[]={4,3,22,55,67,89,7,66};
int *a=marks;//or int*a=&marks[0];


cout<<"First ekement:"<<*a<<endl;
cout<<"Second ekement:"<<*(a++)<<endl;
cout<<"Second ekement:"<<*(++a)<<endl;
cout<<"Third ekement:"<<*(a+2)<<endl;
cout<<"Fourth ekement:"<<*a+3<<endl;
cout<<"Fifth ekement:"<<*a+4<<endl;
    return 0;
}