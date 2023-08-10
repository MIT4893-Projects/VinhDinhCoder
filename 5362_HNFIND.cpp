//* 818455	10/08/2023 19:15:51	Minh4893IT	HNFIND - TÌM GIỮA	GNU C++20	Accepted	15 ms	1136 KB

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

int sum(int a)
{
    return a * (a + 1) / 2;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    int low = l, high = r;
    int res = l;
    int diff = LLMAX;
    while (low <= high)
    {
        int m = (low + high) / 2;

        int leftpart = sum(m) - sum(l - 1);
        int rightpart = sum(r) - sum(m);
        if (abs(rightpart - leftpart) < abs(diff))
        {
            res = m;
            diff = rightpart - leftpart;
        }

        if (rightpart - leftpart > 0)
            low = m + 1;
        else
            high = m - 1;
    }

    cout << res;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
