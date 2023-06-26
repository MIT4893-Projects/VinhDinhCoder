//* 784915	27/06/2023 02:16:19	Minh4893IT	CUTSQARE - CẮT HÌNH VUÔNG	GNU C++20	Accepted	15 ms	1124 KB

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
    int a, b;
    cin >> a >> b;

    int g = __gcd(a, b);
    cout << a / g * b / g;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
