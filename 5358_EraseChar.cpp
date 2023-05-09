//* 761651	09/05/2023 13:10:50	Minh4893IT	EraseChar - Xóa kí tự	GNU C++11	Accepted	15 ms	2660 KB

#include <bits/stdc++.h>
using namespace std;

using sint = signed int;
#define ll long long
#define ull unsigned ll
#define int ll
#define ss stringstream
#define uset unordered_set
#define umap unordered_map
#define vec vector
#define pq priority_queue

#define LLMAX INT64_MAX

#define in cin
#define out cout
#define input in
#define print out
#define GET(var) getline(cin, var)

#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FORIR(i, a, n) for (int i = a; i < n; i++)
#define FORI(i, n) FORIR(i, 0, n)
#define FORR(a, n) FORIR(i, a, n)
#define FOR(n) FORIR(i, 0, n)
#define EACH(x, a) for (auto &x : a)
#define IF(cond, t, f) (cond ? t : f)
template <class T>
void OFILE(T finp, T fout)
{
    freopen(finp, "r", stdin), freopen(fout, "w", stdout);
}

bool isPalin(string s)
{
    for (int i = 0; i < s.length() / 2; ++i)
        if (s[i] != s[s.length() - i - 1])
            return false;
    return true;
}

void solve()
{
    int n, k;
    string line;
    cin >> n >> k >> line;

    n = line.length();
    for (int i = 0; i <= n - (n - k); ++i)
    {
        string sub = line.substr(i, n - k);
        if (isPalin(sub))
        {
            cout << sub;
            return;
        }
    }

    cout << "No";
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
