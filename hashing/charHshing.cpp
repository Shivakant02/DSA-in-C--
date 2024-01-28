#include <bits/stdc++.h>
using namespace std;

int main()
{

    string S = "abbacabc";

    int l = S.length();
    // int hash[26] = {0};
    // for (int i = 0; i < l; i++)
    // {
    //     hash[S[i] - 'a'] += 1;
    // }
    // cout << hash['b' - 'a'];
    map<char, int> mpp;
    for (int i = 0; i < l; i++)
    {
        mpp[S[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}