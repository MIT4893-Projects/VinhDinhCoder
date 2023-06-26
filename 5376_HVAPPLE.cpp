//* 784485	26/06/2023 12:34:27	Minh4893IT	HVAPPLE - THU HOẠCH TÁO	GNU C++20	Accepted	46 ms	3332 KB

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

    vector<int> arr(n + 2);

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    int result = 0;
    for (int i = 1; i < arr.size(); ++i)
    {
        int val = min(m, arr[i] + arr[i - 1]);
        result += val;

        arr[i - 1] -= val;
        if (arr[i - 1] < 0)
            arr[i] += arr[i - 1];
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
