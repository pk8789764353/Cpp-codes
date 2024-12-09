#include <iostream>
using namespace std;
int main()
{
  int s, e, n, mid, val, i, a[100];
  cout << "\nEnter the size of array:\n";
  cin >> n;
  cout << "\nEnter the sorted array:\n";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << "\nEnter the value you want to search:\n";
  cin >> val;
  s = 0;
  e = n - 1;
  mid = (s + e) / 2;
  while ((s <= e) && (a[mid] != val))
  {
    if (a[mid] < val)
      s = mid + 1;
    else
    {
      e = mid - 1;
      mid = (s + e) / 2;
    }
  }
  if (a[mid] = val)

  {
    cout << "Value found at " << mid + 1 << " position\n";
  }
  else
  {
    cout << "\nVAlue not found in array";
  }

  return 0;
}