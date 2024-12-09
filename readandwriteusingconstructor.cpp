#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main()
{
    string s="sjnnhasidfhieuh ruifgdshug";
    string g;
ofstream file("D:\\sample.txt");
if (!file)
cout<<"failed"<<endl;
else{
      file<<s<<endl;
}
file.close();
ifstream a("D:\\sample.txt");
while(!a.eof())
{
    getline(a,g);
    cout<<g;
}
a.close();
return 0;
}