//* 770992	25/05/2023 13:15:21	Minh4893IT	MMSEG - TÌM ĐOẠN CON	GNU C++11	Accepted	62 ms	3332 KB

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

vector<int> arr;
vector<pair<int, string>> min_max;

void solve()
{
    int n;
    cin >> n;

    int mi = LLMAX;
    int ma = -LLMAX;
    arr = vector<int>(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mi = min(mi, arr[i]);
        ma = max(ma, arr[i]);
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == mi)
            min_max.push_back({i, "min"});
        else if (arr[i] == ma)
            min_max.push_back({i, "max"});
    }

    if (mi == ma)
    {
        cout << 1;
        return;
    }

    int result = LLMAX;

    for (int i = 1; i < min_max.size(); ++i)
    {
        if (min_max[i].second != min_max[i - 1].second)
            result = min(result, min_max[i].first - min_max[i - 1].first + 1);
    }
    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
