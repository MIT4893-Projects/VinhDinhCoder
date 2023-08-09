//* 817107	09/08/2023 14:33:59	Minh4893IT	DEMXAUDX - Xâu con đối xứng - HSG 17.18	GNU C++20	Accepted	125 ms	11160 KB

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
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    s = ' ' + s;
    ++n;

    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 1; i < n; ++i)
        dp[i][i] = true;
    for (int i = 2; i < n; ++i)
        dp[i - 1][i] = s[i] == s[i - 1];

    for (int i = n - 1; i >= 1; --i)
        for (int j = i + 2; j < n; ++j)
            dp[i][j] = s[i] == s[j] && dp[i + 1][j - 1];

    vector<vector<int>> pref(n, vector<int>(n));
    for (int i = 1; i < n; ++i)
        for (int j = 1; j < n; ++j)
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + dp[i][j];

    while (t--)
    {
        int i, j;
        cin >> i >> j;

        cout << pref[j][j] - pref[i - 1][j] - pref[j][i - 1] + pref[i - 1][i - 1] << endl;
    }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
