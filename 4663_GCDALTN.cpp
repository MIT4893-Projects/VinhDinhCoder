//* 827557	19/08/2023 15:14:36	Minh4893IT	GCDALTN - GCD LUỸ THỪA	GNU C++20	Accepted	15 ms	1116 KB

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

map<int, int> factorize(int n)
{
    map<int, int> result;
    for (int i = 2; i * i <= n; ++i)
        while (n % i == 0)
            n /= i, ++result[i];

    if (n != 1)
        ++result[n];
    return result;
}

int expo(int a, int b)
{
    if (!b)
        return 1;
    int t = expo(a, b / 2);
    return t * t * IF(b % 2, a, 1);
}

void solve()
{
    int a, n, b;
    cin >> a >> b >> n;

    map<int, int> fa = factorize(a), fb = factorize(b);
    for (auto &elem : fa)
        elem.second *= n;

    int result = 1;
    for (auto elem : fb)
        result *= expo(elem.first, min(fa[elem.first], elem.second));
    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
