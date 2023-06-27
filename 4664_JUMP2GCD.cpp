//* 785015	27/06/2023 09:14:28	Minh4893IT	JUMP2GCD - BƯỚC NHẢY ALPHA	GNU C++20	Accepted	62 ms	2604 KB

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

int mod(int a, int b)
{
    return (a % b + b) % b;
}

void solve()
{
    int n, k, d1, d2;
    cin >> n >> k >> d1 >> d2;

    int result = 0;
    int g = __gcd(d1, d2);
    while (n--)
    {
        int val;
        cin >> val;
        result += mod(k, g) == mod(val, g);
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
