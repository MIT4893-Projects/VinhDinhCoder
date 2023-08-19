//* 827470	19/08/2023 13:20:18	Minh4893IT	CHIAQUA - CHIA QUÀ	GNU C++20	Accepted	15 ms	1116 KB

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

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int x, y;
    cin >> x >> y;

    int g = gcd(x, y);
    int result = 0;
    for (int i = 1; i * i <= g; ++i)
        if (g % i == 0)
            result += 1 + (i != g / i);
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
