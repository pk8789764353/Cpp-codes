#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int current = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > current)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1]=current;
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d",a[i]);
    }
}
