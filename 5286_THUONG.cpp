//* 762083	10/05/2023 17:30:13	Minh4893IT	THUONG - PHẦN THƯỞNG - HSG 17.18	GNU C++11	Accepted	46 ms	3352 KB

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

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> board(n + 3, vector<int>(m + 3, -1e16));

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> board[i][j];

    for (int j = 2; j <= m; ++j)
        for (int i = 1; i <= n; ++i)
            board[i][j] += max({board[i][j - 1], board[i - 1][j - 1], board[i + 1][j - 1]});

    int result = board[1][m];
    for (int i = 1; i <= n; ++i)
            result = max(result, board[i][m]);
    cout << result;
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
