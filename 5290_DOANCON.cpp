//* 819094	11/08/2023 09:38:44	Minh4893IT	DOANCON - ĐOẠN CON - HSG 18.19	GNU C++20	Accepted	312 ms	5568 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    vector<int> dp(n, 1);
    for (int i = n - 2; i >= 0; --i)
        if (arr[i] / abs(arr[i]) != arr[i + 1] / abs(arr[i + 1]))
            dp[i] = dp[i + 1] + 1;
    
    for (auto elem : dp)
        cout << elem << ' ';
    cout << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
