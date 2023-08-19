//* 827741	19/08/2023 19:15:35	Minh4893IT	PHNT - PHÂN HẠNG NGỌC TRAI - HSG 20.21	GNU C++20	Accepted	109 ms	4592 KB

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ss stringstream
#define endl "\n"
#define LLMAX INT64_MAX
#define IF(cond, t, f) (cond ? t : f)
#define OFILE(finp, fout) freopen(finp, "r", stdin), freopen(fout, "w", stdout)
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie()
#define MULTI \
    int t;    \
    cin >> t; \
    while (t--)

const int MOD = 1000000007;

int expo(int a, int b)
{
    if (!b)
        return 1;
    int t = expo(a, b / 2);
    return t * t % MOD * IF(b % 2, a, 1) % MOD;
}

int divmod(int a, int b)
{
    return a * expo(b, MOD - 2) % MOD;
}

int posmod(int num)
{
    return (num % MOD + MOD) % MOD;
}

int toi(char c)
{
    return c - 'A' + 1;
}

int n;
string s;
vector<int> h1, h2;
const int p1 = 29, p2 = 31;
vector<int> ppow1(100001), ppow2(100001);

pair<int, int> gethash(int l, int r)
{
    int hash1 = posmod(h1[r] - h1[l]);
    int hash2 = posmod(h2[r] - h2[l]);

    return {divmod(hash1, ppow1[l]), divmod(hash2, ppow2[l])};
}

bool check(int size)
{
    set<pair<int, int>> subs;
    for (int i = size; i <= n; ++i)
        subs.insert(gethash(i - size, i));
    return subs.size() == n - size + 1;
}

void preprocess()
{
    ppow1[0] = ppow2[0] = 1;
    for (int i = 1; i <= 100000; ++i)
        ppow1[i] = ppow1[i - 1] * p1 % MOD,
        ppow2[i] = ppow2[i - 1] * p2 % MOD;

    cin >> n;
    cin >> s;
    s = ' ' + s;

    h1.resize(n + 1);
    h2.resize(n + 1);

    for (int i = 1; i <= n; ++i)
        h1[i] = (h1[i - 1] + toi(s[i]) * ppow1[i]) % MOD,
        h2[i] = (h2[i - 1] + toi(s[i]) * ppow2[i]) % MOD;
}

void solve()
{
    int low = 1;
    int high = n;
    int result = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {
            result = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    preprocess();

    // MULTI
    solve();

    return 0;
}
