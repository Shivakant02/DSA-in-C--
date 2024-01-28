#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int> &arr, int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}
int main()
{
    vector<int> arr = {9, 14, 15, 12, 6, 8, 13};
    int n = arr.size();
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}