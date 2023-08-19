//* 827478	19/08/2023 13:26:51	Minh4893IT	Invert - Số cặp nghịch thế	GNU C++20	Accepted	15 ms	2620 KB

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
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        --l, --r;

        int result = 0;
        for (int i = l; i < r; ++i)
            for (int j = i + 1; j <= r; ++j)
                result += arr[i] > arr[j];
        cout << result << endl;
    }
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
