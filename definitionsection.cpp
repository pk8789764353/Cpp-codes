#include<iostream>
using namespace std;
#define n 5
typedef int INTEGER;
INTEGER main()
{
  INTEGER a[n];
  INTEGER i;
  for(i=0;i<n;i++)
  {
  cin>>a[i];
  }
  for(i=0;i<n;i++)
  {
  cout<<a[i];
  }
  return 0;
}