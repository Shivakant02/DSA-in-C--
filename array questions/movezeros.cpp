#include <bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
int main()
{
    vector<int> arr = {1, 0, 2, 0, 4, 0, 0, 5, 4, 0};
    int n = arr.size();
    vector<int> a = moveZeros(n, arr);
    for (auto it : a)
    {
        cout << it << " ";
    }
    return 0;
}