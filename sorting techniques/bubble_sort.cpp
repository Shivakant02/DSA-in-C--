#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
}
int main()
{

    vector<int> arr = {2, 5, 3, 6, 1, 4};
    bubble_sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}