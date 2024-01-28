#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qS(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex + 1, high);
    }
}
vector<int> quckSort(vector<int> arr)
{
    qS(arr, 0, arr.size() - 1);
    return arr;
}
int main()
{
    vector<int> arr = {4, 1, 2, 7, 5, 3, 8};
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> temp = quckSort(arr);
    for (auto it : temp)
    {
        cout << it << " ";
    }
    return 0;
}