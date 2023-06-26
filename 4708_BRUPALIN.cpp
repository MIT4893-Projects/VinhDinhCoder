//* 784610	26/06/2023 15:51:54	Minh4893IT	BRUPALIN - XÂU PALIN	GNU C++20	Accepted	15 ms	1124 KB

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
    string s;
    cin >> s;

    int n = s.size();
    int count = 0;

    for (int i = 0; i < n / 2; ++i)
        count += s[i] != s[n - i - 1];

    cout << IF(count == 1 || (n % 2 && count == 0), "YES", "NO");
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
