#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], i, j;
    cout << "Enter the elements of first array:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "a[" << i << "]"
                 << "[" << j << "]"
                 << "=";
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of second array:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "b[" << i << "]"
                 << "[" << j << "]"
                 << "=";
            cin >> b[i][j];
        }
    }
    cout << "Added array:" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] + a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}