#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int value)
{

    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (value == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] > value)
        {
            high = mid - 1;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, size, 0);
    return 0;
}