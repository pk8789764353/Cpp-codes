#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[30]="Priyanshu";
    char s1[30]="Kumar";
    char s2[30];
    cout<<"Enter your choice \n 1 for strcat() \n 2 for strlwr()\n 3 for strcpy()\n 4 for strlen()\n 5 for strrev()";
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
    cout<<strcat(s,s1)<<endl;
        break;
    case 2:
    cout<<strlwr(s)<<","<<strlwr(s1)<<endl;
        break;
    case 3 :
    strcpy(s2,s1);
    cout<<s2<<endl;
        break;   
    case 4 :
    cout<<strlen(s)<<endl;
        break;   
    case 5 :
    cout<<strrev(s)<<endl;
        break; 
     default:
    cout<<"You have entered wrong choice";
        break;
    }
    return 0;

    }