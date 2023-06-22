//* 782765	22/06/2023 08:36:06	Minh4893IT	GREDRAGON - ĐẤU RỒNG	GNU C++11	Accepted	15 ms	2620 KB

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
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);
    for (int i = 0; i < n; ++i)
        cin >> dragons[i].first >> dragons[i].second;

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < dragons.size(); ++i)
    {
        if (s <= dragons[i].first)
        {
            cout << "NO";
            return;
        }

        s += dragons[i].second;
    }

    cout << "YES";
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
