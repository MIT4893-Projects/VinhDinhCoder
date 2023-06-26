//* 784591	26/06/2023 15:34:21	Minh4893IT	TRUCNHAT - TRỰC NHẬT	GNU C++20	Accepted	15 ms	1124 KB

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

int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    int l = lcm(a, b);
    cout << l << endl;
    cout << "An: " << l / a << endl;
    cout << "Bach: " << l / b << endl;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
