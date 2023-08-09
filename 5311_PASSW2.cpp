//* 817093	09/08/2023 14:16:36	Minh4893IT	PASSW2 - MẬT THƯ - HSG 22-23	GNU C++20	Accepted	46 ms	1140 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        dp[i][i] = 1;

    for (int i = 1; i < n; ++i)
        if (s[i] == s[i - 1])
            dp[i - 1][i] = 2;

    for (int i = n - 1; i >= 0; --i)
        for (int j = i + 2; j < n; ++j)
            if (s[i] == s[j] && dp[i + 1][j - 1])
                dp[i][j] = dp[i + 1][j - 1] + 2;

    int result = 0;
    for (int i = 0; i < n; ++i)
        result = max(result, *max_element(dp[i].begin(), dp[i].end()));
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
