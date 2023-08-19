//* 827736	19/08/2023 18:45:00	Minh4893IT	HOHANG - HỌ HÀNG - HSG 19.20	GNU C++20	Accepted	812 ms	3032 KB

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

    string s1, s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << (s1 == s2) << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
