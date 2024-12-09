// #include <iostream>
// using namespace std;
// void merge(int arr[], int s, int mid, int e)
// {
//     int n1, n2;
//     n1 = mid - s + 1;
//     n2 = e - mid;
//     int a[n1], b[n2];
//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[i + s];
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }
//     int i = 0, j = 0, k = s;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i + s];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < n1)
//     {
//         arr[k] = a[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];
//         j++;
//         k++;
//     }
// }
// void mergesort(int arr[], int s, int e)
// {

//     if (s < e)
//     {
//         int mid = (e + s) / 2;
//         mergesort(arr, s, mid);
//         mergesort(arr, mid + 1, e);
//         merge(arr, s, mid, e);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int s, e;
//     s = 0;
//     e = n - 1;
//     mergesort(arr, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
#include <iostream>

using namespace std;

/* Function to merge the subarrays of a[] */
void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2]; // temporary arrays

    /* copy data to temp arrays */
    for (int i = 0; i < n1; i++)
        LeftArray[i] = a[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = a[mid + 1 + j];

    i = 0;   /* initial index of first sub-array */
    j = 0;   /* initial index of second sub-array */
    k = beg; /* initial index of merged sub-array */

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

/* Function to print the array */
void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[] = {11, 30, 24, 7, 31, 16, 39, 41};
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Before sorting array elements are - \n";
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    cout << "\nAfter sorting array elements are - \n";
    printArray(a, n);
    return 0;
}