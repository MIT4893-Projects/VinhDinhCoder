//* 784903	27/06/2023 00:36:43	Minh4893IT	DPLIQ1 - DÃY CON TĂNG 1	GNU C++20	Accepted	281 ms	2640 KB

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

    vector<int> arr(n);
    vector<int> dp(n, 1);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    for (int i = 1; i < n; ++i)
        for (int j = 0; j < i; ++j)
            if (arr[j] < arr[i])
                dp[i] = max(dp[j] + 1, dp[i]);
    
    cout << *max_element(dp.begin(), dp.end());
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
