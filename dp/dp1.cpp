#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define out cout <<
#define in cin >>
#define qi queue<int>
#define qc queue<char>
int fibo(int n, vi &dp)
{
    if (n <= 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}
int main()
{
    int n;
    out "enter the no to be calculate:" << endl;
    in n;
    vi dp(n + 1, -1);
    out fibo(n, dp);
    return 0;
}