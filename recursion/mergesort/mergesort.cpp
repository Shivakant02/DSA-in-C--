#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        /* code */ temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        /* code */ temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mS(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    mS(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
vector<int> mergeSort(vector<int> arr, int n)
{
    mS(arr, 0, n - 1);
    return arr;
}
int main()
{
    vector<int> arr = {3, 2, 4, 1, 5, 6, 7};
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> temp = mergeSort(arr, 7);
    for (auto it : temp)
    {
        cout << it << " ";
    }

    return 0;
}