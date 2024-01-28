#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{

    if (n == 1)
        return;
    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int n = 5;
    int arr[n] = {5, 3, 2, 4, 1};
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}