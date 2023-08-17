//* 825779	17/08/2023 20:57:56	Minh4893IT	XOASO - XOÁ SỐ	GNU C++20	Accepted	31 ms	2724 KB

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
    string s;
    cin >> s;

    int n = s.size();
    vector<int> pref(n + 1);
    for (int i = 1; i <= n; ++i)
        pref[i] = pref[i - 1] + s[i - 1] - '0';

    vector<int> countmod = {1, 0, 0};
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += countmod[((pref[i] - pref.back()) % 3 + 3) % 3];
        ++countmod[pref[i] % 3];
    }

    cout << result - (pref.back() % 3 != 0);
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
