//* 825718	17/08/2023 19:48:16	Minh4893IT	TUVUNG - TỪ VỰNG	GNU C++20	Accepted	46 ms	2864 KB

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

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
}

void solve()
{
    string s;
    cin >> s;

    int cntvowel = 0, cntnonvowel = 0;
    int result = 0;
    for (auto c : s)
    {
        if (isVowel(c))
            result += cntnonvowel, ++cntvowel;
        else
            result += cntvowel, ++cntnonvowel;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    // MULTI
    solve();

    return 0;
}
