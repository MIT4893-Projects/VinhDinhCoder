//* 783904	24/06/2023 13:40:43	Minh4893IT	GREEXP - BIỂU THỨC	GNU C++20	Accepted

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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n - 1);

    int val;
    cin >> val;

    int sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - k - 1; ++i)
        sum -= 2 * arr[i];
    cout << val + sum;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
