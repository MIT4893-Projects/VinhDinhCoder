//* 830515	22/08/2023 20:56:02	Minh4893IT	DPSABO - SẮP BÒ	GNU C++20	Accepted	15 ms	1116 KB

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
    int n, k;
    cin >> n >> k;
    vector<int> dp(n + 1);

    k = min(n, k);
    for (int i = 0; i <= k; ++i)
        dp[i] = i + 1;
    for (int i = k + 1; i <= n; ++i)
        dp[i] = (dp[i - 1] + dp[i - k - 1]) % 1000000;
    cout << dp.back();
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
