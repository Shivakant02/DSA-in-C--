#include <bits/stdc++.h>
using namespace std;
string second_repeat(vector<string> &arr, int n)
{
    map<string, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
}
int main()
{
    vector<string> v;
    v.push_back("aaa");
    v.push_back("aba");
    v.push_back("abc");
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}