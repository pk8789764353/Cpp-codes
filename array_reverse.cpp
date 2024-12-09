#include <iostream>
using namespace std;

int main()
{
    int a[5], i = 0, j = 4;
    cout << "enter numbers";
    for (i; i < 5; i++)
    {
        cin >> a[i];
    }
    // while (i < j)
    // {
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    // }
    cout << "here" << endl;
    for (i=4; i >=0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}