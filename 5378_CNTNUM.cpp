//* 761772	09/05/2023 20:00:04	Minh4893IT	CNTNUM - ĐẾM SỐ KHÔNG CHIA HẾT	GNU C++11	Accepted	15 ms	1148 KB

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

int gcd(int a, int b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int mulInRange(int start, int stop, int mul)
{
    int high = stop / mul;
    int low = start / mul - (start % mul == 0);
    return high - low;
}

void solve()
{
    int a, b, c, d;
    in >> a >> b >> c >> d;

    int total = b - a + 1;
    cout << total - (mulInRange(a, b, c) + mulInRange(a, b, d) - mulInRange(a, b, lcm(c, d)));
}

sint main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();

    solve();

    return 0;
}
