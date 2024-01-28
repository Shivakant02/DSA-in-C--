#include <bits/stdc++.h>
using namespace std;
void recInsertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
        return;
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        swap(arr[j - 1], arr[j]);
        j--;
    }
    recInsertionSort(arr, i + 1, n);
}
int main()
{
    vector<int> arr = {3, 2, 4, 1, 5, 6, 7};
    recInsertionSort(arr, 0, arr.size());
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}