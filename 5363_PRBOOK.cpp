//* 818460	10/08/2023 19:22:27	Minh4893IT	PRBOOK - SÁCH CŨ	GNU C++20	Accepted	1171 ms	19856 KB

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

    int zero = 0;
    int sum = 0;
    vector<int> count(10);
    for (auto &c : s)
    {
        ++count[c - '0'];
        sum += c - '0';
        zero += c == '0';
    }

    if (zero == 0 || sum % 3)
    {
        cout << -1;
        return;
    }

    for (int i = 9; i >= 0; --i)
        while (count[i]--)
            cout << i;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
