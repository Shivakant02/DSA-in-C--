#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    func(arr, i + 1, n);
}

int main()
{
    int arr[5] = {2, 3, 4, 1, 5};
    func(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    return 0;
}