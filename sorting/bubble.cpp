#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    // last sy pehly tk last wala hamesha largest hojata har pass k bad
    for (int i = 0; i < n - 1; i++)
    {
        // 4
        for (int j = 0; j < n - i - 1; j++)
        {
            // condition
            // 5 - 0 - 1 = 4 ..... 0 to 3
            // 5 - 1 - 1 = 3 .... 0 to 2
            // 5 - 2 - 1 = 2.... 0 to 1

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        if (mini != i)
        {
            swap(arr[mini], arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 2, 1, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);

    return 0;
}