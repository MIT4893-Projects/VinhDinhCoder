//* 817096	09/08/2023 14:21:15	Minh4893IT	TRAMBOM - TRAMBOM - HSG 16.17	GNU C++20	Accepted	109 ms	3380 KB

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

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int result = LLMAX;
    for (int i = k - 1; i < n; ++i)
        result = min(result, arr[i] - arr[i - k + 1]);
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
