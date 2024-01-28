#include <bits/stdc++.h>
using namespace std;
void printfunc(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind >= n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    ds.push_back(arr[ind]);
    printfunc(ind + 1, ds, arr, n);
    ds.pop_back();
    printfunc(ind + 1, ds, arr, n);
}
int main()
{
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printfunc(0, ds, arr, n);

    return 0;
}