//* 827578	19/08/2023 15:29:38	Minh4893IT	CHONDUA - CHỌN ĐŨA - HSG 19.20	GNU C++20	Accepted	843 ms	18796 KB

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

    map<int, int> count;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        ++count[val];
        ++sum;
    }

    int result = 0;
    for (int i = 0; i < n; ++i)
        result += sum - count[arr[i]];
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
