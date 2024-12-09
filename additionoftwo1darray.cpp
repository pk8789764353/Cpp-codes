#include <iostream>
using namespace std;
int main()
{
    int a[100], b[100], i;
    cout << "Enter the size of arrays less than 100:" << endl;
    int n;
    cin >> n;
    cout << "Enter the elements of first array:"
         << " ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the elements of second array:"
         << " ";
    for (i = 0; i < n; i++)
        cin >> b[i];
    cout << "Added array:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] + b[i] << " ";
    return 0;
}