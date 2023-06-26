//* 784910	27/06/2023 01:08:56	Minh4893IT	SORTSTR - SẮP XẾP XÂU 1	GNU C++20	Accepted	78 ms	2712 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define mmap multimap
#define mset multiset
#define pq priority_queue
#define endl "\n"

#define LLMAX INT64_MAX
#define GET(var) getline(cin, var)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()

void solve()
{
    string s;
    cin >> s;

    string upper;
    string lower;
    for (auto c : s)
        if (isupper(c))
            upper += c;
        else
            lower += c;
    
    sort(upper.begin(), upper.end(), greater<char>());
    sort(lower.begin(), lower.end(), greater<char>());
    cout << upper << lower;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
