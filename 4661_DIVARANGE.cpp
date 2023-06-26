//* 784920	27/06/2023 02:54:57	Minh4893IT	DIVARANGE - TÌM BỘI TRONG KHOẢNG	GNU C++20	Accepted	15 ms	1120 KB

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

int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;

    int lc;
    cin >> lc;

    while (--n)
    {
        int val;
        cin >> val;
        lc = lcm(lc, val);
    }

    cout << r / lc - (l - 1) / lc;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
