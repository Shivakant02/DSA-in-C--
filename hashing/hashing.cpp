#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // pre calcutate
    int hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    // fetching
    int query;
    cout << "enter the number of queries " << endl;
    cin >> query;

    while (query--)
    {
        cout << "enter the number: " << endl;
        int num;
        cin >> num;
        cout << " frequency = " << hash[num] << endl;
    }
    return 0;
}