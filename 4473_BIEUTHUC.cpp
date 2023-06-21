//* 780574	17/06/2023 19:01:20	Minh4893IT	BIEUTHUC - Tính giá trị biểu thức	GNU C++11	Accepted	15 ms	1088 KB

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
    int a, b, c, d, x;
    cin >> a >> b >> c >> d >> x;

    cout << a * x * x * x + b * x * x + c * x + d;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
