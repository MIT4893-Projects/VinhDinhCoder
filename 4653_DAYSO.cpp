//* 784914	27/06/2023 02:08:26	Minh4893IT	DAYSO - DÃY SỐ	GNU C++20	Accepted	62 ms	2592 KB

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

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

void solve()
{
    int n;
    cin >> n;

    int g;
    cin >> g;

    for (int i = 1; i < n; ++i)
    {
        int val;
        cin >> val;
        g = gcd(g, val);
    }

    cout << g * n;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
