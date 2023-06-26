//* 784919	27/06/2023 02:49:33	Minh4893IT	LARGNDIGI - TÌM BỘI SỐ	GNU C++20	Accepted	15 ms	2176 KB

#include <bits/stdc++.h>
using namespace std;

#define int unsigned long long
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

int pow(int a)
{
    int res = 1;
    while (a--)
        res *= 10;
    return res;
}

int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}

void solve()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int result = pow(n) - 1;
    int l = lcm(a, lcm(b, c));

    result -= result % l;
    if (result)
        cout << result;
    else
        cout << -1;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
