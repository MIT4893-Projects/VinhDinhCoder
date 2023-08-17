//* 825574	17/08/2023 16:13:38	Minh4893IT	BUS - XE BUS - HSG 21.22	GNU C++20	Accepted	453 ms	4952 KB

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

    cout << accumulate(arr.begin(), arr.begin() + k, 0ll);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
