//* 827565	19/08/2023 15:22:52	Minh4893IT	QUYENGOP - QUYÊN GÓP - HSG 18.19	GNU C++20	Accepted	15 ms	1116 KB

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

    int numOfSquare = sqrt(n);
    cout << n * (n + 1) / 2 - numOfSquare * (numOfSquare + 1) * (2 * numOfSquare + 1) / 6;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
