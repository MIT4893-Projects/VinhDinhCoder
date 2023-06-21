//* 782609	21/06/2023 21:43:46	Minh4893IT	GREFREE - PHIẾU GIẢM GIÁ	GNU C++11	Accepted	109 ms	3372 KB

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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    int v = LLMAX;
    for (int i = 0; i < m; ++i)
    {
        int val;
        cin >> val;
        v = min(val, v);
    }

    cout << sum - arr[n - v];
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
