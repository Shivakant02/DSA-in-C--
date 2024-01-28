#include <bits/stdc++.h>
using namespace std;
bool func(string arr, int i, int n)
{
    if (i >= n / 2)
        return true;
    if (arr[i] != arr[n - i - 1])
        return false;
    return func(arr, i + 1, n);
}
int main()
{
    string arr = "aabbaa";
    cout << func(arr, 0, 6);
    return 0;
}