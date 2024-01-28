#include <bits/stdc++.h>
using namespace std;
int BS(vector<int> &arr, int target)
{
    int l = 0;
    int n = arr.size();
    int h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 9};

    int target = 10;

    cout << BS(arr, target);
    return 0;
}