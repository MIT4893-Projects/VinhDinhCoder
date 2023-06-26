//* 784916	27/06/2023 02:29:40	Minh4893IT	GCD2ONE - XOÁ SỐ ĐỂ GCD LÀ 1	GNU C++20	Accepted	62 ms	3340 KB

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
    int n;
    cin >> n;

    int count0 = 0;
    vector<int> arr(n);

    int g = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        count0 += !arr[i];

        if (arr[i])
            g = arr[i];
    }

    if (!g)
    {
        cout << -1;
        return;
    }

    for (auto elem : arr)
        if (elem)
            g = __gcd(g, elem);
    
    if (g != 1)
        cout << -1;
    else
        cout << IF(count0, count0 - 1, 0);
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
