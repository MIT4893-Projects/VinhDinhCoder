//* 784502	26/06/2023 13:11:03	Minh4893IT	CNTPRIME1 - SỐ NGUYÊN TỐ TRONG ĐOẠN	GNU C++20	Accepted	125 ms	10532 KB

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

bitset<1000001> isPrime;
vector<int> countPrime(1000001);

void sieve(int n = 1000000)
{
    isPrime.reset();
    isPrime.flip();

    isPrime.set(0, false);
    isPrime.set(1, false);

    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime.set(j, false);

    for (int i = 1; i <= n; ++i)
        countPrime[i] = countPrime[i - 1] + isPrime[i];
}

void solve()
{
    int n;
    cin >> n;

    sieve();

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout << countPrime[b] - countPrime[a - 1] << endl;
    }
}

signed main()
{
    FAST_IO;

    solve();

    return 0;
}
