//* 784911	27/06/2023 01:15:59	Minh4893IT	PINOCCHIO - LÀM MŨI CHO PINOCHIO	GNU C++20	Accepted	62 ms	2552 KB

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

    while (--n)
    {
        int val;
        cin >> val;
        g = gcd(g, val);
    }

    cout << g;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
