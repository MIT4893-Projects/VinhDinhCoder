//* 830538	22/08/2023 21:15:14	Minh4893IT	DPSUBSEG - ĐOẠN CON	GNU C++20	Accepted	218 ms	5600 KB

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
    int n;
    cin >> n;
    vector<int> dp(n + 1, 1), arr(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    for (int i = n - 1; i >= 1; --i)
        if (arr[i] / abs(arr[i]) != arr[i + 1] / abs(arr[i + 1]))
            dp[i] = dp[i + 1] + 1;

    for (int i = 1; i <= n; ++i)
        cout << dp[i] << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
