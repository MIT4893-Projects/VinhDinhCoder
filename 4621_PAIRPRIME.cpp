//* 10590	03/08/2023 08:45:03	Minh4893IT	PAIRPRIME - ĐẾM CẶP NGUYÊN TỐ	GNU C++20	Accepted	437 ms	2640 KB

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

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

signed randint(signed l = 0, signed r = 1000000000)
{
    return uniform_int_distribution<signed>(l, r)(rng);
}

int exp(int a, int b, int m)
{
    if (!b)
        return 1;
    int t = exp(a, b / 2, m);
    if (b % 2)
        return t * t % m * a % m;
    return t * t % m;
}

// Fermat's probability check
bool isPrime(const int &n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n < 11)
        return false;

    for (int i = 0; i < 5; ++i)
    {
        int a = 2 + randint() % (n - 3);
        if (exp(a, n -1, n) != 1)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    int result = 0;
    int cntPrimes = 0;
    for (int i = 0; i < n; ++i)
    {
        int val;
        cin >> val;

        if (isPrime(val))
            result += n - ++cntPrimes;
    }

    cout << result;
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
