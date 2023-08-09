//* 816713	09/08/2023 08:37:01	Minh4893IT	XAUHP - XÂU HẠNH PHÚC - HSG 16.17	GNU C++20	Accepted	15 ms	2664 KB

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
    string s1;
    cin >> s1;
    string s2(s1.rbegin(), s1.rend());

    for (int i = 1; i < s1.size(); ++i)
        if (abs(s1[i]-s1[i-1]) != abs(s2[i] - s2[i-1]))
        {
            cout << "NO" << endl;
            return;
        }
    
    cout << "YES" << endl;
}

signed main()
{
    FAST_IO;

    MULTI
    solve();

    return 0;
}
