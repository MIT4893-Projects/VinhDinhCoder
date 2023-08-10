//* 818429	10/08/2023 18:46:34	Minh4893IT	SumExpo - Tổng số mũ chẵn lẻ	GNU C++20	Accepted	15 ms	1136 KB

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

    int odd = 0, even = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        int expo = 0;
        while (n % i == 0)
            n /= i, ++expo;
        if (expo % 2)
            odd += expo;
        else
            even += expo;
    }

    odd += n != 1;
    cout << even << endl;
    cout << odd;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
