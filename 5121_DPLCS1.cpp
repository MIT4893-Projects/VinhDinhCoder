//* 818095	10/08/2023 13:24:21	Minh4893IT	DPLCS1 - XÂU CON CHUNG 1	GNU C++20	Accepted	171 ms	35308 KB

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
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    s1 = ' ' + s1;
    s2 = ' ' + s2;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    int result = 0;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (s1[i] == s2[j])
                result = max(result, dp[i][j] = dp[i - 1][j - 1] + 1);
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
