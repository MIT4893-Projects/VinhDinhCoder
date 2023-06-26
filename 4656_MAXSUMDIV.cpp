//* 784917	27/06/2023 02:34:10	Minh4893IT	MAXSUMDIV - ĐẾM BỘI	GNU C++20	Accepted	15 ms	1120 KB

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
    int n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;

    int both = n / lcm(a, b);

    cout << (n / a - both) * x + (n / b - both) * y + both * max(x, y);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
