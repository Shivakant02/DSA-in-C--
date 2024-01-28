#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
    }
}
int main()
{
    int n = 6;
    int arr[n] = {2, 5, 1, 6, 1, 4};
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}