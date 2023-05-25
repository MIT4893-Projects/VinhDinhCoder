//* 770993	25/05/2023 13:19:50	Minh4893IT	GREUSB - SAO CHÉP TỆP	GNU C++11	Accepted	15 ms	2560 KB

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

    for (auto &elem : arr)
        cin >> elem;
    
    sort(arr.begin(), arr.end(), greater<int>());

    int result = 0;
    while (m > 0)
    {
        m -= arr[result];
        ++result;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
