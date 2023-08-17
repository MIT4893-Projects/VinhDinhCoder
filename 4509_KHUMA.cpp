//* 825593	17/08/2023 16:22:42	Minh4893IT	KHUMA - Khuyến mãi	GNU C++20	Accepted	15 ms	1116 KB

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

    int result = n;
    while (n >= 10)
    {
        result += n / 10 * 3;
        n = n / 10 * 3 + n % 10;
    }
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
