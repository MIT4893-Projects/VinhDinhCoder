//* 780580	17/06/2023 19:27:08	Minh4893IT	HERON - Công thức Heron	GNU C++11	Accepted	15 ms	1072 KB

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
    int a, b, c;
    cin >> a >> b >> c;

    double s = (double)(a + b + c) / 2;
    printf("%.2f", sqrt(s * (s - a) * (s - b) * (s - c)));
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
