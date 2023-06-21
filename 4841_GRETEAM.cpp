//* 782598	21/06/2023 21:34:31	Minh4893IT	GRETEAM - CHỌN ĐỘI	GNU C++11	Accepted	93 ms	3352 KB

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
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    sort(arr.begin(), arr.end());

    int result = 0;
    for (int i = 1; i < n; i += 2)
        result += arr[i] - arr[i - 1];
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
