//* 826918	18/08/2023 21:33:33	Minh4893IT	STRROOTSTR - NGÔN NGỮ ARAMIC	GNU C++20	Accepted	296 ms	2760 KB

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
    set<string> res;
    int n;
    cin >> n;

    while(n--)
    {
        string s;
        cin >> s;

        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());

        res.insert(s);
    }
    
    cout << res.size();
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
