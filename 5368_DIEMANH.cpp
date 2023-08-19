//* 826927	18/08/2023 21:37:15	Minh4893IT	DIEMANH - ĐIỂM ẢNH	GNU C++20	Accepted	78 ms	10396 KB

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
    vector<int> count(1000001);
    int n;
    cin >> n;

    while(n--)
    {
        int val;
        cin >> val;
        ++count[val];
    }

    cout << *max_element(count.begin(), count.end());
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
