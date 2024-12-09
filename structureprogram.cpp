#include<iostream>
using namespace std;
struct student
{
    char name[30];
    int roll_number;
    int marks;
};
int main()
{
 student s;
 cout<<"Enter the name of student:"<<endl;
 cin>>s.name; 
 cout<<"Enter the roll number of student:"<<endl;
 cin>>s.roll_number; 
 cout<<"Enter the marks of student:"<<endl;
 cin>>s.marks; 
 cout<<"Name of student = "<<s.name<<endl;
 cout<<"Roll number of student = "<<s.roll_number<<endl;
 cout<<"Marks of student = "<<s.marks<<endl;
 return 0;
}